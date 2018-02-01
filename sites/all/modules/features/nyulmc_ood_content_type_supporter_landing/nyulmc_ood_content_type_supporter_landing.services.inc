<?php
/**
 * nyulmc_ood_content_type_supporter_landing.services.inc
 */

/**
 * @param $response_data
 * @param $node_wrapper
 */
function _nyulmc_ood_content_type_supporter_landing_retrieve_supporter_landing($response_data, $node_wrapper) {
  // If this is not our type, get out of here.
  if($node_wrapper->type->value() !== 'supporter_landing') {
    return;
  }

  // Helper class for processing output.
  $helper = new nyulmcServiceHelpers();
  $main_reference = $helper->prepareBody($node_wrapper->field_supporter_landing_story->field_supp_landing_story_ref);

  $main_array = _nyulmc_ood_content_type_supporter_landing_build_references($main_reference, $helper);

  if (!empty($main_array)) {
    $main_array['hero_image'] = $helper->prepareImage($node_wrapper->field_supporter_landing_story->field_supp_landing_story_hero->value());
    $response_data->main = $main_array;
  }

  $featured_stories = array();
  foreach ($node_wrapper->field_supp_land_2_n_3_feat_story as $featured_story) {
    $reference = $helper->prepareBody($featured_story->field_supp_landing_story_ref);

    $reference_array = _nyulmc_ood_content_type_supporter_landing_build_references($reference, $helper);

    if (!empty($reference_array)) {
      $featured_stories[] = $reference_array;
    }
  }
  $response_data->regular = $featured_stories;

  // Unset all fields that will not be exposed.
  unset($response_data->id);
  unset($response_data->language);
  unset($response_data->title);

  return $response_data;
}

/**
 * Builds a service response based on a reference string to a speech or a passion story.
 *
 * @param string $reference_string
 * @param nyulmcServiceHelpers $helper
 *
 * @return array
 */
function _nyulmc_ood_content_type_supporter_landing_build_references($reference_string, $helper) {
  $return_array = array();

  if(strpos($reference_string, 'speech') === 0) {
    module_load_include('inc', 'nyulmc_ood_content_type_event', 'nyulmc_ood_content_type_event.services');
    $speech_id = substr($reference_string, 7);
    $speech = entity_metadata_wrapper('field_collection_item', $speech_id);

    $event = entity_load_single('field_collection_item', $speech_id)->hostEntity();
    $event = entity_metadata_wrapper('node', $event);

    $reference_response = _nyulmc_ood_content_type_event_build_speech_response($speech, $event, $helper);
    $reference_type = 'speech';
  } elseif (strpos($reference_string, 'passion-story') === 0) {
    module_load_include('inc', 'nyulmc_ood_content_type_passion_story', 'nyulmc_ood_content_type_passion_story.services');
    $passion_story_id = substr($reference_string, 14);
    $passion_story = entity_metadata_wrapper('node', node_load($passion_story_id));

    $passion_story_response = new stdClass();
    $passion_story_response->title = $helper->prepareOutput($passion_story->title->value());
    $language = entity_language('node', node_load($passion_story_id));
    $passion_story_response->id = $passion_story->nid->value();
    $passion_story_response->title = $helper::prepareOutput($passion_story->title->value());

    $passion_story_response->language = $language;
    $reference_response = _nyulmc_ood_content_type_passion_story_retrieve_passion_story($passion_story_response, $passion_story);
    $reference_type = 'passion_story';
  }

  if (isset($reference_response) && isset($reference_type)) {
    $return_array = array(
      'reference' => $reference_response,
      'type' => $reference_type
    );
  }

  return $return_array;
}
