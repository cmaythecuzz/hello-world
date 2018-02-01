<?php
/**
 * @file
 * nyulmc_ood_content_type_175th_anniversary.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_175th_anniversary_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_175_content|node|175th_anniversary|form';
  $field_group->group_name = 'group_175_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = '175th_anniversary';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '4',
    'children' => array(
      0 => 'group_175_gallery',
      1 => 'group_175_get_involved',
      2 => 'group_175_give',
      3 => 'group_175_hero',
      4 => 'group_175_links',
      5 => 'group_175_recognition',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-175-content field-group-tabs',
      ),
    ),
  );
  $export['group_175_content|node|175th_anniversary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_175_gallery|node|175th_anniversary|form';
  $field_group->group_name = 'group_175_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = '175th_anniversary';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_175_content';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '7',
    'children' => array(
      0 => 'field_175_gallery_module_header',
      1 => 'field_175_gallery_body',
      2 => 'field_175_gallery_supp_msg_id',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-175-gallery field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_175_gallery|node|175th_anniversary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_175_get_involved|node|175th_anniversary|form';
  $field_group->group_name = 'group_175_get_involved';
  $field_group->entity_type = 'node';
  $field_group->bundle = '175th_anniversary';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_175_content';
  $field_group->data = array(
    'label' => 'Get Involved',
    'weight' => '8',
    'children' => array(
      0 => 'field_175_get_involved_header',
      1 => 'field_175_get_involved_body',
      2 => 'field_175_get_involved_image',
      3 => 'field_175_get_involved_main_cta',
      4 => 'field_175_get_involved_2_3_cta',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-175-get-involved field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_175_get_involved|node|175th_anniversary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_175_give|node|175th_anniversary|form';
  $field_group->group_name = 'group_175_give';
  $field_group->entity_type = 'node';
  $field_group->bundle = '175th_anniversary';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_175_content';
  $field_group->data = array(
    'label' => 'Give',
    'weight' => '10',
    'children' => array(
      0 => 'field_175_give_header',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-175-give field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_175_give|node|175th_anniversary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_175_hero|node|175th_anniversary|form';
  $field_group->group_name = 'group_175_hero';
  $field_group->entity_type = 'node';
  $field_group->bundle = '175th_anniversary';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_175_content';
  $field_group->data = array(
    'label' => 'Hero',
    'weight' => '5',
    'children' => array(
      0 => 'field_175_hero_eyebrow',
      1 => 'field_175_hero_header',
      2 => 'field_175_hero_sub_header',
      3 => 'field_175_hero_image',
      4 => 'field_175_hero_button_title',
      5 => 'field_175_hero_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-175-hero field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_175_hero|node|175th_anniversary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_175_links|node|175th_anniversary|form';
  $field_group->group_name = 'group_175_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = '175th_anniversary';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_175_content';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '9',
    'children' => array(
      0 => 'field_175_links_header',
      1 => 'field_175_links_body',
      2 => 'field_175_links_content_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-175-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_175_links|node|175th_anniversary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_175_recog_recognition|node|175th_anniversary|form';
  $field_group->group_name = 'group_175_recog_recognition';
  $field_group->entity_type = 'node';
  $field_group->bundle = '175th_anniversary';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_175_recognition';
  $field_group->data = array(
    'label' => 'Recognition',
    'weight' => '11',
    'children' => array(
      0 => 'field_175_recog_module_header',
      1 => 'field_175_recog_recognitions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-175-recog-recognition field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_175_recog_recognition|node|175th_anniversary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_175_recognition|node|175th_anniversary|form';
  $field_group->group_name = 'group_175_recognition';
  $field_group->entity_type = 'node';
  $field_group->bundle = '175th_anniversary';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_175_content';
  $field_group->data = array(
    'label' => 'Overview & Recognition',
    'weight' => '6',
    'children' => array(
      0 => 'field_175_recognition_body',
      1 => 'group_175_recog_recognition',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-175-recognition field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_175_recognition|node|175th_anniversary|form'] = $field_group;

  return $export;
}
