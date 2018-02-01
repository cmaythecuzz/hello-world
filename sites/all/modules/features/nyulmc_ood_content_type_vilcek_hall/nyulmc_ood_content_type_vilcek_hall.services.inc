<?php
// Resource file for nyulmc_ood_content_type_vilcek_hall.

/**
 * Retrieves a node
 *
 * @param $node
 * @param $helper nyulmcServiceHelpers
 *
 * @return stdClass
 */
function _nyulmc_ood_content_type_vilcek_hall_retrieve_node($node, $helper) {
  if ($node->type !== 'vilcek_hall') {
    return null;
  }

  $language = entity_language('node', $node);
  $node_wrapper = entity_metadata_wrapper('node', $node);
  $response = new stdClass();

  // We set the language in the response so that it can be used by _nyulmc_ood_services_api_core_node_retrieve_seo
  $response->language = $language;
  _nyulmc_ood_services_api_core_node_retrieve_seo($response, $node_wrapper);

  // Hero
  $hero = new stdClass();
  $hero->eyebrow = $helper->prepareBody($node_wrapper->field_vlck_hero_eyebrow);
  $hero->header = $helper->prepareBody($node_wrapper->field_vlck_hero_header);
  $hero->image = $helper->prepareImage($node_wrapper->field_vlck_hero_image->value());
  $hero_progress = new stdClass();
  $hero_progress->amount = $helper->prepareBody($node_wrapper->field_vlck_hero_dollar_amount);
  $hero_progress->percent = $helper->prepareBody($node_wrapper->field_vlck_hero_percent);
  $hero_progress->sentence = $helper->prepareBody($node_wrapper->field_vlck_hero_sentence);
  $hero->progress = $hero_progress;
  $response->hero = $hero;

  $response->slug = $helper->prepareBody($node_wrapper->field_vlck_hero_slug);

  // Contact Info
  $contact_info = new stdClass();
  $contact_info->email = $helper->prepareBody($node_wrapper->field_vlck_contact_email);
  $contact_info->phone = $helper->prepareBody($node_wrapper->field_vlck_contact_phone);
  $response->contact_info = $contact_info;

  // Body
  $response->body = $helper->prepareBody($node_wrapper->field_vlck_about_body);

  // Giving Process
  $giving_process = new stdClass();
  $giving_process->description1 = $helper->prepareBody($node_wrapper->field_vlck_giving_proc_desc1);
  $giving_process->description2 = $helper->prepareBody($node_wrapper->field_vlck_giving_proc_desc2);
  $giving_process->description3 = $helper->prepareBody($node_wrapper->field_vlck_giving_proc_desc3);
  $response->giving_process = $giving_process;

  // Alternate ways to help
  $alternate_help = new stdClass();
  $alternate_help->description1 = $helper->prepareBody($node_wrapper->field_vlck_alter_desc1);
  $alternate_help->description2 = $helper->prepareBody($node_wrapper->field_vlck_alter_desc2);
  $response->alternate_help = $alternate_help;

  // Supporter Wall
  $supporter_wall = new stdClass();
  $supporter_wall->header = $helper->prepareBody($node_wrapper->field_vlck_wall_header);
  $supporter_wall->sub_header = $helper->prepareBody($node_wrapper->field_vlck_wall_sub_header);
  $supporter_wall->image = $helper->prepareImage($node_wrapper->field_vlck_wall_background_image->value());
  $supporter_wall->show = $helper->prepareBooleanOutput($node_wrapper->field_vlck_wall_show_supp);
  $supporter_wall->names = array();
  foreach ($node_wrapper->field_vlck_wall_name as $name) {
    $supporter_wall->names[] = $helper->prepareBody($name);
  }
  $response->supporter_wall = $supporter_wall;

  // Gallery
  $gallery = new stdClass();
  $gallery->header = $helper->prepareBody($node_wrapper->field_vlck_gallery_header);
  $gallery->fund_id = $helper->prepareBody($node_wrapper->field_vlck_gallery_fund_id);
  $response->gallery = $gallery;

  // Footer header
  $response->footer_header = $helper->prepareBody($node_wrapper->field_vlck_footer_header);

  unset($response->language);
  return $response;
}

/**
 * Retrieves the index action for Vilcek Hall page. This is a singleton content type.
 */
function _nyulmc_ood_content_type_vilcek_hall_retrieve_node_index() {
  if (($nid = nyulmc_ood_core_node_type_exists('vilcek_hall')) && ($node = node_load($nid))) {

    $node_wrapper = entity_metadata_wrapper('node', $node);
    // Helper class for processing output.
    $helper = new nyulmcServiceHelpers();
    return _nyulmc_ood_content_type_vilcek_hall_retrieve_node($node, $helper);
  } else {
    return services_error(t('Node could not be found'), 404);
  }
}