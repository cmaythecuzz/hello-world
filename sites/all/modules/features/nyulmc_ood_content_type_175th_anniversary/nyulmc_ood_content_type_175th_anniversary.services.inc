<?php

/**
 * @param $node_wrapper
 * @param $helper nyulmcServiceHelpers
 *
 * @return null | stdClass
 */
function _nyulmc_ooc_content_type_175th_anniversary_retrieve_node($node_wrapper, $helper) {
  if ($node_wrapper->type->value() !== '175th_anniversary') {
    return null;
  }
  $response = new stdClass();

  $response->nid = $node_wrapper->nid->value();
  $response->language = $node_wrapper->language->value();

  _nyulmc_ood_services_api_core_node_retrieve_seo($response, $node_wrapper);

  // Hero tab
  $hero = new stdClass();
  $hero->eyebrow = $helper->prepareBody($node_wrapper->field_175_hero_eyebrow);
  $hero->header = $helper->prepareBody($node_wrapper->field_175_hero_header);
  $hero->sub_header = $helper->prepareBody($node_wrapper->field_175_hero_sub_header);
  $hero->image = $helper->prepareImage($node_wrapper->field_175_hero_image->value());
  $hero->button = $helper->processWrappedLink($node_wrapper->field_175_hero_button_title, array(), false);
  $hero->video = $helper->processBrightcoveField($node_wrapper, 'field_175_hero_video');
  if ($hero->button) {
    $hero->button->fund_id = $hero->button->url;
    unset($hero->button->url);
  }

  // Overview & Recognition tab
  $overview_recognition = new stdClass();
  $overview_recognition->body = $helper->prepareBody($node_wrapper->field_175_recognition_body);
  $recognition_module = new stdClass();
  $recognition_module->header = $helper->prepareBody($node_wrapper->field_175_recog_module_header);
  $recognition_module->recognitions = array();
  foreach ($node_wrapper->field_175_recog_recognitions as $recognition) {
    $recognition_module->recognitions[] = array(
      'stat' => $helper->prepareBody($recognition->field_175_recog_stats_stat),
      'description' => $helper->prepareBody($recognition->field_175_recog_stats_desc)
    );
  }
  $overview_recognition->recognition_module = $recognition_module;

  // Gallery tab
  $gallery = new stdClass();
  $gallery->header = $helper->prepareBody($node_wrapper->field_175_gallery_module_header);
  $gallery->body = $helper->prepareBody($node_wrapper->field_175_gallery_body);
  $gallery->fund_id = $helper->prepareBody($node_wrapper->field_175_gallery_supp_msg_id);

  // Get Involved tab
  $get_involved = new stdClass();
  $get_involved->header = $helper->prepareBody($node_wrapper->field_175_get_involved_header);
  $get_involved->body = $helper->prepareBody($node_wrapper->field_175_get_involved_body);
  $get_involved->image = $helper->prepareImage($node_wrapper->field_175_get_involved_image->value());
  $main_cta = $node_wrapper->field_175_get_involved_main_cta;
  $main_call_to_action = _nyulmc_ood_content_type_175th_anniversary_build_cta_response($main_cta, $helper);
  $other_calls_to_action = array();
  foreach ($node_wrapper->field_175_get_involved_2_3_cta as $this_cta) {
    $other_calls_to_action[] = _nyulmc_ood_content_type_175th_anniversary_build_cta_response($this_cta, $helper);
  }
  $get_involved->main_call_to_action = $main_call_to_action;
  $get_involved->second_third_calls_to_action = $other_calls_to_action;

  // Links tab
  $links = new stdClass();
  $links->header = $helper->prepareBody($node_wrapper->field_175_links_header);
  $links->body = $helper->prepareBody($node_wrapper->field_175_links_body);
  $content_links = array();
  foreach ($node_wrapper->field_175_links_content_links as $content_link) {
    $content_links[] = _nyulmc_ood_content_type_175th_anniversary_build_content_links($content_link, $helper);
  }
  $links->content_links = $content_links;

  // Give tab
  $give = new stdClass();
  $give->header = $helper->prepareBody($node_wrapper->field_175_give_header);

  $response->hero = $hero;
  $response->overview_recognition = $overview_recognition;
  $response->gallery = $gallery;
  $response->get_involved = $get_involved;
  $response->links = $links;
  $response->give = $give;
  return $response;
}

/**
 * @param $cta EntityMetadataWrapper
 * @param $helper nyulmcServiceHelpers
 *
 * @return \stdClass
 */
function _nyulmc_ood_content_type_175th_anniversary_build_cta_response($cta, $helper) {
  $response = new stdClass();

  if ($cta->value()) {
    $response->header = $helper->prepareBody($cta->field_175_get_inv_cta_header);
    $response->description = $helper->prepareBody($cta->field_175_get_inv_cta_desc);
    $response->fund_id = $helper->prepareBody($cta->field_175_get_inv_cta_fund_id);
    $response->link = $helper->processWrappedLink($cta->field_175_get_inv_cta_link_title);
    $response->image = $helper->prepareImage($cta->field_175_get_inv_cta_image->value());
  }
  return $response;
}

/**
 * @param $content_link EntityMetadataWrapper
 * @param $helper nyulmcServiceHelpers
 *
 * @return \stdClass
 */
function _nyulmc_ood_content_type_175th_anniversary_build_content_links($content_link, $helper) {
  $response = new stdClass();

  if ($content_link->value()) {
    $response->eyebrow = $helper->prepareBody($content_link->field_175_links_eyebrow);
    $response->header = $helper->prepareBody($content_link->field_175_links_content_header);
    $response->short_description = $helper->prepareBody($content_link->field_175_links_short_descr);
    $response->image = $helper->prepareImage($content_link->field_175_links_content_image->value());
    $response->link = $helper->prepareBody($content_link->field_175_links_content_link);
  }

  return $response;
}

/**
 * Assemble a node request response in a custom JSON structure.
 *
 * This is a callback for the services -> 175th_anniversary -> index.
 *
 * @return stdClass
 *   Node object or FALSE if not found.
 *
 * @see node_load(), node_view()
 *
 * @throws EntityMetadataWrapperException|Exception
 */
function _nyulmc_ooc_content_type_175th_anniversary_retrieve_node_index() {
  $node = NULL;
  $response_data = new stdClass();

  // Load our node, and populate it.
  if (($nid = nyulmc_ood_core_node_type_exists('175th_anniversary')) && ($node = node_load($nid))) {
    try {
      if($node->type !== '175th_anniversary'){
        throw new Exception(sprintf('Node %d is not a 175th Anniversary node', $nid));

      }

      // Helper class for processing output.
      $helper = new nyulmcServiceHelpers();

      // Wrap our node in an entity metadata wrapper, so we can autoload things,
      // and clean out that pesky language undefined syntax.
      $node_wrapper = entity_metadata_wrapper('node', $node);

      $response_data = _nyulmc_ooc_content_type_175th_anniversary_retrieve_node($node_wrapper, $helper);
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
        'Error when responding to service request. Node: 175th_anniversary, id: %nid. Message follows: %message',
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
