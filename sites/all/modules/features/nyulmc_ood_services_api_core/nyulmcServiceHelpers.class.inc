<?php
/**
 * @class nyulmcServiceHelpers
 *
 *   This is a class we use for processing fields from Drupal into an approprate
 *   service response format. Some base logic exists for processing field types,
 *   while greater module functionality exists for things like addresses, links,
 *   etc. Other logic processes WYSIWYG fields (including parsing and prepping
 *   media assets), as well as videos, images, etc.
 *
 *   This is used anywhere we prepare a services response to return a JSON
 *   array of data.
 */
class nyulmcServiceHelpers {

    /**
     * Check the content of an html-enabled field and determine if it is empty.
     *
     * This handles fields which may have things such as:
     *
     * <p> &nbsp; &nbsp;</p>
     *
     * and does not count that content as having values.
     *
     * Use this for services, when determining if we should render a field's
     * value, or set it to null.
     *
     * @param string $field_data
     *   The data of a field which we should determine as empty or not.
     *
     * @return boolean             [description]
     */
    static function isBodyEmpty($field_data) {
        if (is_array($field_data)) {
            $field_data = $field_data['value'];
        }
        $my_text = trim(strip_tags($field_data, '<img><img/>'));
        $my_text = trim(str_replace('&nbsp;', ' ', $my_text));

        if(empty($my_text)) {
            return TRUE;
        }

        return FALSE;
    }

    /**
     * Filter out potential empty fields.
     *
     * @param string $value
     *   A string to check for empty things, like blank <p> tags, whitespace, etc.
     *
     * @return string | null
     */
    static function filterEmptyField($value) {
        if(self::isBodyEmpty($value)) {
            return NULL;
        }
        else {
            return trim($value);
        }
    }

    /**
     * General cleanup of output to prepare it for a service response.
     *
     * @param string $value
     *   A final string representation of a field. No [safe_value] array
     *   by this point, please.
     *
     * @return string | null
     *   A clean string, ready for output. If determined empty,
     *   this may return null instead.
     */
    static function prepareOutput($value) {
        return html_entity_decode(self::filterEmptyField($value));
    }

    /**
     * Prepare a wrapped body field. If this is a text area,
     * we'll grab the safe_value.
     *
     * Blank fields in empty <p> tags will also be removed.
     *
     * @param EntityMetadata Wrapped field $wrapped_field
     *   A wrapped field from an entityMetadataWrapped entity.
     *
     * @return string | null
     *   The prepared string, or null if it was blank.
     */
    static function prepareBody($wrapped_field) {
      if(isset($wrapped_field)) {
        $value = $wrapped_field->value();

        // If this is a text area, get the format.
        $format = isset($value['format']) ? $value['format'] : null;

        // Text areas will have an array, with a safe_value,
        // which is what we want to return.
        if(isset($value['safe_value'])) {
          $value = $value['safe_value'];
        }

        // If our format is one of the WYSIWYG-enabled fields, we'll parse the
        // output.
        if($format !== null){
          switch($format){
            case 'nyulmc_basic_html':
            case 'nyulmc_events_html':
            case 'nyulmc_ood_links_and_basic':
              $value = self::prepareWysiwygOutput($value);
              break;
            case 'nyulmc_links_only':
              // The safe value on this format is not maintaining the outter p tag,
              // so we'll wrap it manually before processing.
              $value = self::prepareWysiwygOutput('<p>' . $value . '</p>');
              break;
          }
        }

        // Finally, clean the output, and return it.
        return self::prepareOutput($value);
      }
    }

