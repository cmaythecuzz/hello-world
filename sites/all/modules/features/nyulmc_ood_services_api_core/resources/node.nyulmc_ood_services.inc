<?php
/**
* @file(node.nyulmc_ood_services.inc)
*   This file contains default service functions for nodes within the NYULMC OOD
*   Drupal instance. Node Services, overwritten in the base module of this
*   feature, then reference the functions in this file, where they may in some
*   cases be routed out to other modules, specific to the requested content
*   type.
*
*   Functions here include CRUD + Index handling, and JSON response assembly.
*
*   This may also include hooks to handle pre and post processing of service
*   requests, which may include translation of NYULMC OOD content identifiers back
*   to their corresponding node IDs, as well as access hooks, which check for
*   allowing or restricting access to content in the first place.
*
*   @see nyulmc_ood_services_api_core.module
*     For referencing implementation.
*/



/**
* Allow arguments to be altered before they are passed to service callback.
*
* Child of nyulmc_ood_services_api_core_services_request_preprocess_alter
*
* @see hook_services_request_preprocess_alter().
*
* @param $controller
*   Controller definition
* @param array $args
*   Array of arguments, passed by reference. We'll alter these with any
*   translated identifiers.
* @param array $options
*   Passed from the preprocess hook, but unused here.
* @param array $request_info
*   Information about the type of service request.
*
* @see services_controller_execute()
* @see services.runtime.inc
*/

function nyulmc_ood_services_api_core_request_preprocess_node($controller, &$args, $options, $request_info) {
  //
}

/**
* Node Create callback, which overrides the default resource create callback.
*
* Here we intercept any node create callbacks, and reroute to our custom
* callbacks, when needed.
*
* @param array $node
*   The passed data array containing the fields required to create a node.
*/
function _nyulmc_ood_services_api_core_node_create($node) {
  if(isset($node['type'])) {
    switch($node['type']) {
      //use a case to reroute to custom callback

      default:
      return _node_resource_create($node);
    }
  }
  else {
    return array('undefinded node type!');
  }
}

/**
* Node Update callback, which overrides the default resource update callback.
*
* Here we intercept any node update callbacks, and reroute to our custom
* callbacks, when needed.
*
* @param int $nid
*   A node ID representing the node we should update.
* @param array $node
*   The passed data array containing the fields required to create a node.
*/
function _nyulmc_ood_services_api_core_node_update($nid, $node) {

  if(isset($node['type'])) {
    switch($node['type']) {
      //use a case to reroute to custom callback

      default:
      return _node_resource_update($nid, $node);
    }
  }
  else {
    return array('undefinded node type!');
  }
}


/**
* Assemble a node request response in a custom JSON structure.
*
* This is a callback for the services -> home_page -> index.
*
* This function assembles default node data, then makes a call out to the
* appropriate content type feature, for bundle-specific field population. Upon
* completion, this callback will return an object/array to be encoded as JSON,
* and returned to the requesting user.
*
* @param boolean $expand_references
*   If true, we'll build out all of the object references. Otherwise, you will
*   only receive a reference ID to that content, and must look it up yourself.
*
* @return
*   Node object or FALSE if not found.
*
* @see node_load(), node_view()
*/
function _nyulmc_ood_services_api_core_home_page_retrieve($expand_references = false){

  $node = NULL;
  $response_data = new stdClass();


  // Load our node, and populate it.
  if (($nid = nyulmc_ood_core_node_type_exists('home_page')) && ($node = node_load($nid))) {

    try {

      if($node->type !== 'home_page'){
        throw new Exception(sprintf('Node %d is not a Home Page node', $nid));

      }
      // Helper class for processing output.
      $helper = new nyulmcServiceHelpers();

      $language = entity_language('node', $node);

      // Wrap our node in an entity metadata wrapper, so we can autoload things,
      // and clean out that pesky language undefined syntax.
      $node_wrapper = entity_metadata_wrapper('node', $node);

      $response_data->id = $node_wrapper->nid->value();
      $response_data->language = $language;
      $response_data->title = $helper::prepareOutput($node_wrapper->title->value());

      // Attach any SEO data.
      _nyulmc_ood_services_api_core_node_retrieve_seo($response_data, $node_wrapper);


      // Note that the response object is passed by reference.

      module_load_include('inc', 'nyulmc_ood_content_type_home_page', 'nyulmc_ood_content_type_home_page.services');
      _nyulmc_ood_content_type_home_page_retrieve_home_page($response_data, $node_wrapper);

    }
    catch(EntityMetadataWrapperException $e) {
      $message = 'Exception when fetching data from entity model. Message follows: ' . $e->getMessage();
      /**
      * Throw the message into the watchdog, instead of directly into syslog()
      * Drupal should be configured to write all watchdog statements to the
      * syslog.
      * @see: admin/config/development/logging
      */
      watchdog(check_plain('nyulmc_error'),
      'Error when responding to service request. Node: home_page, id: %nid. Message follows: %message',
      array(
        '%nid' => $nid ,
        '%message' => $message),
        WATCHDOG_CRITICAL
      );
      // Rethrow the exception, so we're not serving up invalid content.
      Throw new EntityMetadataWrapperException($message);
    }
    catch(Exception $e) {
      Throw new Exception('Exception when assembling data for JSON Response. Message follows: ' . $e->getMessage());
    }
  }
  else {
    return services_error(t('Node @nid could not be found', array('@nid' => $nid)), 404);
  }

  return $response_data;

}

