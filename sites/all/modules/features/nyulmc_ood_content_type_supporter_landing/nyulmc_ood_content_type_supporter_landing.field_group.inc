<?php
/**
 * @file
 * nyulmc_ood_content_type_supporter_landing.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_supporter_landing_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supporter_landing_content|node|supporter_landing|form';
  $field_group->group_name = 'group_supporter_landing_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supporter_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '4',
    'children' => array(
      0 => 'group_supporter_landing_main',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-supporter-landing-content field-group-tabs',
      ),
    ),
  );
  $export['group_supporter_landing_content|node|supporter_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supporter_landing_main|node|supporter_landing|form';
  $field_group->group_name = 'group_supporter_landing_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supporter_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_supporter_landing_content';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '44',
    'children' => array(
      0 => 'field_supporter_landing_story',
      1 => 'field_supp_landing_story_ref',
      2 => 'field_supp_land_2_n_3_feat_story',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-supporter-landing-main field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_supporter_landing_main|node|supporter_landing|form'] = $field_group;

  return $export;
}
