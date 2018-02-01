<?php
/**
 * @file
 * nyulmc_ood_content_type_passion_story.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_passion_story_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_passion_story_content|node|passion_story|form';
  $field_group->group_name = 'group_passion_story_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'passion_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'group_passion_story_main',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-passion-story-content field-group-tabs',
      ),
    ),
  );
  $export['group_passion_story_content|node|passion_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_passion_story_main|node|passion_story|form';
  $field_group->group_name = 'group_passion_story_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'passion_story';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_passion_story_content';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_passion_story_image',
      2 => 'field_passion_story_overview',
      3 => 'field_passion_story_s_d',
      4 => 'field_slug',
      5 => 'field_passion_story_eyebrow',
      6 => 'title',
      7 => 'group_separator',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_passion_story_main|node|passion_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_separator|node|passion_story|form';
  $field_group->group_name = 'group_separator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'passion_story';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_passion_story_main';
  $field_group->data = array(
    'label' => '',
    'weight' => '10',
    'children' => array(
      0 => 'field_passion_st_show_donate_mod',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-separator field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_separator|node|passion_story|form'] = $field_group;

  return $export;
}
