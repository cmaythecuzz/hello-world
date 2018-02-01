<?php
/**
 * @file
 * nyulmc_ood_content_type_ways_to_give_child_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_ways_to_give_child_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_child_body|node|ways_to_give_child_page|form';
  $field_group->group_name = 'group_wtg_child_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_child_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wtg_child_content';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '47',
    'children' => array(
      0 => 'field_wtg_child_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wtg-child-body field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wtg_child_body|node|ways_to_give_child_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_child_content|node|ways_to_give_child_page|form';
  $field_group->group_name = 'group_wtg_child_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_child_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_wtg_child_body',
      1 => 'group_wtg_child_hero',
      2 => 'group_wtg_child_main',
      3 => 'group_wtg_child_quote',
      4 => 'group_wtg_child_sidebar',
      5 => 'group_wtg_child_stories',
      6 => 'group_wtg_community',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-wtg-child-content field-group-tabs',
      ),
    ),
  );
  $export['group_wtg_child_content|node|ways_to_give_child_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_child_hero|node|ways_to_give_child_page|form';
  $field_group->group_name = 'group_wtg_child_hero';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_child_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wtg_child_content';
  $field_group->data = array(
    'label' => 'Hero',
    'weight' => '45',
    'children' => array(
      0 => 'field_wtg_child_eyebrow',
      1 => 'field_wtg_child_header',
      2 => 'field_wtg_child_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wtg-child-hero field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wtg_child_hero|node|ways_to_give_child_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_child_main|node|ways_to_give_child_page|form';
  $field_group->group_name = 'group_wtg_child_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_child_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wtg_child_content';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '44',
    'children' => array(
      0 => 'field_wtg_child_short_desc',
      1 => 'field_wtg_child_slug',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wtg-child-main field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wtg_child_main|node|ways_to_give_child_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_child_quote|node|ways_to_give_child_page|form';
  $field_group->group_name = 'group_wtg_child_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_child_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wtg_child_content';
  $field_group->data = array(
    'label' => 'Quote',
    'weight' => '48',
    'children' => array(
      0 => 'field_wtg_child_doctor_npi',
      1 => 'field_wtg_child_image_upload',
      2 => 'field_wtg_child_name',
      3 => 'field_wtg_child_quote_text',
      4 => 'field_wtg_child_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wtg-child-quote field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wtg_child_quote|node|ways_to_give_child_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_child_sidebar|node|ways_to_give_child_page|form';
  $field_group->group_name = 'group_wtg_child_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_child_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wtg_child_content';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '46',
    'children' => array(
      0 => 'field_wtg_child_address',
      1 => 'field_wtg_child_contact_header',
      2 => 'field_wtg_child_email',
      3 => 'field_wtg_child_phone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wtg-child-sidebar field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wtg_child_sidebar|node|ways_to_give_child_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_child_stories|node|ways_to_give_child_page|form';
  $field_group->group_name = 'group_wtg_child_stories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_child_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wtg_child_content';
  $field_group->data = array(
    'label' => 'Featured Stories',
    'weight' => '49',
    'children' => array(
      0 => 'field_wtg_child_stories',
      1 => 'field_wtg_child_stories_header',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wtg-child-stories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wtg_child_stories|node|ways_to_give_child_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wtg_community|node|ways_to_give_child_page|form';
  $field_group->group_name = 'group_wtg_community';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ways_to_give_child_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wtg_child_content';
  $field_group->data = array(
    'label' => 'Community',
    'weight' => '50',
    'children' => array(
      0 => 'field_home_module_header_comm',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wtg-community field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_wtg_community|node|ways_to_give_child_page|form'] = $field_group;

  return $export;
}
