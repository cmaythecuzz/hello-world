<?php

/**
 * Append data for fund nodes to our response,
 * if this was a fund content type.
 *
 * @param Object $response_data
 *   The response object we'll be returning for the request. Passed by reference.
 * @param Entity_Metadata_Wrapper $node_wrapper
 *   The wrapped node, which is our source for the response data we'll load
 *   into our return object.
 * @return Object | null
 */
function _nyulmc_ood_content_type_event_retrieve_event($response_data, $node_wrapper) {

  // If this is not our type, get out of here.
  if ($node_wrapper->type->value() !== 'event') {
    return;
  }

  // Overriding the title of the event here because $response_data won't have the title preloaded
  // when an event is highlighted but is not one of the last 20 added events.
  $response_data->title = $node_wrapper->title->value();

  // Helper class for processing output.
  $helper = new nyulmcServiceHelpers();

  // Main
  $response_data->add_the = $helper::prepareBooleanOutput($node_wrapper->field_event_add_the);
  $response_data->event_id = $helper::prepareBody($node_wrapper->field_event_id);
  $response_data->overview = $helper::prepareBody($node_wrapper->field_event_overview);
  $response_data->hero_image = $helper::prepareImage($node_wrapper->field_event_hero_image->value());
  $response_data->preview_image = $helper::prepareImage($node_wrapper->field_event_preview_image->value());
  $response_data->body_1 = $helper::prepareBody($node_wrapper->field_event_body_1);
  $response_data->body_2 = $helper::prepareBody($node_wrapper->field_event_body_2);
  $response_data->contact_info = $helper::prepareBody($node_wrapper->field_event_contact_info);
  $response_data->contact_phone = $helper::prepareBody($node_wrapper->field_event_contact_phone);
  $response_data->contact_email = $helper::prepareBody($node_wrapper->field_event_contact_email);
  $response_data->slug = $helper::prepareBody($node_wrapper->field_event_slug);

  // Honorees
  $honorees = new stdClass();
  $honorees->section_title = $helper::prepareBody($node_wrapper->field_event_honorees_sect_title);
  $honorees->honorees = array();
  foreach ($node_wrapper->field_event_honoree as $honoree) {
    $honorees->honorees[] = array(
      'doctor_npi' => $helper::prepareBody($honoree->field_event_honoree_doctor_npi),
      'name' => $helper::prepareBody($honoree->field_event_honoree_name),
      'title' => $helper::prepareBody($honoree->field_event_hono_specialty_title),
      'image' => $helper::prepareImage($honoree->field_event_honoree_image->value()),
      'text' => $helper::prepareBody($honoree->field_event_honoree_text),
    );
  }
  $response_data->honorees = $honorees;

  // Donate to Event
  $donate_section = new stdClass();
  $donate_section->show_module = $helper::prepareBooleanOutput($node_wrapper->field_event_show_donate_module);
  $donate_section->form_id = $helper::prepareBody($node_wrapper->field_event_donate_form_id);
  $donate_section->allocation_code = $helper::prepareBody($node_wrapper->field_event_donate_allocation_co);
  $donate_section->appeal_code = $helper::prepareBody($node_wrapper->field_event_donate_appeal_code);
  $response_data->donate = $donate_section;

  // Past Event
  $past_event = new stdClass();
  $past_event->show_on_landing = $helper::prepareBooleanOutput($node_wrapper->field_event_past_show_on_landing);

  $recognitions = array();
  foreach ($node_wrapper->field_event_past_recognitions as $recognition) {
    $this_recognition = new stdClass();
    $this_recognition->donor_name = $helper::prepareBody($recognition->field_event_past_reco_donor_name);
    $this_recognition->text = $helper::prepareBody($recognition->field_event_past_recognitio_text);
    $recognitions[] = $this_recognition;
  }

  $recognitions_section = new stdClass();
  $recognitions_section->recognitions = $recognitions;
  $recognitions_section->section_title = $helper::prepareBody($node_wrapper->field_event_past_recogniti_title);
  $recognitions_section->section_sub_title = $helper::prepareBody($node_wrapper->field_event_pas_recogn_sub_title);
  $recognitions_section->ad_journal = $helper::addScheme($helper::prepareBody($node_wrapper->field_event_past_reco_ad_journal));
  $past_event->recognition = $recognitions_section;

  $hero_stats = array();
  foreach ($node_wrapper->field_event_past_hero_stats as $stat) {
    $this_stat = new stdClass();
    $this_stat->text_line1 = $helper::prepareBody($stat->field_past_stats_text_line_1);
    $this_stat->text_line2 = $helper::prepareBody($stat->field_past_stats_text_line_2);
    $hero_stats[] = $this_stat;
  }
  $past_event->hero = $hero_stats;
  $past_event->body_title = $helper::prepareBody($node_wrapper->field_event_body_title_past);
  $past_event->gallery_id = $helper::prepareBody($node_wrapper->field_event_past_gallery_id);
  $past_event->hero_image = $helper::prepareImage($node_wrapper->field_event_hero_image_past->value());
  $response_data->past_event_info = $past_event;

  $response_data->speeches = _nyulmc_ood_content_type_evet_build_speeches_of_event($node_wrapper, $helper);

  // Unset all fields that will not be exposed.
  unset($response_data->type);

  return $response_data;
}

