<?php
/**
 * @file
 * nyulmc_ood_content_type_p2p_landing.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_p2p_landing_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_p2p_landing_content|node|fundraise_landing|form';
  $field_group->group_name = 'group_p2p_landing_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fundraise_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '43',
    'children' => array(
      0 => 'field_p2p_landing_feat_campaigns',
      1 => 'group_p2p_landing_main',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-p2p-landing-content field-group-tabs',
      ),
    ),
  );
  $export['group_p2p_landing_content|node|fundraise_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_p2p_landing_main|node|fundraise_landing|form';
  $field_group->group_name = 'group_p2p_landing_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fundraise_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_p2p_landing_content';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '43',
    'children' => array(
      0 => 'field_p2p_landing_module_header',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-p2p-landing-main field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_p2p_landing_main|node|fundraise_landing|form'] = $field_group;

  return $export;
}
