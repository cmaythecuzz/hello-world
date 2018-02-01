<?php
/**
 * @file
 * nyulmc_ood_content_type_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_content|node|event|form';
  $field_group->group_name = 'group_event_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'group_event_donate',
      1 => 'group_event_honorees',
      2 => 'group_event_main',
      3 => 'group_event_past_event',
      4 => 'group_event_speeches',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event-content field-group-tabs',
      ),
    ),
  );
  $export['group_event_content|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_donate|node|event|form';
  $field_group->group_name = 'group_event_donate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_content';
  $field_group->data = array(
    'label' => 'Donate to Event',
    'weight' => '47',
    'children' => array(
      0 => 'field_event_donate_allocation_co',
      1 => 'field_event_donate_appeal_code',
      2 => 'field_event_donate_form_id',
      3 => 'field_event_show_donate_module',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Donate to Event',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-event-donate field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_donate|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_honorees|node|event|form';
  $field_group->group_name = 'group_event_honorees';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_content';
  $field_group->data = array(
    'label' => 'Honorees',
    'weight' => '46',
    'children' => array(
      0 => 'field_event_honoree',
      1 => 'field_event_honorees_sect_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Honorees',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_honorees|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_main|node|event|form';
  $field_group->group_name = 'group_event_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_content';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '45',
    'children' => array(
      0 => 'field_event_hero_image',
      1 => 'field_event_id',
      2 => 'field_event_preview_image',
      3 => 'field_event_slug',
      4 => 'field_event_body_1',
      5 => 'field_event_body_2',
      6 => 'field_event_contact_info',
      7 => 'field_event_add_the',
      8 => 'field_event_overview',
      9 => 'field_event_body_title_past',
      10 => 'field_event_hero_image_past',
      11 => 'field_event_contact_phone',
      12 => 'title',
      13 => 'field_event_contact_email',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Main',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-event-main field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_main|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_past_event|node|event|form';
  $field_group->group_name = 'group_event_past_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_content';
  $field_group->data = array(
    'label' => 'Past Event',
    'weight' => '50',
    'children' => array(
      0 => 'field_event_past_hero_stats',
      1 => 'field_event_past_show_on_landing',
      2 => 'group_event_past_recognitions',
      3 => 'group_past_event_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Past Event',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_past_event|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_past_recognitions|node|event|form';
  $field_group->group_name = 'group_event_past_recognitions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_past_event';
  $field_group->data = array(
    'label' => 'Recognition',
    'weight' => '24',
    'children' => array(
      0 => 'field_event_past_recognitions',
      1 => 'field_event_past_recogniti_title',
      2 => 'field_event_pas_recogn_sub_title',
      3 => 'field_event_past_reco_ad_journal',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Recognition',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-event-past-recognitions field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_past_recognitions|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_speeches_stories|field_collection_item|field_event_speeches|form';
  $field_group->group_name = 'group_event_speeches_stories';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_event_speeches';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Include speech with stories',
    'weight' => '5',
    'children' => array(
      0 => 'field_speech_show_on_st_page',
      1 => 'field_event_speech_preview_image',
      2 => 'field_event_speech_short_desc',
      3 => 'field_event_speech_eyebrow',
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
        'classes' => 'group-event-speeches-stories field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_event_speeches_stories|field_collection_item|field_event_speeches|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_speeches|node|event|form';
  $field_group->group_name = 'group_event_speeches';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_content';
  $field_group->data = array(
    'label' => 'Speeches',
    'weight' => '51',
    'children' => array(
      0 => 'field_event_speeches',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-speeches field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_speeches|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_past_event_gallery|node|event|form';
  $field_group->group_name = 'group_past_event_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_past_event';
  $field_group->data = array(
    'label' => 'Event Gallery',
    'weight' => '23',
    'children' => array(
      0 => 'field_event_past_gallery_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-past-event-gallery field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_past_event_gallery|node|event|form'] = $field_group;

  return $export;
}