/**
 * Alter results of the Fund service call.
 *
 * @param array $results
 *   Array of results(funds) passed by reference.
 */
function _nyulmc_ood_content_type_event_retrieve_list_of_events(&$event){

  // If this is not for fund content type get out of here.
  if($event->type != 'event'){
    return;
  }

  //Load fund node and populate it.
  $node = node_load($event->nid);
  // Wrap our node in an entity metadata wrapper, so we can autoload things,
  // and clean out that pesky language undefined syntax.
  $node_wrapper = entity_metadata_wrapper('node', $node);

  _nyulmc_ood_services_api_core_node_retrieve_seo($event, $node_wrapper);
  //Attach and parse custom fields.
  _nyulmc_ood_content_type_event_retrieve_event($event, $node_wrapper);
}

/**
 * Given a slug of an event, translate it to an event nid.
 *
 * @param $slug
 * @return bool|int
 * @throws \Exception
 */
function nyulmc_ood_content_type_event_translate_slug_to_nid($slug) {
  try {
    // Check the slug field for our value.
    $query = db_select('field_data_field_event_slug', 'slug')
      ->fields('slug', array('field_event_slug_value', 'entity_id', 'entity_type'))
      ->condition('field_event_slug_value', $slug, '=');

    $result = $query->execute();

    if($result->rowCount() > 0) {
      $result = $result->fetchAll(PDO::FETCH_ASSOC);
      $return_array = array();
      foreach($result AS $slug) {
        $return_array[] = $slug['entity_id'];
      }
      if(isset($return_array) && !empty($return_array)) {
        $array_values = array_values($return_array);
        $nid = array_shift($array_values);
        if(is_numeric($nid) && $nid > 0) {
          return $nid;
        }
      }
    }
    return FALSE;
  }
  catch (Exception $e) {
    Throw new Exception('There was a problem while validating the slug. Error: ' . $e->getMessage());
  }
}

/**
 * Custom Index handler for event nodes, this function returns the last $page_size
 * added events plus all the highlighted events. A highlighted event is an event that has
 * field_event_past_show_on_landing set to true (checked).
 *
 * @param $page
 * @param $fields
 * @param $parameters
 * @param $page_size
 * @return array
 */
