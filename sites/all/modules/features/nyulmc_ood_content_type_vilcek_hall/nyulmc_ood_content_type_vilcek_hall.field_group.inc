<?php
/**
 * @file
 * nyulmc_ood_content_type_vilcek_hall.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_vilcek_hall_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_about|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vlck_content';
  $field_group->data = array(
    'label' => 'About this campaign',
    'weight' => '5',
    'children' => array(
      0 => 'field_vlck_about_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vlck-about field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vlck_about|node|vilcek_hall|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_alter|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_alter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vlck_content';
  $field_group->data = array(
    'label' => 'Alternate ways to help',
    'weight' => '7',
    'children' => array(
      0 => 'field_vlck_alter_desc1',
      1 => 'field_vlck_alter_desc2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vlck-alter field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vlck_alter|node|vilcek_hall|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_contact|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vlck_content';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_vlck_contact_email',
      1 => 'field_vlck_contact_phone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vlck-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vlck_contact|node|vilcek_hall|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_content|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_vlck_hero',
      1 => 'group_vlck_contact',
      2 => 'group_vlck_giving_proc',
      3 => 'group_vlck_about',
      4 => 'group_vlck_alter',
      5 => 'group_vlck_wall',
      6 => 'group_vlck_gallery',
      7 => 'group_vlck_footer',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-vlck-content field-group-tabs',
      ),
    ),
  );
  $export['group_vlck_content|node|vilcek_hall|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_footer|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vlck_content';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '10',
    'children' => array(
      0 => 'field_vlck_footer_header',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vlck-footer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vlck_footer|node|vilcek_hall|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_gallery|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vlck_content';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '9',
    'children' => array(
      0 => 'field_vlck_gallery_header',
      1 => 'field_vlck_gallery_fund_id',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vlck-gallery field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vlck_gallery|node|vilcek_hall|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_giving_proc|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_giving_proc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vlck_content';
  $field_group->data = array(
    'label' => 'Giving Process',
    'weight' => '6',
    'children' => array(
      0 => 'field_vlck_giving_proc_desc1',
      1 => 'field_vlck_giving_proc_desc2',
      2 => 'field_vlck_giving_proc_desc3',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vlck-giving-proc field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vlck_giving_proc|node|vilcek_hall|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_hero_progress|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_hero_progress';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vlck_hero';
  $field_group->data = array(
    'label' => 'Progress Indicator',
    'weight' => '7',
    'children' => array(
      0 => 'field_vlck_hero_dollar_amount',
      1 => 'field_vlck_hero_percent',
      2 => 'field_vlck_hero_sentence',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vlck-hero-progress field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vlck_hero_progress|node|vilcek_hall|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_hero|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_hero';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vlck_content';
  $field_group->data = array(
    'label' => 'Hero',
    'weight' => '3',
    'children' => array(
      0 => 'field_vlck_hero_eyebrow',
      1 => 'field_vlck_hero_header',
      2 => 'field_vlck_hero_image',
      3 => 'field_vlck_hero_slug',
      4 => 'group_vlck_hero_progress',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vlck-hero field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vlck_hero|node|vilcek_hall|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_wall_names|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_wall_names';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vlck_wall';
  $field_group->data = array(
    'label' => 'Supporter Names',
    'weight' => '28',
    'children' => array(
      0 => 'field_vlck_wall_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vlck-wall-names field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vlck_wall_names|node|vilcek_hall|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlck_wall|node|vilcek_hall|form';
  $field_group->group_name = 'group_vlck_wall';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vilcek_hall';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vlck_content';
  $field_group->data = array(
    'label' => 'Supporter Wall',
    'weight' => '8',
    'children' => array(
      0 => 'field_vlck_wall_header',
      1 => 'field_vlck_wall_sub_header',
      2 => 'field_vlck_wall_background_image',
      3 => 'field_vlck_wall_show_supp',
      4 => 'group_vlck_wall_names',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vlck-wall field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vlck_wall|node|vilcek_hall|form'] = $field_group;

  return $export;
}
