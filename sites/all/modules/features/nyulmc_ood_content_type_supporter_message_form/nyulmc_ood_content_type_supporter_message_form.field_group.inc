<?php
/**
 * @file
 * nyulmc_ood_content_type_supporter_message_form.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_supporter_message_form_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sup_msg_conf_page|node|supporter_message_form|form';
  $field_group->group_name = 'group_sup_msg_conf_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supporter_message_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sup_msg_form_content';
  $field_group->data = array(
    'label' => 'Confirmation Page',
    'weight' => '47',
    'children' => array(
      0 => 'field_sup_msg_conf_page_title',
      1 => 'field_sup_msg_conf_page_sub_head',
      2 => 'field_sup_msg_conf_page_hide_mos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sup-msg-conf-page field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sup_msg_conf_page|node|supporter_message_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sup_msg_fields|node|supporter_message_form|form';
  $field_group->group_name = 'group_sup_msg_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supporter_message_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sup_msg_form_content';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '45',
    'children' => array(
      0 => 'field_sup_msg_field_header_text',
      1 => 'field_sup_msg_field_eyebrow_text',
      2 => 'field_sup_msg_field_tooltip_text',
      3 => 'field_sup_msg_field_helper_text',
      4 => 'field_sup_msg_field_message',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sup-msg-fields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sup_msg_fields|node|supporter_message_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sup_msg_form_content|node|supporter_message_form|form';
  $field_group->group_name = 'group_sup_msg_form_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supporter_message_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'group_sup_msg_form_main',
      1 => 'group_sup_msg_fields',
      2 => 'group_sup_msg_form_tell_us',
      3 => 'group_sup_msg_conf_page',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-sup-msg-form-content field-group-tabs',
      ),
    ),
  );
  $export['group_sup_msg_form_content|node|supporter_message_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sup_msg_form_main|node|supporter_message_form|form';
  $field_group->group_name = 'group_sup_msg_form_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supporter_message_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sup_msg_form_content';
  $field_group->data = array(
    'label' => ' Supporter Message Form',
    'weight' => '44',
    'children' => array(
      0 => 'field_sup_msg_header_text',
      1 => 'field_sup_msg_sub_header_text',
      2 => 'field_sup_msg_form_slug',
      3 => 'title',
      4 => 'group_sup_msg_hero_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sup-msg-form-main field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sup_msg_form_main|node|supporter_message_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sup_msg_form_tell_us|node|supporter_message_form|form';
  $field_group->group_name = 'group_sup_msg_form_tell_us';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supporter_message_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sup_msg_form_content';
  $field_group->data = array(
    'label' => 'Tell Us About Yourself',
    'weight' => '46',
    'children' => array(
      0 => 'field_sup_msg_tellus_heade',
      1 => 'field_sup_msg_tellus_eyebrow',
      2 => 'field_sup_msg_tellus_helper',
      3 => 'field_sup_msg_tellus_hay',
      4 => 'group_sup_msg_tellus_img',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sup-msg-form-tell-us field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sup_msg_form_tell_us|node|supporter_message_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sup_msg_hero_image|node|supporter_message_form|form';
  $field_group->group_name = 'group_sup_msg_hero_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supporter_message_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sup_msg_form_main';
  $field_group->data = array(
    'label' => 'Hero Image',
    'weight' => '-4',
    'children' => array(
      0 => 'field_sup_msg_large_hi',
      1 => 'field_sup_msg_medium_hero_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sup-msg-hero-image field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sup_msg_hero_image|node|supporter_message_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sup_msg_tellus_img|node|supporter_message_form|form';
  $field_group->group_name = 'group_sup_msg_tellus_img';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supporter_message_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sup_msg_form_tell_us';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '15',
    'children' => array(
      0 => 'field_sup_msg_tellus_eyebrow_img',
      1 => 'field_sup_msg_tellus_tooltip_img',
      2 => 'field_sup_msg_tellus_helper_img',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sup-msg-tellus-img field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sup_msg_tellus_img|node|supporter_message_form|form'] = $field_group;

  return $export;
}