    /**
     * Preperation of WYSIWYG fields for output. Note, this is *any* field which
     * might be WYSIWYG, even if no WYSIWYG markup was inserted.
     *
     * @param string $value
     *   The final string representation of a WYSIWYG field's value. We'll process
     *   and parse this, making any substitutions or cleanup before passing to the
     *   front end.
     *
     * @return string
     *   A processed WYSIWYG field value.
     */
    static function prepareWysiwygOutput($value) {
        require_once(libraries_get_path('simplehtmldom') . '/simple_html_dom.php');

        if($value == '' || !isset($value)) {
            return null;
        }

        $html = str_get_html($value);

        // Include out images class.
        module_load_include('inc', 'nyulmc_ood_services_api_core', 'nyulmcServicesImage.class');

        // If the URL contains a drupal URL,
        // change it from the forbidden to the substitute.
        $forbidden_path = nyulmcServicesImage::getLocalHostFilePath();
        $substitute_path = nyulmcServicesImage::getReplacementHost();

        // Handle all PDF Media Links.
        // This will only substitute forbidden URLs, and ignore all others.
        foreach($html->find('a[class*=nyulmc_pdf]') AS $element) {
            $url = $element->href;
            $element->href = self::rebuildUrl($url, $forbidden_path, $substitute_path);
        }

        // Handle all Images.
        // This will only substitute forbidden URLs, and ignore all others.
        foreach($html->find('img') AS $element) {
            $url = $element->src;
            $element->src = self::rebuildUrl($url, $forbidden_path, $substitute_path);

            // Unset any dimension attributes on an image.
            if($element->width) {
                unset($element->width);
            }
            if($element->height) {
                unset($element->height);
            }
        }

        // When a p with a class of a photo quote's photo does not have an image, delete
        // the class attr
        $figures = $html->find('figure.giving-photo-quote');
        foreach ($figures as $figure) {
            $imgs = $figure->find('.figure img');
            $videos = $figure->find('.figure iframe');
            if (empty($imgs) and empty($videos)) {
                $figure->class = $figure->class . ' no-photo';
            }
        }

        // Handle all brightcove objects.
        // This will strip out Brightcove objects, and add a simple <video> tag,
        // using the video ID.
        foreach($html->find('object[class*=brightcove-field-embed]') AS $element) {
            $element->innertext = $element->innertext . '<param name="isVid" value="true" /><param name="isUI" value="true" /><param name="dynamicStreaming" value="true" /><param name="includeAPI" value="true" /><param name="templateLoadHandler" value="onTemplateLoad" /><param name="templateReadyHandler" value="onTemplateReady" />';
            $element->outertext = '<div class="containing-block"><div class="outer-container"><div style="display:none"></div>' . $element->outertext . '</div></div>';
        }

        return (string) $html;
    }

    /**
     * Prepare images on Wysiwyg input for service.
     * 
     * @param string $value
     *   The final string representation of a WYSIWYG field's value. We'll process
     *   and parse this.
     * 
     * @return array
     *   An array of all the images on the field.
     */
    static function prepareWysiwygImages($value) {
        require_once(libraries_get_path('simplehtmldom') . '/simple_html_dom.php');

        if ($value == '' || !isset($value)) {
            return array();
        }

        $html = str_get_html($value);

        // Include out images class.
        module_load_include('inc', 'nyulmc_ood_services_api_core', 'nyulmcServicesImage.class');
        $images = array();

        // Handle all Images. Iterates over all the images in the body and
        // creates an array pointing to their different styles.
        foreach ($html->find('img') AS $element) {
            $query = new EntityFieldQuery();

            $attributes = $element->attr;

            // Get the file name of the image
            $filename = basename($attributes['src']);
            $original_uri = "public://" . strtok($filename, '?');
            
            // the uris of the files, including the trailing ?itok=abc123
            $attributes['original'] = nyulmcServicesImage::createFileUrl('public://') . $filename;
            $attributes['large'] = nyulmcServicesImage::createFileUrl(image_style_path('large', '')) . '/' . $filename;
            $attributes['square_thumbnail'] = nyulmcServicesImage::createFileUrl(image_style_path('square_thumbnail', '')) . '/' . $filename;

            // if the styled file does not exist, we create it 
            if (!file_exists(image_style_path('large', '') . '/' . $filename)) {
                image_style_create_derivative(image_style_load('large'), $original_uri, image_style_path('large', strtok($filename, '?'    )));
            }
            if (!file_exists(image_style_path('square_thumbnail', '') . '/' . $filename)) {
                image_style_create_derivative(image_style_load('square_thumbnail'), $original_uri, image_style_path('square_thumbnail', strtok($filename, '?'    )));
            }
            
            // the caption is the alt attribute
            $attributes['caption'] = $attributes['alt'];
            
            // unset all attributes that are not going to be exposed
            unset($attributes['class']);
            unset($attributes['typeof']);
            unset($attributes['alt']);
            unset($attributes['src']);
            $images[] = $attributes;
        }
        return $images;
    }

    /**
     * Given a forbidden url path, we'll check a link, and replace it, if found.
     *
     * @param string $url
     *   A URL we should parse, and replace any forbidden hosts.
     * @param  string $forbidden_chunk
     *   A host/path piece which should be replaced if found in a url.
     *
     * @return string
     *   A URL, with any forbidden pieces replaced by acceptable host/path value.
     */
    static function rebuildUrl($url, $forbidden_root_path, $substitute_root) {

        // Check for an existing forbidden URL piece.
        $domain_pos = strpos($url, $forbidden_root_path);
        if($domain_pos !== FALSE) {
            // Get the path after the forbidden domain.
            $path = substr($url, $domain_pos + strlen($forbidden_root_path));
            return $substitute_root . $path;
        }

        return $url;
    }

