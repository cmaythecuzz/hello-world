<?php
/**
 * @file
 * nyulmc_ood_content_type_p2p_landing.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nyulmc_ood_content_type_p2p_landing_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_p2p_landing_feat_campaigns'
  $field_bases['field_p2p_landing_feat_campaigns'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_p2p_landing_feat_campaigns',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_p2p_landing_module_header'
  $field_bases['field_p2p_landing_module_header'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_p2p_landing_module_header',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
