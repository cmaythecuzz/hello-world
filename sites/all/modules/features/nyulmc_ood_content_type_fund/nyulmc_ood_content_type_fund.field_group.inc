<?php
/**
 * @file
 * nyulmc_ood_content_type_fund.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyulmc_ood_content_type_fund_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|fund|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'group_fund_featured_fund',
      1 => 'group_fund_quote',
      2 => 'group_fund_supporters',
      3 => 'group_impact_dialogue',
      4 => 'group_main',
      5 => 'group_tags',
      6 => 'group_fund_campaign',
      7 => 'group_fund_hero',
      8 => 'group_fund_body_stats',
      9 => 'group_fund_sidebar',
      10 => 'group_fund_owtg',
      11 => 'group_fund_news_annoucements',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-content field-group-tabs',
      ),
    ),
  );
  $export['group_content|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fund_body_stats|node|fund|form';
  $field_group->group_name = 'group_fund_body_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Body/Stats',
    'weight' => '54',
    'children' => array(
      0 => 'body',
      1 => 'field_fund_body_2',
      2 => 'field_fund_stats',
      3 => 'field_fund_stats_module_header',
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
  $export['group_fund_body_stats|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fund_campaign|node|fund|form';
  $field_group->group_name = 'group_fund_campaign';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '59',
    'children' => array(
      0 => 'field_fund_camp_giv_gall_hea',
      1 => 'field_fund_camp_hide_ggallery',
      2 => 'field_fund_gallery_id',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Gallery',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fund-campaign field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_fund_campaign|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fund_featured_fund|node|fund|form';
  $field_group->group_name = 'group_fund_featured_fund';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Featured Fund',
    'weight' => '53',
    'children' => array(
      0 => 'field_fund_featured_fund_pos',
      1 => 'field_fund_feat_preview_image',
      2 => 'field_fund_feat_title_desc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fund-featured-fund field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fund_featured_fund|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fund_hero|node|fund|form';
  $field_group->group_name = 'group_fund_hero';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Hero',
    'weight' => '3',
    'children' => array(
      0 => 'field_overview',
      1 => 'field_fund_hero_image',
      2 => 'field_fund_campaign_page_header',
      3 => 'field_fund_button_cta_title',
      4 => 'field_fund_hero_link_cta_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fund-hero field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fund_hero|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fund_news_annoucements|node|fund|form';
  $field_group->group_name = 'group_fund_news_annoucements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Sidebar News and Announcements ',
    'weight' => '52',
    'children' => array(
      0 => 'field_fund_news_module_header',
      1 => 'field_fund_news_and_announce',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fund-news-annoucements field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fund_news_annoucements|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fund_owtg|node|fund|form';
  $field_group->group_name = 'group_fund_owtg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Other Ways to Give',
    'weight' => '58',
    'children' => array(
      0 => 'field_fund_owtg_module_header',
      1 => 'field_field_fund_owtg',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fund-owtg field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fund_owtg|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fund_quote|node|fund|form';
  $field_group->group_name = 'group_fund_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Quote',
    'weight' => '56',
    'children' => array(
      0 => 'field_fund_quote_doctor_npi',
      1 => 'field_fund_quote_image',
      2 => 'field_fund_quote_name',
      3 => 'field_fund_quote_title',
      4 => 'field_fund_quote_quote',
      5 => 'field_fund_body_3',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fund-quote field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fund_quote|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fund_sidebar|node|fund|form';
  $field_group->group_name = 'group_fund_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '51',
    'children' => array(
      0 => 'field_fund_sidebar_link',
      1 => 'field_fund_campaign_header',
      2 => 'field_fund_campaign_description',
      3 => 'field_fund_campaign_button_title',
      4 => 'field_fund_hero_email',
      5 => 'field_fund_hero_phone',
      6 => 'field_fund_hide_donate_module',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fund-sidebar field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fund_sidebar|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fund_supporters|node|fund|form';
  $field_group->group_name = 'group_fund_supporters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Fund Supporters',
    'weight' => '55',
    'children' => array(
      0 => 'field_fund_field_supporters',
      1 => 'field_fund_supporters_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Fund Supporters',
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fund-supporters field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fund_supporters|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_impact_dialogue|node|fund|form';
  $field_group->group_name = 'group_impact_dialogue';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Impact Dialogue',
    'weight' => '57',
    'children' => array(
      0 => 'field_find_impact_why_we_give',
      1 => 'field_fund_impact_see_the_impact',
      2 => 'field_fund_id_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-impact-dialogue field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_impact_dialogue|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|fund|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '1',
    'children' => array(
      0 => 'field_slug',
      1 => 'field_fund_description',
      2 => 'field_fund_luminate_id',
      3 => 'field_fund_add_the',
      4 => 'field_allocation_code',
      5 => 'field_appeal_code',
      6 => 'field_fund_syr_form',
      7 => 'title',
      8 => 'group_separator',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_main|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_separator|node|fund|form';
  $field_group->group_name = 'group_separator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => '',
    'weight' => '7',
    'children' => array(
      0 => 'field_show_detail_page',
      1 => 'field_fund_hide_from_exp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_separator|node|fund|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|fund|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fund';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Search Tags',
    'weight' => '2',
    'children' => array(
      0 => 'field_keywords',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Search Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tags field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_tags|node|fund|form'] = $field_group;

  return $export;
}