  /**
   * Strips the host and scheme part of a url if iot matched the forbidden path.
   *
   * 'nyulangone.org/location' => '/location',
   * 'http://nyulangone.org/location' => '/location',
   * '/nyulangone.org/location' => '/nyulangone.org/location',
   * 'http://google.com' => 'http://google.com',
   * 'google.com/location' => '/google.com/location',
   * 'whatever-location/location' => '/whatever-location/location',
   *
   * @param string $original_url
   * @param string $forbidden_root_path
   * @return string
   */
  static function stripHost($original_url, $forbidden_root_path){
    if(empty($original_url)){
      return "";
    }
    if($original_url[0] === '/' && $original_url[1] !== '/'){
      return $original_url;
    }
    $url = parse_url($original_url);
    if(empty($url['scheme'])){
      $fakeSchemeAdded = "http://" . $original_url;
      $processedWithFakeScheme = self::stripHost($fakeSchemeAdded, $forbidden_root_path);
      if($processedWithFakeScheme !== $fakeSchemeAdded){
        return $processedWithFakeScheme;
      }
      return '/' . $original_url;
    }
    $host_and_scheme = $url['scheme'] . '://' . $url['host'];
    $rebuild_host_and_scheme = self::rebuildUrl($host_and_scheme, $forbidden_root_path, '');
    if($rebuild_host_and_scheme == $host_and_scheme){
      return $original_url;
    }
    return self::rebuildUrl($original_url, $forbidden_root_path, '');
  }

  /**
   * Adds the scheme to a url if it does not have it
   *
   * @param $url
   * @param string $scheme
   * @return string
   */
  static function addScheme($url, $scheme = 'http://')
  {
    if(empty($url)) {
      return '';
    }
    return parse_url($url, PHP_URL_SCHEME) === null ?
      $scheme . $url : $url;
  }
  
    /**
     * Given an image value() array, we'll attempt to prepare that image
     * for a service response.
     *
     * @param array $value
     *   The output of a value() call on an EntityWrapped Node image field.
     *
     * @return string | null
     *   We'll return a string with the file path, otherwise null.
     */
    static function prepareImage($value) {

        // Include our images class.
        module_load_include('inc', 'nyulmc_ood_services_api_core', 'nyulmcServicesImage.class');

        $result = NULL;

        if(isset($value['uri']) && strpos(trim($value['uri']), 'public://') === 0) {
            $result = nyulmcServicesImage::createFileUrl($value['uri']);
        }
        elseif(isset($value['uri'])) {
            $result = file_create_url($value['uri']);
        }

        return $result;
    }

    /**
     * Process a node reference for a response.
     *
     * @param EntityMetadataWrapped Entity $wrapped_node
     *   The wrapped node our node reference is immediately attached it.
     * @param string $node_ref_field_name
     *   The field name of the node reference on the passed $wrapped_entity.
     * @param EntityMetadatWrapped link $alternate_link
     *   If no node is referenced, substitute the passed link in it's place.
     * @param  array  $additional_properties
     *   An array of additional properties, which we wish to add to the link
     *   object being returned. We only add white-listed keys.
     *
     * @return [type]
     */
    static function prepareEntityReference($wrapped_entity, $node_ref_field_name, $alternate_link=null, $additional_properties=array()) {

        // Node Reference, which is both valid, and published.
        if($wrapped_entity->$node_ref_field_name->getIdentifier()
            && $wrapped_entity->$node_ref_field_name->status->value() == 1) {
            $node = $wrapped_entity->$node_ref_field_name;
            $nid = $node->getIdentifier();

            return _nyulmc_ood_services_api_core_node_retrieve($nid);
        }
        // If no node reference was present, fall back to any passed link field.
        elseif(isset($alternate_link) && !($wrapped_entity->$node_ref_field_name->getIdentifier())) {
            return self::processWrappedLink($alternate_link, $additional_properties);
        }

        // If no data was found, return nothing.
        return null;
    }

