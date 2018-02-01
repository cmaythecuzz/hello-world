<?php
/**
 * @file
 * nyulmc_ood_content_type_events_landing.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_events_landing_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_landing_content|node|events_landing|form';
  $field_group->group_name = 'group_events_landing_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_events_landing_main',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-events-landing-content field-group-tabs',
      ),
    ),
  );
  $export['group_events_landing_content|node|events_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_landing_main|node|events_landing|form';
  $field_group->group_name = 'group_events_landing_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_events_landing_content';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '8',
    'children' => array(
      0 => 'field_events_land_upcom_header',
      1 => 'field_events_land_upcoming_subh',
      2 => 'field_events_land_past_subh',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-events-landing-main field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_events_landing_main|node|events_landing|form'] = $field_group;

  return $export;
}
