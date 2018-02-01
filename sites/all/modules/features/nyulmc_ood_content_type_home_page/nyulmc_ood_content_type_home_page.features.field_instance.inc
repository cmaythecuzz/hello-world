<?php
/**
 * @file
 * nyulmc_ood_content_type_home_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nyulmc_ood_content_type_home_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_home_featured_stories-field_home_feat_st_description'
  $field_instances['field_collection_item-field_home_featured_stories-field_home_feat_st_description'] = array(
    'bundle' => 'field_home_featured_stories',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_feat_st_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'nyulmc_basic_html' => 0,
          'nyulmc_events_html' => 0,
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 0,
          'nyulmc_ood_links_and_paragraphs' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_featured_stories-field_home_feat_st_eyebrow'
  $field_instances['field_collection_item-field_home_featured_stories-field_home_feat_st_eyebrow'] = array(
    'bundle' => 'field_home_featured_stories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_feat_st_eyebrow',
    'label' => 'Eyebrow',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_featured_stories-field_home_feat_st_header'
  $field_instances['field_collection_item-field_home_featured_stories-field_home_feat_st_header'] = array(
    'bundle' => 'field_home_featured_stories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_feat_st_header',
    'label' => 'Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_featured_stories-field_home_feat_st_image'
  $field_instances['field_collection_item-field_home_featured_stories-field_home_feat_st_image'] = array(
    'bundle' => 'field_home_featured_stories',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_feat_st_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'description_display' => 'after',
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_featured_stories-field_home_feat_st_link'
  $field_instances['field_collection_item-field_home_featured_stories-field_home_feat_st_link'] = array(
    'bundle' => 'field_home_featured_stories',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the slug, the portion of the URL after "nyulangone.org".',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_feat_st_link',
    'label' => 'Link Title',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'description_display' => 'after',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_get_involved_items-field_home_get_inv_desc'
  $field_instances['field_collection_item-field_home_get_involved_items-field_home_get_inv_desc'] = array(
    'bundle' => 'field_home_get_involved_items',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_get_inv_desc',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'nyulmc_basic_html' => 0,
          'nyulmc_events_html' => 0,
          'nyulmc_links_only' => 0,
          'nyulmc_ood_links_and_basic' => 0,
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_get_involved_items-field_home_get_inv_feat_link_t'
  $field_instances['field_collection_item-field_home_get_involved_items-field_home_get_inv_feat_link_t'] = array(
    'bundle' => 'field_home_get_involved_items',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optional. Enter the slug, the portion of the URL after "nyulangone.org"',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_get_inv_feat_link_t',
    'label' => 'Featured Link Title',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'description_display' => 'after',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_get_involved_items-field_home_get_inv_header'
  $field_instances['field_collection_item-field_home_get_involved_items-field_home_get_inv_header'] = array(
    'bundle' => 'field_home_get_involved_items',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_get_inv_header',
    'label' => 'Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_get_involved_items-field_home_get_inv_image'
  $field_instances['field_collection_item-field_home_get_involved_items-field_home_get_inv_image'] = array(
    'bundle' => 'field_home_get_involved_items',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_get_inv_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'description_display' => 'after',
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_get_involved_items-field_home_get_inv_link'
  $field_instances['field_collection_item-field_home_get_involved_items-field_home_get_inv_link'] = array(
    'bundle' => 'field_home_get_involved_items',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the slug, the portion of the URL after "nyulangone.org".',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_get_inv_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_stats_stats-field_home_stats_description'
  $field_instances['field_collection_item-field_home_stats_stats-field_home_stats_description'] = array(
    'bundle' => 'field_home_stats_stats',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_stats_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'nyulmc_basic_html' => 0,
          'nyulmc_events_html' => 0,
          'nyulmc_links_only' => 0,
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_stats_stats-field_home_stats_eyebrow'
  $field_instances['field_collection_item-field_home_stats_stats-field_home_stats_eyebrow'] = array(
    'bundle' => 'field_home_stats_stats',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_stats_eyebrow',
    'label' => 'Eyebrow',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_home_stats_stats-field_home_stats_stat'
  $field_instances['field_collection_item-field_home_stats_stats-field_home_stats_stat'] = array(
    'bundle' => 'field_home_stats_stats',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_home_stats_stat',
    'label' => 'Stat',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_feat_st_module_header'
  $field_instances['node-home_page-field_home_feat_st_module_header'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_feat_st_module_header',
    'label' => 'Module Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_featured_stories'
  $field_instances['node-home_page-field_home_featured_stories'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_featured_stories',
    'label' => 'Featured Stories',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_get_involved_items'
  $field_instances['node-home_page-field_home_get_involved_items'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_get_involved_items',
    'label' => 'Items',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_gi_module_header'
  $field_instances['node-home_page-field_home_gi_module_header'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_gi_module_header',
    'label' => 'Module Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_hero_background_image'
  $field_instances['node-home_page-field_home_hero_background_image'] = array(
    'bundle' => 'home_page',
    'deleted' => 0,
    'description' => 'Set the background image for this module.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_hero_background_image',
    'label' => 'Background Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'description_display' => 'after',
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_hero_cta'
  $field_instances['node-home_page-field_home_hero_cta'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_hero_cta',
    'label' => 'CTA Title',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_hero_eyebrow'
  $field_instances['node-home_page-field_home_hero_eyebrow'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_hero_eyebrow',
    'label' => 'Eyebrow',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_hide_sticky_footer'
  $field_instances['node-home_page-field_home_hide_sticky_footer'] = array(
    'bundle' => 'home_page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Note that this module appears on Homepage, Why Give, and individual story pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_hide_sticky_footer',
    'label' => 'Hide Sticky Footer',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_module_header_comm'
  $field_instances['node-home_page-field_home_module_header_comm'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_module_header_comm',
    'label' => 'Module Header: Community',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_module_header_mag'
  $field_instances['node-home_page-field_home_module_header_mag'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_module_header_mag',
    'label' => 'Module Header: Make a Gift',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_stats_module_header'
  $field_instances['node-home_page-field_home_stats_module_header'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_stats_module_header',
    'label' => 'Module Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_stats_stats'
  $field_instances['node-home_page-field_home_stats_stats'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_stats_stats',
    'label' => 'Stats',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_sticky_button'
  $field_instances['node-home_page-field_home_sticky_button'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_sticky_button',
    'label' => 'Custom Sticky Footer Button CTA Title ',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'description_display' => 'after',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_sticky_date_of_reset'
  $field_instances['node-home_page-field_home_sticky_date_of_reset'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field is auto-populated based on the last date the "Reset First Time Visitors" checkbox was checked. Please do not edit it.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_sticky_date_of_reset',
    'label' => 'Date of Last First Time Visitor Reset ',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 'nyulmc_events_html',
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 'nyulmc_ood_links_and_paragraphs',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_sticky_head'
  $field_instances['node-home_page-field_home_sticky_head'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_sticky_head',
    'label' => 'Custom Sticky Footer Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'nyulmc_basic_html' => 0,
          'nyulmc_events_html' => 0,
          'nyulmc_links_only' => 0,
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_sticky_reset_visitors'
  $field_instances['node-home_page-field_home_sticky_reset_visitors'] = array(
    'bundle' => 'home_page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_sticky_reset_visitors',
    'label' => 'Reset First Time Visitors?',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-home_page-field_home_sticky_sub_header'
  $field_instances['node-home_page-field_home_sticky_sub_header'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'There is an 80 character limit for this field. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_sticky_sub_header',
    'label' => 'Custom Sticky Footer Sub-Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'nyulmc_basic_html' => 0,
          'nyulmc_events_html' => 0,
          'nyulmc_links_only' => 0,
          'nyulmc_ood_links_and_basic' => 'nyulmc_ood_links_and_basic',
          'nyulmc_ood_links_and_paragraphs' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-home_page-field_title_cards'
  $field_instances['node-home_page-field_title_cards'] = array(
    'bundle' => 'home_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Suggested maximum of 40 characters.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_title_cards',
    'label' => 'Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'nyulmc_basic_html' => 'nyulmc_basic_html',
          'nyulmc_events_html' => 0,
          'nyulmc_links_only' => 'nyulmc_links_only',
          'nyulmc_ood_links_and_basic' => 0,
          'nyulmc_ood_links_and_paragraphs' => 0,
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'nyulmc_basic_html' => array(
              'weight' => -8,
            ),
            'nyulmc_events_html' => array(
              'weight' => 0,
            ),
            'nyulmc_links_only' => array(
              'weight' => -7,
            ),
            'nyulmc_ood_links_and_basic' => array(
              'weight' => 0,
            ),
            'nyulmc_ood_links_and_paragraphs' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -5,
            ),
          ),
        ),
      ),
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-home_page-field_video'
  $field_instances['node-home_page-field_video'] = array(
    'bundle' => 'home_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'brightcove',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'brightcove_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'allow_upload' => FALSE,
      'brightcove_player' => 'single_video_player',
      'per_content_player' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'brightcove',
      'settings' => array(),
      'type' => 'brightcove_field_video_browser',
      'weight' => 45,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Background Image');
  t('CTA Title');
  t('Custom Sticky Footer Button CTA Title ');
  t('Custom Sticky Footer Header');
  t('Custom Sticky Footer Sub-Header');
  t('Date of Last First Time Visitor Reset ');
  t('Description');
  t('Enter the slug, the portion of the URL after "nyulangone.org".');
  t('Eyebrow');
  t('Featured Link Title');
  t('Featured Stories');
  t('Header');
  t('Hide Sticky Footer');
  t('Image');
  t('Items');
  t('Link');
  t('Link Title');
  t('Module Header');
  t('Module Header: Community');
  t('Module Header: Make a Gift');
  t('Note that this module appears on Homepage, Why Give, and individual story pages.');
  t('Optional. Enter the slug, the portion of the URL after "nyulangone.org"');
  t('Reset First Time Visitors?');
  t('Set the background image for this module.');
  t('Stat');
  t('Stats');
  t('Suggested maximum of 40 characters.');
  t('There is an 80 character limit for this field. ');
  t('This field is auto-populated based on the last date the "Reset First Time Visitors" checkbox was checked. Please do not edit it.');
  t('Video');

  return $field_instances;
}