    /**
     * Given a Drupal address, return a neat version,
     * with only the fields we need.
     */
    static function prepareAddress($address) {

        // Generate state and country name, if they were not set.
        $address['province_name'] = isset($address['province_name']) ? $address['province_name'] : self::getStateByCode($address['country'], $address['province']);
        $address['country_name'] = isset($address['country_name']) ? $address['country_name'] : self::getCountryByCode($address['country']);

        $data = new stdClass();
        $data->name = !empty($address['name']) ? trim($address['name']) : null;
        $data->street = !empty($address['street']) ? trim($address['street']) : null;
        $data->street_2 = !empty($address['additional']) ? trim($address['additional']) : null;
        $data->city = !empty($address['city']) ? trim($address['city']) : null;
        $data->state = !empty($address['province']) ? trim($address['province']) : null;
        $data->zip = !empty($address['postal_code']) ? trim($address['postal_code']) : null;
        $data->country = !empty($address['country']) ? trim($address['country']) : null;
        $data->state_name = !empty($address['province_name']) ? trim($address['province_name']) : null;
        $data->country_name = !empty($address['country_name']) ? trim($address['country_name']) : null;

        return $data;
    }

    /**
     * Format a single wrapped link into a proper services response format.
     *
     * @param EntityMetadata Wrapped Link $wrapped_link
     *   A wrapped link, which we'll format and return.
     * @param  array  $additional_properties
     *   An array of additional properties, which we wish to add to the link
     *   object being returned. We only add white-listed keys.
     * @param $processUrl boolean whether we will process the url with stripHost()
     *
     * @return stdClass
     *   A link, in object form, ready to be returned via the services layer.
     */
    static function processWrappedLink($wrapped_link, $additional_properties = array(), $processUrl = true) {
      if (isset($wrapped_link) && $wrapped_link->value()) {
        $l = new stdClass();
        if ($processUrl) {
          $l->url = self::stripHost($wrapped_link->url->value(), 'nyulangone.org');
        }
        else {
          $l->url = $wrapped_link->url->value();
        }
        $l->title = $wrapped_link->title->value();

        // Add additional properties in the same format as group of links, for
        // a more consistent model.
        if (is_array($additional_properties) && !empty($additional_properties)) {
          foreach($additional_properties AS $property => $value) {
            switch($property) {
              case 'short_description':
              case 'short_title':
                $l->$property = $value;
                break;
            }
          }
        }

        return $l;
      }
      return null;
    }

    /**
     * Format an array of wrapped links into a proper services response format.
     *
     * @param EntityMetadata Wrapped Link $wrapped_link_field
     *   An array of wrapped links, which we'll format and return.
     * @param array $destination_array
     *   An array (passed by reference) where we should append the links to,
     *   as we process them.
     */
    static function processWrappedLinks($wrapped_link_field, &$destination_array) {
        foreach($wrapped_link_field->getIterator() AS $link) {
            $result = self::processWrappedLink($link);
            if(isset($result)) {
                array_push($destination_array, $result);
            }
        }
    }

  /**
   * Given a taxonomy term "tag" array, asssemble a generic response item for the
   * JSON retrieve for web services.
   *
   * @param entityMetadataWrapper $wrapped_tag_field
   *   The wrapped field containing the term "tag" (field) to be processed.
   * @param array $destination_array
   *   An array each tag should be pushed to.
   */
  static function processTags($wrapped_tag_field, &$destination_array) {

    foreach($wrapped_tag_field->getIterator() AS $id => $term) {

      // Only process initialized taxonomy terms.
      if($term->getIdentifier()) {
        $t = new stdClass();
        $t->name = $term->value()->name;
        $t->id = $term->getIdentifier();

        // Add vocabulary-specific fields.
        switch($term->value()->vocabulary_machine_name) {
          case 'conditions':
          case 'treatments':
            $t->cuid = $term->field_cuid->value();
            break;
        }

        // Push our new item back to the destination array.
        array_push($destination_array, $t);
      }
    }
  }

  /**
   * Given a taxonomy term "tag" with a unique value, asssemble a generic response item for the
   * JSON retrieve for web services.
   *
   * @param entityMetadataWrapper $term
   *   The wrapped field containing the term "tag" (field) to be processed.
   *
   * @return stdClass
   */
  static function processSingleTag($term) {

      // Only process initialized taxonomy terms.
      if($term->getIdentifier()) {
        $t = new stdClass();
        $t->name = $term->value()->name;
        $t->id = $term->getIdentifier();

        // Add vocabulary-specific fields.
        switch($term->value()->vocabulary_machine_name) {
          case 'categories':
            break;
        }
        return $t;
    }
    return null;
  }