/**
* Assemble a node request response in a custom JSON structure.
*
* This is a callback for the services -> home_page -> index.
*
* This function assembles default node data, then makes a call out to the
* appropriate content type feature, for bundle-specific field population. Upon
* completion, this callback will return an object/array to be encoded as JSON,
* and returned to the requesting user.
*
* @param boolean $expand_references
*   If true, we'll build out all of the object references. Otherwise, you will
*   only receive a reference ID to that content, and must look it up yourself.
*
* @return
*   Node object or FALSE if not found.
*
* @see node_load(), node_view()
*/
function _nyulmc_ood_services_api_core_supporter_landing_retrieve($expand_references = false) {
  $node = NULL;
  $response_data = new stdClass();

  // Load our node, and populate it.
  if (($nid = nyulmc_ood_core_node_type_exists('supporter_landing')) && ($node = node_load($nid))) {
    try {
      if($node->type !== 'supporter_landing'){
        throw new Exception(sprintf('Node %d is not a Supporter Landing node', $nid));

      }
      // Helper class for processing output.
      $helper = new nyulmcServiceHelpers();

      $language = entity_language('node', $node);

      // Wrap our node in an entity metadata wrapper, so we can autoload things,
      // and clean out that pesky language undefined syntax.
      $node_wrapper = entity_metadata_wrapper('node', $node);

      $response_data->id = $node_wrapper->nid->value();
      $response_data->language = $language;
      $response_data->title = $helper::prepareOutput($node_wrapper->title->value());

      // Attach any SEO data.
      _nyulmc_ood_services_api_core_node_retrieve_seo($response_data, $node_wrapper);


      // Note that the response object is passed by reference.

      module_load_include('inc', 'nyulmc_ood_content_type_supporter_landing', 'nyulmc_ood_content_type_supporter_landing.services');
      _nyulmc_ood_content_type_supporter_landing_retrieve_supporter_landing($response_data, $node_wrapper);

    }
    catch(EntityMetadataWrapperException $e) {
      $message = 'Exception when fetching data from entity model. Message follows: ' . $e->getMessage();
      /**
      * Throw the message into the watchdog, instead of directly into syslog()
      * Drupal should be configured to write all watchdog statements to the
      * syslog.
      * @see: admin/config/development/logging
      */
      watchdog(check_plain('nyulmc_error'),
      'Error when responding to service request. Node: home_page, id: %nid. Message follows: %message',
      array(
        '%nid' => $nid ,
        '%message' => $message),
        WATCHDOG_CRITICAL
      );
      // Rethrow the exception, so we're not serving up invalid content.
      Throw new EntityMetadataWrapperException($message);
    }
    catch(Exception $e) {
      Throw new Exception('Exception when assembling data for JSON Response. Message follows: ' . $e->getMessage());
    }
  }
  else {
    return services_error(t('Node @nid could not be found', array('@nid' => $nid)), 404);
  }

  return $response_data;

}

