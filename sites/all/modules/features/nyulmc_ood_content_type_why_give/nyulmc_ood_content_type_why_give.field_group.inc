<?php
/**
 * @file
 * nyulmc_ood_content_type_why_give.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_why_give_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stewardship|node|why_give|form';
  $field_group->group_name = 'group_stewardship';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'why_give';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_why_give_content_group';
  $field_group->data = array(
    'label' => 'Stewardship',
    'weight' => '4',
    'children' => array(
      0 => 'field_why_give_stewar_sect_title',
      1 => 'field_stewardship_collection',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-stewardship field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_stewardship|node|why_give|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_why_give_content_group|node|why_give|form';
  $field_group->group_name = 'group_why_give_content_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'why_give';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'group_stewardship',
      1 => 'group_why_give_general_appeal',
      2 => 'group_why_give_main',
      3 => 'group_why_give_video',
      4 => 'group_why_give_stories',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-why-give-content-group field-group-tabs',
      ),
    ),
  );
  $export['group_why_give_content_group|node|why_give|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_why_give_general_appeal|node|why_give|form';
  $field_group->group_name = 'group_why_give_general_appeal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'why_give';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_why_give_content_group';
  $field_group->data = array(
    'label' => 'Global Fund Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_why_give_general_appeal_bo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Global Fund Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_why_give_general_appeal|node|why_give|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_why_give_main|node|why_give|form';
  $field_group->group_name = 'group_why_give_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'why_give';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_why_give_content_group';
  $field_group->data = array(
    'label' => 'Why Give',
    'weight' => '1',
    'children' => array(
      0 => 'field_why_give_overview_main',
      1 => 'field_why_give_section',
      2 => 'title',
      3 => 'field_why_give_video_jump_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Why Give',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_why_give_main|node|why_give|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_why_give_video|node|why_give|form';
  $field_group->group_name = 'group_why_give_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'why_give';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_why_give_content_group';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '2',
    'children' => array(
      0 => 'field_video',
      1 => 'field_video_image',
      2 => 'field_video_title',
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
  $export['group_why_give_video|node|why_give|form'] = $field_group;

  return $export;
}
