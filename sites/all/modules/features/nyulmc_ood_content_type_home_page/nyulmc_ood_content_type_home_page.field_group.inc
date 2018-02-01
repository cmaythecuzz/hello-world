<?php
/**
 * @file
 * nyulmc_ood_content_type_home_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_home_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hero|node|home_page|form';
  $field_group->group_name = 'group_hero';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_home_page_content';
  $field_group->data = array(
    'label' => 'Hero',
    'weight' => '2',
    'children' => array(
      0 => 'field_title_cards',
      1 => 'field_video',
      2 => 'field_home_hero_background_image',
      3 => 'field_home_hero_eyebrow',
      4 => 'field_home_hero_cta',
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
  $export['group_hero|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_community_footer|node|home_page|form';
  $field_group->group_name = 'group_home_community_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_home_page_content';
  $field_group->data = array(
    'label' => 'Community & Footer',
    'weight' => '6',
    'children' => array(
      0 => 'field_home_module_header_comm',
      1 => 'field_home_module_header_mag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-community-footer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_home_community_footer|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_featured_stories|node|home_page|form';
  $field_group->group_name = 'group_home_featured_stories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_home_page_content';
  $field_group->data = array(
    'label' => 'Featured Stories',
    'weight' => '5',
    'children' => array(
      0 => 'field_home_feat_st_module_header',
      1 => 'field_home_featured_stories',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-featured-stories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_home_featured_stories|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_get_involved|node|home_page|form';
  $field_group->group_name = 'group_home_get_involved';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_home_page_content';
  $field_group->data = array(
    'label' => 'Get Involved',
    'weight' => '4',
    'children' => array(
      0 => 'field_home_get_involved_items',
      1 => 'field_home_gi_module_header',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-get-involved field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_home_get_involved|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_page_content|node|home_page|form';
  $field_group->group_name = 'group_home_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'group_hero',
      1 => 'group_home_community_footer',
      2 => 'group_home_featured_stories',
      3 => 'group_home_get_involved',
      4 => 'group_home_page_featured_funds',
      5 => 'group_home_page_impacts',
      6 => 'group_home_status',
      7 => 'group_home_sticky_footer',
      8 => 'group_video',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-home-page-content field-group-tabs',
      ),
    ),
  );
  $export['group_home_page_content|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_page_featured_funds|node|home_page|form';
  $field_group->group_name = 'group_home_page_featured_funds';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_home_page_content';
  $field_group->data = array(
    'label' => 'Featured Funds',
    'weight' => '10',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-page-featured-funds field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_home_page_featured_funds|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_page_impacts|node|home_page|form';
  $field_group->group_name = 'group_home_page_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_home_page_content';
  $field_group->data = array(
    'label' => 'Impact',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-page-impacts field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_home_page_impacts|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_status|node|home_page|form';
  $field_group->group_name = 'group_home_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_home_page_content';
  $field_group->data = array(
    'label' => 'Stats',
    'weight' => '3',
    'children' => array(
      0 => 'field_home_stats_module_header',
      1 => 'field_home_stats_stats',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-status field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_home_status|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_sticky_footer|node|home_page|form';
  $field_group->group_name = 'group_home_sticky_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_home_page_content';
  $field_group->data = array(
    'label' => 'Sticky Footer',
    'weight' => '7',
    'children' => array(
      0 => 'field_home_hide_sticky_footer',
      1 => 'field_home_sticky_button',
      2 => 'field_home_sticky_date_of_reset',
      3 => 'field_home_sticky_reset_visitors',
      4 => 'field_home_sticky_sub_header',
      5 => 'field_home_sticky_head',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-sticky-footer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_home_sticky_footer|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|home_page|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_home_page_content';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '8',
    'children' => array(),
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
  $export['group_video|node|home_page|form'] = $field_group;

  return $export;
}