/**
* Assemble a node request response in a custom JSON structure.
*
* This is a callback for the services -> home_page -> index.
*
* This function assembles default node data, then makes a call out to the
* appropriate content type feature, for bundle-specific field population. Upon
* completion, this callback will return an object/array to be encoded as JSON,
* and returned to the requesting user.
*
* @param boolean $expand_references
*   If true, we'll build out all of the object references. Otherwise, you will
*   only receive a reference ID to that content, and must look it up yourself.
*
* @return
*   Node object or FALSE if not found.
*
* @see node_load(), node_view()
*/
function _nyulmc_ood_services_api_core_ways_to_give_landing_retrieve($expand_references = false) {
  $node = NULL;
  $response_data = new stdClass();

  // Load our node, and populate it.
  if (($nid = nyulmc_ood_core_node_type_exists('ways_to_give_landing')) && ($node = node_load($nid))) {
    try {
      if($node->type !== 'ways_to_give_landing'){
        throw new Exception(sprintf('Node %d is not a Supporter Landing node', $nid));

      }
      // Helper class for processing output.
      $helper = new nyulmcServiceHelpers();

      $language = entity_language('node', $node);

      // Wrap our node in an entity metadata wrapper, so we can autoload things,
      // and clean out that pesky language undefined syntax.
      $node_wrapper = entity_metadata_wrapper('node', $node);

      $response_data->id = $node_wrapper->nid->value();
      $response_data->language = $language;
      $response_data->title = $helper::prepareOutput($node_wrapper->title->value());

      // Attach any SEO data.
      _nyulmc_ood_services_api_core_node_retrieve_seo($response_data, $node_wrapper);


      // Note that the response object is passed by reference.

      module_load_include('inc', 'nyulmc_ood_content_type_ways_to_give_landing', 'nyulmc_ood_content_type_ways_to_give_landing.services');
      _nyulmc_ood_content_type_ways_to_give_landing_retrieve_ways_to_give_landing($response_data, $node_wrapper);

    }
    catch(EntityMetadataWrapperException $e) {
      $message = 'Exception when fetching data from entity model. Message follows: ' . $e->getMessage();
      /**
      * Throw the message into the watchdog, instead of directly into syslog()
      * Drupal should be configured to write all watchdog statements to the
      * syslog.
      * @see: admin/config/development/logging
      */
      watchdog(check_plain('nyulmc_error'),
      'Error when responding to service request. Node: ways_to_give_landing, id: %nid. Message follows: %message',
      array(
        '%nid' => $nid ,
        '%message' => $message),
        WATCHDOG_CRITICAL
      );
      // Rethrow the exception, so we're not serving up invalid content.
      Throw new EntityMetadataWrapperException($message);
    }
    catch(Exception $e) {
      Throw new Exception('Exception when assembling data for JSON Response. Message follows: ' . $e->getMessage());
    }
  }
  else {
    return services_error(t('Node @nid could not be found', array('@nid' => $nid)), 404);
  }

  return $response_data;

}

/**
 * Assemble a node request response in a custom JSON structure.
 *
 * This is a callback for the services -> explore_funds_config -> index.
 *
 * @return stdClass
 *   Node object or FALSE if not found.
 *
 * @see node_load(), node_view()
 *
 * @throws EntityMetadataWrapperException|Exception
 */
function _nyulmc_ood_services_api_core_explore_funds_config_retrieve() {
  $node = NULL;
  $response_data = new stdClass();

  // Load our node, and populate it.
  if (($nid = nyulmc_ood_core_node_type_exists('funds_list')) && ($node = node_load($nid))) {
    try {
      if($node->type !== 'funds_list'){
        throw new Exception(sprintf('Node %d is not a Funds List node', $nid));

      }
      // Helper class for processing output.
      $helper = new nyulmcServiceHelpers();

      // Wrap our node in an entity metadata wrapper, so we can autoload things,
      // and clean out that pesky language undefined syntax.
      $node_wrapper = entity_metadata_wrapper('node', $node);

      // Hero
      $hero = new stdClass();
      $hero->header = $helper->prepareBody($node_wrapper->field_funds_list_hero_header);
      $hero->sub_header = $helper->prepareBody($node_wrapper->field_funds_list_hero_sub_header);
      $hero->button_title = $helper->prepareBody($node_wrapper->field_funds_list_hero_btn_title);
      $hero->image = $helper->prepareImage($node_wrapper->field_funds_list_hero_image->value());
      $response_data->hero = $hero;

      // Modules
      $modules = new stdClass();
      $modules->featured_funds_header = $helper->prepareBody($node_wrapper->field_funds_list_feat_funds_head);
      $modules->featured_funds_title_search = $helper->prepareBody($node_wrapper->field_featured_funds_module_titl);
      $modules->search_header = $helper->prepareBody($node_wrapper->field_funds_list_search_header);

      $suggested_terms_raw = $helper->prepareBody($node_wrapper->field_feat_funds_search_terms);
      $suggested_search_terms = explode('|', $suggested_terms_raw);
      $modules->suggested_search_terms = $suggested_search_terms;

      $response_data->modules = $modules;
    }
    catch(EntityMetadataWrapperException $e) {
      $message = 'Exception when fetching data from entity model. Message follows: ' . $e->getMessage();
      /**
      * Throw the message into the watchdog, instead of directly into syslog()
      * Drupal should be configured to write all watchdog statements to the
      * syslog.
      * @see: admin/config/development/logging
      */
      watchdog(check_plain('nyulmc_error'),
      'Error when responding to service request. Node: home_page, id: %nid. Message follows: %message',
      array(
        '%nid' => $nid ,
        '%message' => $message),
        WATCHDOG_CRITICAL
      );
      // Rethrow the exception, so we're not serving up invalid content.
      Throw new EntityMetadataWrapperException($message);
    }
    catch(Exception $e) {
      Throw new Exception('Exception when assembling data for JSON Response. Message follows: ' . $e->getMessage());
    }
  }
  else {
    return services_error(t('Node could not be found'), 404);
  }

  return $response_data;

}