function _nyulmc_ood_services_api_core_events_resource_index($page, $fields, $parameters, $page_size) {

  // first, get the events as usual. By default, the $page_size will be 20.
  $response_from_node_index = _nyulmc_ood_services_api_core_node_resource_index($page, $fields, $parameters, $page_size);

  // Include the services module, since this is a namespaced variation of
  // functionality from that module. Most of this function is identical to the
  // original, and folds back into the functions found there.
  module_load_include('inc', 'services', 'services.module');

  // construct the query to get all the events that are highlighted and the pass it to the
  // services_resource_execute_index_query function of the services module.
  $query = new EntityFieldQuery();

  $query
    ->entityCondition('entity_type', 'node', '=')
    ->propertyCondition('type', 'event', '=')
    ->fieldCondition('field_event_past_show_on_landing', 'value', 1, '=');

  $results = services_resource_execute_index_query($query);

  // This is how we merge all both results and avoid duplicates.
  $response_highlighted = services_resource_build_index_list(array_values($results['node']), 'node', 'nid');
  $response_merged = array_merge($response_from_node_index, $response_highlighted);
  $response = array();
  foreach ($response_merged as $node) {
    if (!isset($response[$node->nid])) {
      $response[$node->nid] = $node;
    }
  }

  return $response;
}

/**
 * @param $event stdClass
 * @param $helper nyulmcServiceHelpers
 *
 * @return array
 */
function _nyulmc_ood_content_type_evet_build_speeches_of_event($event, $helper) {
  $speeches = [];
  foreach ($event->field_event_speeches as $speech) {
    $this_speech =_nyulmc_ood_content_type_event_build_speech_response($speech, $event, $helper);
    $speeches[] = $this_speech;
  }
  return $speeches;
}

/**
 * @param $speech
 * @param nyulmcServiceHelpers $helper
 * @param stdClass $event
 *
 * @return stdClass
 */
function _nyulmc_ood_content_type_event_build_speech_response($speech, $event, $helper) {

  $this_speech = new stdClass();
  $this_speech->title = $helper::prepareBody($speech->field_event_speeches_title);
  $this_speech->overview = $helper::prepareBody($speech->field_event_speech_overview);
  $this_speech->name = $helper::prepareBody($speech->field_event_speech_speaker);
  $this_speech->text = $helper::prepareBody($speech->field_event_speech_text);
  $this_speech->show_donate_form = $helper::prepareBooleanOutput($speech->field_event_speech_show_donate);
  $this_speech->show_on_stories_page = $helper->prepareBooleanOutput($speech->field_speech_show_on_st_page);
  $this_speech->image = $helper->prepareImage($speech->field_event_speech_preview_image->value());
  $this_speech->short_description = $helper->prepareBody($speech->field_event_speech_short_desc);
  $this_speech->eyebrow = $helper->prepareBody($speech->field_event_speech_eyebrow);
  $this_speech->event_slug = $helper->prepareBody($event->field_event_slug);
  $created_date = new DateTime();
  $created_date->setTimestamp($event->created->value());
  $this_speech->date = $created_date->format('Y-m-dP');
  $this_speech->slug = $helper::prepareBody($speech->field_event_speech_slug);

  return $this_speech;

}

/**
 * List all the speeches
 *
 * This function calls _nyulmc_ood_content_type_evet_build_speeches_of_event to
 * get the speeches of an entity metadata wrapped event node
 */
function _nyulmc_ood_content_type_event_services_list_speeches() {

  $result =_nyulmc_ood_services_api_core_node_resource_index(0, implode(',', array('nid', 'title', 'language', 'type')), array('type' => 'event'), 10000);

  $response = array();

  foreach($result AS $id => $row) {

    // Assemble a single record, with only relevant information.
    $record = new stdClass();
    $record->nid = $row->nid;
    $record->type = $row->type;
    $record->title = $row->title;
    $record->uri = $row->uri;
    $record->slug = null;
    //Language is required to get SEO Metadata
    $record->language = $row->language;

    //Load fund node and populate it.
    $node = node_load($record->nid);
    $node_wrapper = entity_metadata_wrapper('node', $node);

    $speeches = _nyulmc_ood_content_type_evet_build_speeches_of_event($node_wrapper, new nyulmcServiceHelpers());
    $response = array_merge($response, $speeches);
  }
  $wrapped_response = new stdClass();
  $wrapped_response->speeches = $response;
  return $wrapped_response;
}