    /**
     * Given a node "tag" array, asssemble a generic response item for the
     * JSON retrieve for web services.
     *
     * @param entityMetadataWrapper $wrapped_node_field
     *   The wrapped field containing the node "tag" (field) to be processed.
     * @param array $destination_array
     *   An array each tag should be pushed to.
     */
    static function processNodeTags($wrapped_node_field, &$destination_array) {

        foreach($wrapped_node_field->getIterator() AS $id => $node) {

            // Only process initialized nodes. (ignore null ones)
            if($node->getIdentifier() && $node->status->value() == 1) {
                $n = new stdClass();
                $n->id = $node->getIdentifier();
                $n->name = $node->title->value();

                // Add bundle-specific node fields.
                switch($node->type->value()) {

                    case 'location':
                        $n->teaser = self::prepareBody($node->field_location_highlight);
                        $n->address = self::prepareAddress($node->field_address->value());
                        $n->phone = $node->field_phone_number->value();
                        $n->epic_id = $node->field_location_epic_id->value();
                        $n->location_image = self::prepareImage($node->field_location_image->value());
                        break;

                    case 'doctor_profile':
                        $n->bio = self::prepareBody($node->body);
                        $n->npi = $node->field_npi->value();
                        $n->slug = $node->field_slug->value();
                        break;
                }

                // Push our new item back to the destination array.
                array_push($destination_array, $n);
            }
        }
    }

    /**
     * Given a brightcove video field, gather details, and assemble a response
     * object.
     *
     * @param entityMetadataWrapper $wrapped_entity
     *   The wrapped entity immediately below the field containing the
     *   brightcove video.
     * @param string $field_name
     *   The name of the brightcove field attached to our entitymetadataWrapper.
     * @param string $entity_type
     *   The type of entity the video is attached to. Defaults to node.
     *
     * @return stdClass
     *   An object with the details of the video, ready for a services response.
     */
    static function processBrightcoveField($wrapped_entity, $field_name, $entity_type = 'node') {

        $response = null;

        if($wrapped_entity->getIdentifier() && isset($wrapped_entity->value()->$field_name)) {
            $brightcove_field = $wrapped_entity->value()->$field_name;

            // Only populate a default player if we have a video ID.
            if(isset($brightcove_field[LANGUAGE_NONE]) && $brightcove_field[LANGUAGE_NONE][0]['brightcove_id']) {
                $response = new stdClass();

                // Get our field's id and player name.
                $response->brightcove_id = $brightcove_field[LANGUAGE_NONE][0]['brightcove_id'];
                $player_name = $brightcove_field[LANGUAGE_NONE][0]['player'];

                // If no player was explicitly definied for this field, fall back to our default.
                if (!$player_name) {
                    $instance = field_info_instance($entity_type, $field_name, $wrapped_entity->getBundle());
                    $player_name = $instance['settings']['brightcove_player'] ? $instance['settings']['brightcove_player'] :
                            variable_get('brightcove_player_default', '');
                }

                // Get the actual player details.
                $response->player = brightcove_player_load($player_name);

                if(isset($response->brightcove_id) && !empty($response_data->brightcove_id)) {
                    $response_data->video->embed = brightcove_field_player('brightcove', $entity_type, $wrapped_entity->getIdentifier(), $field_name, 0);
                }
            }
        }
        return $response;
    }

    /**
     * Get the full country name, give a 2-digit code.
     *
     * @see Location module.
     *
     * @param string $code
     *   2 digit country code.
     *
     * @return string |
     *   Full English country name for the code, or null if not found.
     */
    static function getCountryByCode($code) {
        module_load_include('inc', 'location', 'location');
        return location_country_name($code);
    }

    /**
     * Get the full state/province name, give a province code.
     *
     * @see Location module.
     *
     * @param string $country_code
     *   2 digit country code this state/province belongs to.
     * @param string $code
     *   The province code we should translate.
     *
     * @return string
     *   The full English state/province name for the code, or null if not found.
     */
    static function getStateByCode($country_code, $code) {
        module_load_include('inc', 'location', 'location');
        return location_province_name($country_code, $code);
    }