/**
* Assemble a node request response in a custom JSON structure.
*
* This is a callback for the services -> why_give -> index.
*
* This function assembles default node data, then makes a call out to the
* appropriate content type feature, for bundle-specific field population. Upon
* completion, this callback will return an object/array to be encoded as JSON,
* and returned to the requesting user.
*
* @param boolean $expand_references
*   If true, we'll build out all of the object references. Otherwise, you will
*   only receive a reference ID to that content, and must look it up yourself.
*
* @return
*   Node object or FALSE if not found.
*
* @see node_load(), node_view()
*/
function _nyulmc_ood_services_api_core_why_give_retrieve($expand_references = false){

  $node = NULL;
  $response_data = new stdClass();


  // Load our node, and populate it.
  if (($nid = nyulmc_ood_core_node_type_exists('why_give')) && ($node = node_load($nid))) {

    try {

      if($node->type !== 'why_give'){
        throw new Exception(sprintf('Node %d is not a Why Give node', $nid));

      }
      // Helper class for processing output.
      $helper = new nyulmcServiceHelpers();

      $language = entity_language('node', $node);

      // Wrap our node in an entity metadata wrapper, so we can autoload things,
      // and clean out that pesky language undefined syntax.
      $node_wrapper = entity_metadata_wrapper('node', $node);

      $response_data->id = $node_wrapper->nid->value();
      $response_data->language = $language;
      $response_data->title = $helper::prepareOutput($node_wrapper->title->value());

      // Attach any SEO data.
      _nyulmc_ood_services_api_core_node_retrieve_seo($response_data, $node_wrapper);


      // Note that the response object is passed by reference.

      module_load_include('inc', 'nyulmc_ood_content_type_why_give', 'nyulmc_ood_content_type_why_give.services');
      _nyulmc_ood_content_type_why_give_retrieve_why_give($response_data, $node_wrapper);

    }
    catch(EntityMetadataWrapperException $e) {
      $message = 'Exception when fetching data from entity model. Message follows: ' . $e->getMessage();
      /**
      * Throw the message into the watchdog, instead of directly into syslog()
      * Drupal should be configured to write all watchdog statements to the
      * syslog.
      * @see: admin/config/development/logging
      */
      watchdog(check_plain('nyulmc_error'),
      'Error when responding to service request. Node: why_give, id: %nid. Message follows: %message',
      array(
        '%nid' => $nid ,
        '%message' => $message),
        WATCHDOG_CRITICAL
      );
      // Rethrow the exception, so we're not serving up invalid content.
      Throw new EntityMetadataWrapperException($message);
    }
    catch(Exception $e) {
      Throw new Exception('Exception when assembling data for JSON Response. Message follows: ' . $e->getMessage());
    }
  }
  else {
    return services_error(t('Node @nid could not be found', array('@nid' => $nid)), 404);
  }

  return $response_data;

}

/**
 * Retrieve an event from a slug. This function first translates the slug to a valid
 * event NID and then just calls _nyulmc_ood_services_api_core_node_retrieve to get
 * the node.
 *
 * @param $key
 * @param bool $expand_reference
 * @return mixed|\stdClass
 * @throws \EntityMetadataWrapperException
 * @throws \Exception
 * @throws \ServicesException
 */
function _nyulmc_ood_services_api_core_event_retrieve($key, $expand_reference = FALSE) {
  if(module_load_include('inc', 'nyulmc_ood_content_type_event', 'nyulmc_ood_content_type_event.services')) {
    $nid = nyulmc_ood_content_type_event_translate_slug_to_nid($key);
  } else {
    return services_error(t('An error happened while assembling the response'), 500);
  }
  if ($nid) {
    return _nyulmc_ood_services_api_core_node_retrieve($nid, $expand_reference);
  } else {
    return services_error(t('Node @nid could not be found', array('@nid' => $key)), 404);
  }
}

/**
 * Retrieve a supporter message form from a slug. This function first translates the slug to a valid
 * form NID and then just calls _nyulmc_ood_services_api_core_node_retrieve to get
 * the node.
 *
 * @param $key
 * @param bool $expand_reference
 * @return mixed|\stdClass
 * @throws \EntityMetadataWrapperException
 * @throws \Exception
 * @throws \ServicesException
 */
function _nyulmc_ood_services_api_core_supporter_message_form_retrieve($key, $expand_reference = FALSE) {
  if(module_load_include('inc', 'nyulmc_ood_content_type_supporter_message_form', 'nyulmc_ood_content_type_supporter_message_form.services')) {
    $nid = nyulmc_ood_content_type_supporter_message_form_translate_slug_to_nid($key);
  } else {
    return services_error(t('An error happened while assembling the response'), 500);
  }
  if ($nid) {
    return _nyulmc_ood_services_api_core_node_retrieve($nid, $expand_reference);
  } else {
    return services_error(t('Node @nid could not be found', array('@nid' => $key)), 404);
  }
}

