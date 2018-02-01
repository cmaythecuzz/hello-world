<?php
/**
 * nyulmc_ood_content_type_ways_to_give_landing.services.inc
 */

/**
 * @param $response_data
 * @param $node_wrapper
 */
function _nyulmc_ood_content_type_ways_to_give_landing_retrieve_ways_to_give_landing($response_data, $node_wrapper) {
  // If this is not our type, get out of here.
  if($node_wrapper->type->value() !== 'ways_to_give_landing') {
    return;
  }

  // Helper class for processing output.
  $helper = new nyulmcServiceHelpers();

  $response_data->title = $helper->prepareBody(($node_wrapper->title));
  $response_data->short_description = $helper->prepareBody($node_wrapper->wtg_land_short_description);

  $response_data->hero_header = $helper->prepareBody($node_wrapper->wtg_land_hero_eyebrow);
  $response_data->hero_subheader = $helper->prepareBody($node_wrapper->field_wtg_land_hero_subheader);
  $response_data->hero_image = $helper->prepareImage($node_wrapper->wtg_land_hero_image->value());
  
  $body_modules = [];
  foreach ($node_wrapper->field_wtg_body as $module) {
    $body_module = new stdClass();
    $body_module->header = $helper->prepareBody($module->field_wtg_body_header);
    $body_module->image = $helper->prepareImage($module->field_wtg_body_image->value());
    $body_module->body = $helper->prepareBody($module->field_wtg_body_body);
    $body_module->button = $helper->processWrappedLink($module->field_wtg_body_button_cta);
    $body_module->link = $helper->processWrappedLink($module->field_wtg_bod_link_cta);
    $body_module->contact_header = $helper->prepareBody($module->field_wtg_body_contact_header);
    $body_module->address = nl2br($helper->prepareBody($module->field_wtg_body_address));
    $body_module->email = $helper->prepareBody($module->field_wtg_body_email);
    $body_module->phone = $helper->prepareBody($module->field_wtg_body_phone);
    $body_modules[] = $body_module;
  }
  $response_data->body_modules = $body_modules;

  // Unset all fields that will not be exposed.
  unset($response_data->id);
  unset($response_data->language);

  return $response_data;
}