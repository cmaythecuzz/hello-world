<?php
/**
 * @file
 * nyulmc_ood_content_type_fund.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyulmc_ood_content_type_fund_ctools_plugin_api($module = NULL, $api = NULL) {
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
function nyulmc_ood_content_type_fund_node_info() {
  $items = array(
    'fund' => array(
      'name' => t('Funds'),
      'base' => 'node_content',
      'description' => t('<em>Funds</em>  container'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