/**
 * Retrieve a ways to give child page from a slug. This function first translates the slug to a valid
 * form NID and then just calls _nyulmc_ood_services_api_core_node_retrieve to get
 * the node.
 *
 * @param $key
 * @param bool $expand_reference
 * @return mixed|\stdClass
 * @throws \EntityMetadataWrapperException
 * @throws \Exception
 * @throws \ServicesException
 */
function _nyulmc_ood_services_api_core_ways_to_give_child_page_retrieve($key, $expand_reference = FALSE) {
  if(module_load_include('inc', 'nyulmc_ood_content_type_ways_to_give_child_page', 'nyulmc_ood_content_type_ways_to_give_child_page.services')) {
    $nid = nyulmc_ood_content_type_ways_to_give_child_page_translate_slug_to_nid($key);
  } else {
    return services_error(t('An error happened while assembling the response'), 500);
  }
  if ($nid) {
    return _nyulmc_ood_services_api_core_node_retrieve($nid, $expand_reference);
  } else {
    return services_error(t('Node @nid could not be found', array('@nid' => $key)), 404);
  }
}

/**
* Assemble a node request response in a custom JSON structure.
*
* This is a callback for the services -> node -> retrieve.
*
* This function assembles default node data, then makes a call out to the
* appropriate content type feature, for bundle-specific field population. Upon
* completion, this callback will return an object/array to be encoded as JSON,
* and returned to the requesting user.
*
* @param int/string $nid
*   NID of the node we want to return, or a URL of a node, which we can
*   translate into a node ID. Note: for URLs, you must use a delimiter in place
*   of a '/' character.
*   @see _nyulmc_odd_services_api_core_translate_node_url_to_nid() in this file.
* @param boolean $expand_references
*   If true, we'll build out all of the object references. Otherwise, you will
*   only receive a reference ID to that content, and must look it up yourself.
*
* @return
*   Node object or FALSE if not found.
*
* @see node_load(), node_view()
*/
function _nyulmc_ood_services_api_core_node_retrieve($nid, $expand_references = FALSE) {
  $node = NULL;
  $response_data = new stdClass();



  // Load our node, and populate it.
  if (is_numeric($nid) && $node = node_load($nid)) {

    try {

      // Helper class for processing output.
      $helper = new nyulmcServiceHelpers();

      $language = entity_language('node', $node);

      // Wrap our node in an entity metadata wrapper, so we can autoload things,
      // and clean out that pesky language undefined syntax.
      $node_wrapper = entity_metadata_wrapper('node', $node);

      $response_data->id = $node_wrapper->nid->value();
      $response_data->language = $language;
      $response_data->title = $helper::prepareOutput($node_wrapper->title->value());

      //    $response_data->node_type = $node_wrapper->type->value();

      // Attach any SEO data.
      _nyulmc_ood_services_api_core_node_retrieve_seo($response_data, $node_wrapper);


      // Because this can be any node type, and slug is a different field for
      // each type, we must handle each type separately.
      //$response_data->slug = _nyulmc_ood_services_api_core_node_get_slug_field($node_wrapper);

      /**
      * Exposing a new Content Type to Services?
      *
      * LOOK HERE!
      *
      * This is where we route our request to it's specific content type.
      * You'll need to add the content type machine name as a case block,
      * load the services.inc file in the given module, then call your module.
      *
      * That's it.
      */
      // For specitic content types, append relevant data. Note that the
      // response object is passed by reference.

      switch($node->type) {
        case 'fund':
        module_load_include('inc', 'nyulmc_ood_content_type_fund', 'nyulmc_ood_content_type_fund.services');
        _nyulmc_ood_content_type_fund_retrieve_fund($response_data, $node_wrapper);
        break;

        case 'home_page':
        module_load_include('inc', 'nyulmc_ood_content_type_home_page', 'nyulmc_ood_content_type_home_page.services');
        _nyulmc_ood_content_type_home_page_retrieve_home_page($response_data, $node_wrapper);
        break;
        case 'why_give':
        module_load_include('inc', 'nyulmc_ood_content_type_why_give', 'nyulmc_ood_content_type_why_give.services');
        _nyulmc_ood_content_type_why_give_retrieve_why_give($response_data, $node_wrapper);
        break;
        case 'event':
        module_load_include('inc', 'nyulmc_ood_content_type_event', 'nyulmc_ood_content_type_event.services');
        _nyulmc_ood_content_type_event_retrieve_event($response_data, $node_wrapper);
        break;
        case 'passion_story':
        module_load_include('inc', 'nyulmc_ood_content_type_passion_story', 'nyulmc_ood_content_type_passion_story.services');
        _nyulmc_ood_content_type_passion_story_retrieve_passion_story($response_data, $node_wrapper);
        break;
        case 'supporter_message_form':
        module_load_include('inc', 'nyulmc_ood_content_type_supporter_message_form', 'nyulmc_ood_content_type_supporter_message_form.services');
        _nyulmc_ood_content_type_supporter_message_form_retrieve_supporter_message_form($response_data, $node_wrapper);
        break;
        case 'ways_to_give_child_page':
          module_load_include('inc', 'nyulmc_ood_content_type_ways_to_give_child_page', 'nyulmc_ood_content_type_ways_to_give_child_page.services');
          _nyulmc_ood_content_type_ways_to_give_child_page_retrieve_ways_to_give_child_page($response_data, $node_wrapper);
          break;
        default:
        break;
      }

    }
    catch(EntityMetadataWrapperException $e) {
      $message = 'Exception when fetching data from entity model. Message follows: ' . $e->getMessage();

      // Throw the message into the watchdog, instead of directly into syslog().
      // Drupal should be configured to write all watchdog statements to the
      // syslog.
      // @see: admin/config/development/logging
      watchdog(check_plain('nyulmc_error'),
      'Error when responding to service request. Node: %type, id: %nid. Message follows: %message',
      array(
        '%type' => $node->type,
        '%nid' => $nid ,
        '%message' => $message),
        WATCHDOG_CRITICAL
      );
      // Rethrow the exception, so we're not serving up invalid content.
      Throw new EntityMetadataWrapperException($message);
    }
    catch(Exception $e) {
      Throw new Exception('Exception when assembling data for JSON Response. Message follows: ' . $e->getMessage());
    }
  }
  else {
    return services_error(t('Node @nid could not be found', array('@nid' => $nid)), 404);
  }

  return $response_data;
}

