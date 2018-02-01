<?php
/**
 * @file
 * nyulmc_ood_content_type_why_give.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyulmc_ood_content_type_why_give_ctools_plugin_api($module = NULL, $api = NULL) {
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
function nyulmc_ood_content_type_why_give_node_info() {
  $items = array(
    'why_give' => array(
      'name' => t('Why Give'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Header'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
