<?php
/**
 * @file
 * nyulmc_ood_content_type_ways_to_give_landing.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_ways_to_give_landing_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_landing_body|node|ways_to_give_landing|form';
  $field_group->group_name = 'group_wtg_landing_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wtg_landing_content';
  $field_group->data = array(
    'label' => 'Body/Contact Info',
    'weight' => '12',
    'children' => array(
      0 => 'field_wtg_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wtg-landing-body field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wtg_landing_body|node|ways_to_give_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_landing_content|node|ways_to_give_landing|form';
  $field_group->group_name = 'group_wtg_landing_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'group_wtg_landing_body',
      1 => 'group_wtg_landing_hero',
      2 => 'group_wtg_landing_main',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-wtg-landing-content field-group-tabs',
      ),
    ),
  );
  $export['group_wtg_landing_content|node|ways_to_give_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_landing_hero|node|ways_to_give_landing|form';
  $field_group->group_name = 'group_wtg_landing_hero';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wtg_landing_content';
  $field_group->data = array(
    'label' => 'Hero',
    'weight' => '11',
    'children' => array(
      0 => 'wtg_land_hero_eyebrow',
      1 => 'wtg_land_hero_header',
      2 => 'wtg_land_hero_image',
      3 => 'field_wtg_land_hero_subheader',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wtg-landing-hero field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wtg_landing_hero|node|ways_to_give_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_landing_main|node|ways_to_give_landing|form';
  $field_group->group_name = 'group_wtg_landing_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wtg_landing_content';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '10',
    'children' => array(
      0 => 'wtg_land_short_description',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wtg-landing-main field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wtg_landing_main|node|ways_to_give_landing|form'] = $field_group;

  return $export;
}