/**
* Assemble a response object from a services index request.
*
* An example request (with optional sort criteria) might look like:
*
* http://domain/endpoint/node.json?fields=nid,vid&parameters[nid]=7&parameters[uid]=1
*
* This would return an array of objects with only nid and vid defined, where
* nid = 7 and uid = 1.
*
* Or:
*
* http://domain/endpoint/node.json?parameters[type]=location
*
* Which would return an index of all nodes of type location.
*
* This function is a copy/slight modification of the default services index
* function, which needed to be altered for several reasons. We alter it because
* the original was implemented without an abstraction of the table via an alias,
* which could cause conflicts when this query is altered. Additionally, we
* expose a new hook, so we can alter this query, when adding custom bundle
* fields, depending upon the content types being included in the response.
*
* @param $page
*   Page number of results to return (in pages of 20).
* @param $fields
*   The fields you want returned.
* @param $parameters
*   An array containing fields and values used to build a sql WHERE clause
*   indicating items to retrieve.
* @param $page_size
*   Integer number of items to be returned.
*
* @return
*   An array of node objects.
*
* @see
*   _node_resource_index in the Contrib Services module. This is branched
*      from there.
*/
function _nyulmc_ood_services_api_core_node_resource_index($page, $fields, $parameters, $page_size) {

  // Include the services module, since this is a namespaced variation of
  // functionality from that module. Most of this function is identicle to the
  // original, and folds back into the functions found there.
  module_load_include('inc', 'services', 'services.module');

  // Initial field query. This will be exposed in a hook below.
  // This is a change from the default index query, which had no table alias.
  $node_select = db_select('node', 't')
  ->addTag('node_access')
  ->orderBy('t.sticky', 'DESC')
  ->orderBy('t.created', 'DESC');

  // Exposes HOOK_nyulmc_services_node_index_query_alter().
  // Expose a hook to modify this index query.
  // This allows us to add fields to the query, and make them available
  // for attachment in the index response.
  // You must implement this in your module if you are adding a new content
  // type, or require non-standard fields not already made available by other
  // implementations of this hook.
  drupal_alter('nyulmc_ood_srvc_node_index', $node_select);

  // Check for the 'type' param, and add the table alias, to avoid MySQL's
  // dreaded "ambiguous" Integrity Constraint violation error.
  if($parameters['type']) {
    // Type
    $parameters['t.type'] = $parameters['type'];
    unset($parameters['type']);
  }

  // Assemble the initial index query via services.
  services_resource_build_index_query($node_select, $page, $fields, $parameters, $page_size, 'node');

  // If the requesting user cannot administer nodes,
  // restrict the results to published nodes.
  if (!user_access('administer nodes')) {
    $node_select->condition('t.status', 1);
  }

  // Run the index query.
  $results = services_resource_execute_index_query($node_select);

  // Assemble the final results, and return them. Note that this will assemble
  // default results, which can be modifier in a
  // hook_services_postprocess_alter(). This is precisely how we handle
  // appending the new fields attached in
  // HOOK_nyulmc_services_node_index_query_alter().
  $response = services_resource_build_index_list($results, 'node', 'nid');

  return $response;
}

