<?php
/**
 * @file
 * nyulmc_ood_content_type_funds_list.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_funds_list_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funds_list_content|node|funds_list|form';
  $field_group->group_name = 'group_funds_list_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funds_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '6',
    'children' => array(
      0 => 'group_funds_list_hero',
      1 => 'group_funds_list_modules',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-funds-list-content field-group-tabs',
      ),
    ),
  );
  $export['group_funds_list_content|node|funds_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funds_list_hero|node|funds_list|form';
  $field_group->group_name = 'group_funds_list_hero';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funds_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_funds_list_content';
  $field_group->data = array(
    'label' => 'Hero',
    'weight' => '45',
    'children' => array(
      0 => 'field_funds_list_hero_header',
      1 => 'field_funds_list_hero_sub_header',
      2 => 'field_funds_list_hero_btn_title',
      3 => 'field_funds_list_hero_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-funds-list-hero field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_funds_list_hero|node|funds_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_funds_list_modules|node|funds_list|form';
  $field_group->group_name = 'group_funds_list_modules';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'funds_list';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_funds_list_content';
  $field_group->data = array(
    'label' => 'Modules',
    'weight' => '46',
    'children' => array(
      0 => 'field_featured_funds_module_titl',
      1 => 'field_feat_funds_search_terms',
      2 => 'field_funds_list_feat_funds_head',
      3 => 'field_funds_list_search_header',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-funds-list-modules field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_funds_list_modules|node|funds_list|form'] = $field_group;

  return $export;
}
