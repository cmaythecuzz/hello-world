<?php
/**
 * @file
 * nyulmc_ood_content_type_home_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyulmc_ood_content_type_home_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nyulmc_ood_content_type_home_page_node_info() {
  $items = array(
    'home_page' => array(
      'name' => t('Home'),
      'base' => 'node_content',
      'description' => t('The content of the Home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