/**
* Alter results of the services call.
*
* Specifically, we're handling INDEX requests from a NODE resource, and
* preparing the response model.
*
* If you want to add custom fields to an index response, and have already
* altered the index field query, you'll need to expose those fields here, or
* they will not be assembled within the JSON response.
*
* @param $controller
*   Controller definition
* @param array $args
*   Arguments passed to services callback
* @param array $result
*   Array of results that can be altered
*
* @see services_controller_execute()
* @see services.runtime.inc
*/
function nyulmc_ood_services_api_core_services_request_postprocess_alter($controller, $args, &$result) {

  // Determine our the requested resource and action.
  $request_info = nyulmc_ood_services_api_code_get_action_from_controller($controller);

  $allowed_endpoints = array('node', 'all_funds', 'passion_stories', 'events');

  // Make sure this is index action for nodes, or exit.
  if($request_info['action'] !== 'index' || !in_array($request_info['resource'], $allowed_endpoints)) {
    return;
  }

  $response = array();

  // Assemble a clean index response, with appropriate content-specific fields,
  // including slug.
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

    // Populate data for various node types into the approprate properties.
    switch($record->type) {
      case 'fund':
      module_load_include('inc', 'nyulmc_ood_content_type_fund', 'nyulmc_ood_content_type_fund.services');
      _nyulmc_ood_content_type_fund_retrieve_list_of_funds($record);
      break;
      case 'event':
      module_load_include('inc', 'nyulmc_ood_content_type_event', 'nyulmc_ood_content_type_event.services');
      _nyulmc_ood_content_type_event_retrieve_list_of_events($record);
      break;
      case 'passion_story':
      module_load_include('inc', 'nyulmc_ood_content_type_passion_story', 'nyulmc_ood_content_type_passion_story.services');
      _nyulmc_ood_content_type_passion_story_retrieve_list_of_passion_story($record);
      break;
      default;
      break;
    }

    //Make sure type is part of the response on default index action.
    if($request_info['resource'] == 'node'){
      $record->type = $row->type;
    }

    //Remove language from the service response
    unset($record->language);

    // Add our
    array_push($response, $record);
  }

  //We need to wrap the response because we are using JMS in Symfony
  $unwrapped_response = $response;
  $response = new stdClass();
  if($request_info['resource'] == 'all_funds') {
    $response->funds = $unwrapped_response;
  } elseif($request_info['resource'] == 'events') {
    $response->events = $unwrapped_response;
  } else {
    $response->nodes = $unwrapped_response;
  }

  $result = $response;
}


/**
* Add any manually entered metadata related to this node.
*
* @param object $response_data
*   The response we'll be returning from the resource request to web services.
* @param entityMetadataWrapper $node_wrapper
*   The wrapped node which was requested.
*/
function _nyulmc_ood_services_api_core_node_retrieve_seo(&$response_data, &$node_wrapper) {

  // Get our node revision, which is what metadata is keyed by.
  $revision = $node_wrapper->value();
  $revision = $revision->vid;

  // Load our metatag data, which is not attached to the node.
  module_load_include('module', 'metatag', 'metatag');
  $metadata = metatag_metatags_load('node', $node_wrapper->getIdentifier());

  $metadata_default = metatag_config_load_with_defaults($node_wrapper->type());

  $language = $response_data->language;

  // Only use the latest revision.
  if(isset($metadata[$revision][$language])) {
    $metadata = $metadata[$revision][$language];
  }
  elseif(is_array($metadata) && !empty($metadata)) {
    // If our current revision doesn't exists, get the most recent revision available.
    $metadata = end($metadata);
    $metadata = $metadata[$language];
  }
  else {
    // Otherwise, we have no metadata.
    $metadata = array();
  }

  // Objects we should pass for source in token replacement.
  $metatag_data_reference = array(
    'node' => $node_wrapper->value()
  );

  // Evaluate each default metatag's tokens.
  foreach($metadata_default AS $token_key => $token_data) {
    if(isset($token_data['value'])) {
      $token_result = token_replace($token_data['value'], $metatag_data_reference);
      $metadata_default[$token_key]['value'] = $token_result;
    }
  }

  // Expose HOOK_nyulmc_node_metadata_default(), so individual content types may
  // override defaults before they are set. We do this because the Metatag
  // module is only configurable on the entity level, not the bundle level.
  // Make sure to check your bundle when implementing this hook, or your
  // overrides will apply to all content types, and may explode.
  drupal_alter('nyulmc_node_metadata_default', $metadata_default, $node_wrapper);

  $response = new stdClass();
  $response->title = _nyulmc_ood_service_api_core_token_replace('title', $metadata, $metadata_default);
  $response->description = _nyulmc_ood_service_api_core_token_replace('description', $metadata, $metadata_default);

  // Open Graph.
  $response->open_graph = new stdClass();
  $response->open_graph->title = _nyulmc_ood_service_api_core_token_replace('og:title', $metadata, $metadata_default);
  $response->open_graph->description = _nyulmc_ood_service_api_core_token_replace('og:description', $metadata, $metadata_default);
  $response->open_graph->type = _nyulmc_ood_service_api_core_token_replace('og:type', $metadata, $metadata_default);
  $response->open_graph->image = _nyulmc_ood_service_api_core_token_replace('og:image', $metadata, $metadata_default);
  if(!isset($response->open_graph->image)) {

    // Helper class for processing output.
    $helper = new nyulmcServiceHelpers();

    // Load the file from our NYULMC Settings variable.
    $file = file_load(variable_get('nyulmc_admin_variables_open_graph_image_default', ''));

    // Prepare the image, based upon the loaded file.
    $response->open_graph->image = $helper::prepareImage((array)$file);
  }
  $response->open_graph->url = _nyulmc_ood_service_api_core_token_replace('og:url', $metadata, $metadata_default);

  // Custom
  if($analytics_page_name = _nyulmc_ood_service_api_core_token_replace('nyulmc:analytics:title', $metadata, $metadata_default)) {
    $response_data->analytics = new stdClass();
    $response_data->analytics->page = $analytics_page_name;
  }

  // Twitter.
  $response->twitter = new stdClass();
  $response->twitter->title = _nyulmc_ood_service_api_core_token_replace('twitter:title', $metadata, $metadata_default);
  $response->twitter->description = _nyulmc_ood_service_api_core_token_replace('twitter:description', $metadata, $metadata_default);
  $response->twitter->image = _nyulmc_ood_service_api_core_token_replace('twitter:image:src', $metadata, $metadata_default);


  // Attach our metatags output back to the response.
  $response_data->metadata = $response;
}

