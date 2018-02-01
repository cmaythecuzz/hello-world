<?php

/**
 * Assembles response for supporter message form.
 * @param $response_data
 * @param $node_wrapper
 */
function _nyulmc_ood_content_type_supporter_message_form_retrieve_supporter_message_form($response_data, $node_wrapper) {

  // If this is not our type, get out of here.
  if($node_wrapper->type->value() !== 'supporter_message_form') {
    return;
  }
  // Helper class for processing output.
  $helper = new nyulmcServiceHelpers();

  // Attach any SEO data.
  _nyulmc_ood_services_api_core_node_retrieve_seo($response_data, $node_wrapper);

  $response_data->hero_image = new stdClass();
  $response_data->hero_image->large = $helper->prepareImage($node_wrapper->field_sup_msg_large_hi->value());
  $response_data->hero_image->medium = $helper->prepareImage($node_wrapper->field_sup_msg_medium_hero_image->value());

  $response_data->header = $helper->prepareBody($node_wrapper->field_sup_msg_header_text);
  $response_data->sub_header = $helper->prepareBody($node_wrapper->field_sup_msg_sub_header_text);

  // Fields
  $fields = new stdClass();
  $fields->header = $helper->prepareBody($node_wrapper->field_sup_msg_field_header_text);
  $fields->eyebrow = $helper->prepareBody($node_wrapper->field_sup_msg_field_eyebrow_text);
  $fields->tooltip = $helper->prepareBody($node_wrapper->field_sup_msg_field_tooltip_text);
  $fields->helper = $helper->prepareBody($node_wrapper->field_sup_msg_field_helper_text);
  $fields->field_message = $helper->prepareBody($node_wrapper->field_sup_msg_field_message);

  // Tell us about yourself
  $about = new stdClass();
  $about->header = $helper->prepareBody($node_wrapper->field_sup_msg_tellus_heade);
  $about->eyebrow = $helper->prepareBody($node_wrapper->field_sup_msg_tellus_eyebrow);
  $about->helper = $helper->prepareBody($node_wrapper->field_sup_msg_tellus_helper);
  $about->image_eyebrow = $helper->prepareBody($node_wrapper->field_sup_msg_tellus_eyebrow_img);
  $about->image_tooltip = $helper->prepareBody($node_wrapper->field_sup_msg_tellus_tooltip_img);
  $about->image_helper = $helper->prepareBody($node_wrapper->field_sup_msg_tellus_helper_img);
  $about->hide_about_you = $helper->prepareBooleanOutput($node_wrapper->field_sup_msg_tellus_hay);
  $response_data->about = $about;

  $confirmation_page = new stdClass();
  $confirmation_page->title = $helper->prepareBody($node_wrapper->field_sup_msg_conf_page_title);
  $confirmation_page->sub_header = $helper->prepareBody($node_wrapper->field_sup_msg_conf_page_sub_head);
  $confirmation_page->hide_meet_other_supporters = $helper->prepareBooleanOutput($node_wrapper->field_sup_msg_conf_page_hide_mos);
  $response_data->confirmation_page = $confirmation_page;

  $response_data->fields = $fields;

  $response_data->slug = $helper->prepareBody($node_wrapper->field_sup_msg_form_slug);
  unset($response_data->language);
  unset($response_data->id);
  return $response_data;
}

/**
 * @param $slug
 * @return bool|mixed
 * @throws \Exceptionç
 */
function nyulmc_ood_content_type_supporter_message_form_translate_slug_to_nid($slug) {

  try {
    // Check the slug field for our value.
    $query = db_select('field_data_field_sup_msg_form_slug', 'slug')
      ->fields('slug', array('field_sup_msg_form_slug_value', 'entity_id', 'entity_type'))
      ->condition('field_sup_msg_form_slug_value', $slug, '=');

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