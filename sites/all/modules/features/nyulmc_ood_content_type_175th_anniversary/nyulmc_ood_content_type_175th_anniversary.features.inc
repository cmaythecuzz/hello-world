<?php
/**
 * @file
 * nyulmc_ood_content_type_175th_anniversary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyulmc_ood_content_type_175th_anniversary_ctools_plugin_api($module = NULL, $api = NULL) {
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
function nyulmc_ood_content_type_175th_anniversary_node_info() {
  $items = array(
    '175th_anniversary' => array(
      'name' => t('175th Anniversary'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
