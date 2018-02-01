<?php

/**
 * Assembles response for supporter message form.
 * @param $response_data
 * @param $node_wrapper
 */
function _nyulmc_ood_content_type_ways_to_give_child_page_retrieve_ways_to_give_child_page($response_data, $node_wrapper) {

  // If this is not our type, get out of here.
  if($node_wrapper->type->value() !== 'ways_to_give_child_page') {
    return;
  }
  // Helper class for processing output.
  $helper = new nyulmcServiceHelpers();

  // Attach any SEO data.
  _nyulmc_ood_services_api_core_node_retrieve_seo($response_data, $node_wrapper);

  // main
  $response_data->main = new stdClass();
  $response_data->main->short_description = $helper->prepareBody($node_wrapper->field_wtg_child_short_desc);
  $response_data->main->slug = $helper->prepareBody($node_wrapper->field_wtg_child_slug);

  // hero
  $response_data->hero = new stdClass();
  $response_data->hero->eyebrow = $helper->prepareBody($node_wrapper->field_wtg_child_eyebrow);
  $response_data->hero->header = $helper->prepareBody($node_wrapper->field_wtg_child_header);
  $response_data->hero->image = $helper->prepareImage($node_wrapper->field_wtg_child_image->value());

  // sidebar
  $response_data->sidebar = new stdClass();
  $response_data->sidebar->contact_header = $helper->prepareBody($node_wrapper->field_wtg_child_contact_header);
  $response_data->sidebar->address = $helper->prepareBody($node_wrapper->field_wtg_child_address);
  $response_data->sidebar->email = $helper->prepareBody($node_wrapper->field_wtg_child_email);
  $response_data->sidebar->phone = $helper->prepareBody($node_wrapper->field_wtg_child_phone);

  // body
  $response_data->body = $helper->prepareBody($node_wrapper->field_wtg_child_body);

  // quote
  $response_data->quote = array(
      'quote' => $helper->prepareBody($node_wrapper->field_wtg_child_quote_text),
      'image' => $helper->prepareImage($node_wrapper->field_wtg_child_image_upload->value()),
      'doctor_npi' => $helper->prepareBody($node_wrapper->field_wtg_child_doctor_npi),
      'name' => $helper->prepareBody($node_wrapper->field_wtg_child_name),
      'title' => $helper->prepareBody($node_wrapper->field_wtg_child_title)
  );

  // featured stories
  $response_data->featured_stories_header = $helper->prepareBody($node_wrapper->field_wtg_child_stories_header);
  module_load_include('inc', 'nyulmc_ood_content_type_supporter_landing', 'nyulmc_ood_content_type_supporter_landing.services');
  $response_data->featured_stories = array();
  foreach ($node_wrapper->field_wtg_child_stories as $featured_story) {
    $reference = $helper->prepareBody($featured_story->field_wtg_child_story_reference);
    $reference_array[] = _nyulmc_ood_content_type_supporter_landing_build_references($reference, $helper);
    if (!empty($reference_array)) {
      $response_data->featured_stories = $reference_array;
    }
  }

  $response_data->community = $helper->prepareBody($node_wrapper->field_home_module_header_comm);

  unset($response_data->language);
  unset($response_data->id);
  return $response_data;
}

/**
 * @param $slug
 * @return bool|mixed
 * @throws \Exceptionç
 */
function nyulmc_ood_content_type_ways_to_give_child_page_translate_slug_to_nid($slug) {

  try {
    // Check the slug field for our value.
    $query = db_select('field_data_field_wtg_child_slug', 'slug')
      ->fields('slug', array('field_wtg_child_slug_value', 'entity_id', 'entity_type'))
      ->condition('field_wtg_child_slug_value', $slug, '=');

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