    /**
     * Group of Links Module Services Response population.
     *
     * We take a node's Group of Links field, and build out a proper response.
     * This is used in several models, and often several places within a single module.
     *
     * @param EntityMetadataWrapper $node_wrapped_source_field
     *   The field on the node which contains our array of links. This must be an
     *   entity metadata wrapper.
     * @param array $destination_array
     *   An array where we should populate the output. Passed by reference.
     */
    static function processGroupOfLinksModule($node_wrapped_source_field, &$destination_array, $field_name = NULL) {

        $additional = array();

        // Process the EntityMetadataWrapped Field containing our links.
        foreach($node_wrapped_source_field->getIterator() AS $link) {
            $l = new stdClass();

            $description = FALSE;

            switch($field_name) {
                // Location -> Overview Links
                case 'field_loc_overview_links':
                    $link_field_name = 'field_over_links_link';
                    $node_ref_field_name = 'field_over_links_node_ref';

                    // Description (not unique to link type).
                    $description = self::prepareBody($link->field_over_links_short_desc);

                    // Process override title.
                    $additional['override_title'] = (isset($link->field_over_links_title_override)) ? $link->field_over_links_title_override->value() : null;
                    break;

                default:
                    $link_field_name = 'field_gol_module_link';
                    $node_ref_field_name = 'field_gol_module_node_reference';

                    // Process override title.
                    $additional['override_title'] = (isset($link->field_gol_module_title_override)) ? $link->field_gol_module_title_override->value() : null;
                    break;
            }

            // Prepare a node reference, or a manual link if no reference was set.
            $l = self::prepareEntityReference($link, $node_ref_field_name, $link->$link_field_name, $additional);

            // If we found our entity reference, add any related fields,
            // and push it to our destination array.
            if(isset($l)) {
                if($description !== FALSE) {
                    $l->description = $description;
                }
                array_push($destination_array, $l);
            }
        }
    }


    /**
     * Process a leadership module for response.
     *
     * @param EntityMetadataWrapper $wrapped_entity
     *   A wrapped node, which should be the parent of our leadership field.
     * @param string $leadership_field_name
     *   The machine name of the leadership field, which we should process, and
     *   is directly attached to the passed $wrapped_entity.
     * @param array $response_array
     *   The destination where we should push each processed leader.
     */
    static function processLeadershipModule($wrapped_entity, $leadership_field_name, &$response_array) {

        // The leadership field is an array of 0 or more leaders. Process each one,
        // and push it to our destination array.
        foreach ($wrapped_entity->$leadership_field_name AS $leader_collection) {
            $leader = new stdClass();

            // Grab our doctor field, which may not be set.
            $doctor_wrapper = $leader_collection->field_location_leader;

            // Defaults.
            $leader->leader_name = new stdClass();
            $leader->leader_title = null;
            $leader->leader_description = null;
            $leader->leader_degree = null;
            $leader->leader_specialty = null;
            $leader->leader_image = null;

            // Handle unpublished leadership.
            if($doctor_wrapper->getIdentifier() && $doctor_wrapper->status->value() == 0) {
                return;
            }
            // If a doctor was set, it will have an identifier. This is the only way
            // to check this, since __isset() does not work.
            elseif($doctor_wrapper->getIdentifier() && $doctor_wrapper->status->value() == 1) {
                $leader->doctor = new stdClass();
                $leader->doctor->nid = $doctor_wrapper->getIdentifier();
                $leader->doctor->npi = $doctor_wrapper->field_npi->value();
                $leader->doctor->name = $doctor_wrapper->title->value();
            }

            $leader->leader_name->first_name = $leader_collection->field_location_leader_name->value();
            $leader->leader_name->middle_name = $leader_collection->field_location_leader_name_middl->value();
            $leader->leader_name->last_name = $leader_collection->field_location_leader_name_last->value();
            $leader->leader_title = $leader_collection->field_location_leader_title->value();
            $leader->leader_description = self::prepareBody($leader_collection->field_doctor_leadership_descript);
            $leader->leader_degree = $leader_collection->field_location_leader_degree->value();
            $leader->leader_specialty = $leader_collection->field_location_leader_specialty->value();

            // Enhanced Image (URL only).
            $leader->leader_image = self::prepareImage($leader_collection->field_location_leader_photo->value());

            array_push($response_array, $leader);
        }
    }

    /**
     * Prepare a wrapped boolean field.
     *
     * @param EntityMetadata Wrapped field $wrapped_field
     *   A wrapped field from an entityMetadataWrapped entity.
     *
     * @return boolean | null
     *   The prepared boolean, or null if it was not a boolean field.
     */
    static function prepareBooleanOutput($field_data) {
        if($field_data->type() == 'boolean'){
            return ($field_data->value())?true:false;
        }

        return null;

    }
}