/**
* Given a metadata token, a list of metadata, and a list of defaults,
* return the value, or the appropriate default.
*
* @param string $key
*   A metadata key, such as nyulmc:analytics:page_title, which should be
*   replaced with it's value.
* @param array $metadata
*   A list of metadata set for this content.
* @param array $defaults
*   A list of defaults, if an explicit value was not set.
*
* @return string | null
*   The approprate value for the metadata token, or it's default value. If
*   nothing is available, null is returned.
*/
function _nyulmc_ood_service_api_core_token_replace($key, $metadata, $defaults) {

  if(isset($metadata[$key]['value']) && !empty($metadata[$key]['value'])) {
    return $metadata[$key]['value'];
  }
  elseif(isset($defaults[$key]['value']) && !empty($defaults[$key]['value'])) {
    return $defaults[$key]['value'];
  }

  return NULL;
}

/**
* Determine whether the current user can access a node resource.
*
* @see _node_resource_access() in module: services/resources/node_resource.inc,
*   which this function is built upon. This simply adds a translation of a node
*   url to a nid ID, and adds a hook, so other modules can plug in their
*   access checks.
*
* @param $op
*   One of view, update, create, delete per node_access().
* @param $args
*   Resource arguments passed through from the original request.
* @return bool
*
* @see node_access()
*/
function _nyulmc_ood_services_api_core_services_node_resource_access($op = 'view', $args = array()) {

  // Adds backwards compatability with regression fixed in #1083242
  if (isset($args[0])) {
    $args[0] = _services_access_value($args[0], 'node');
  }

  // Make sure we have an object or this all fails, some servers can
  // mess up the types.
  if (is_array($args[0])) {
    $args[0] = (object) $args[0];
  }
  // This is to determine if it is just a string happens on node/%NID.
  elseif (!is_array($args[0]) && !is_object($args[0])) {
    $args[0] = (object)array('nid' => $args[0]);
  }


  // If we're viewing content, and requesting a slug, translate that to an nid.
  // @note: added for NYULMC.
  if(($op == 'view' || $op == 'update' || $op == 'delete') && !empty($args)) {
    // Dereference an NPI or URL reference, and concert back to a node ID.
    $is_npi_reference = (isset($_GET['key']) && strtoupper($_GET['key']) == 'NPI') ? TRUE : FALSE;
    if(!is_numeric($args[0]->nid) || $is_npi_reference) {
      $nid = _nyulmc_services_api_core_translate_referenced_resource_id($args[0]->nid, $is_npi_reference);
      if(isset($nid) && is_numeric($nid) && $nid > 0) {
        $args[0]->nid = $nid;
      }
    }
  }

  // Exposes HOOK_nyulmc_services_node_access().
  $custom_hook_access = module_invoke_all('nyulmc_services_node_access', $args, $op);

  if(in_array(FALSE, $custom_hook_access, TRUE)) {
    return FALSE;
  }

  if ($op != 'create' && !empty($args)) {
    $node = node_load($args[0]->nid);
  }
  elseif ($op == 'create') {
    if (isset($args[0]->type)) {
      $node = $args[0]->type;
      return node_access($op, $node);
    }
    else {
      return services_error(t('Node type is required'), 406);
    }
  }

  if (isset($node->nid) && $node->nid) {
    return node_access($op, $node);
  }
  else {
    $nid = $args[0]->nid;
    return services_error(t('Node @nid could not be found', array('@nid' => $nid)), 404);
  }
}
