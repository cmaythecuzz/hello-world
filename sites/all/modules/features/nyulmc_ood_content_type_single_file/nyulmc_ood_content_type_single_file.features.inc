<?php
/**
 * @file
 * nyulmc_ood_content_type_single_file.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyulmc_ood_content_type_single_file_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nyulmc_ood_content_type_single_file_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nyulmc_ood_content_type_single_file_node_info() {
  $items = array(
    'single_file' => array(
      'name' => t('Single file'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
