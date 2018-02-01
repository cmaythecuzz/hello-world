<?php
/**
 * @file
 * nyulmc_ood_content_type_funds_list.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nyulmc_ood_content_type_funds_list_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-funds_list-field_feat_funds_search_terms'
  $field_instances['node-funds_list-field_feat_funds_search_terms'] = array(
    'bundle' => 'funds_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Manage which suggested search terms show below the search bar on the Funds page. Search terms must be separated by the | character.',
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
    'field_name' => 'field_feat_funds_search_terms',
    'label' => 'Suggested Search Terms',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-funds_list-field_featured_funds_module_titl'
  $field_instances['node-funds_list-field_featured_funds_module_titl'] = array(
    'bundle' => 'funds_list',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_funds_module_titl',
    'label' => 'Featured Funds Eyebrow Title in Search',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-funds_list-field_funds_list_feat_funds_head'
  $field_instances['node-funds_list-field_funds_list_feat_funds_head'] = array(
    'bundle' => 'funds_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_funds_list_feat_funds_head',
    'label' => 'Featured Funds Module Header',
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

  // Exported field_instance: 'node-funds_list-field_funds_list_hero_btn_title'
  $field_instances['node-funds_list-field_funds_list_hero_btn_title'] = array(
    'bundle' => 'funds_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_funds_list_hero_btn_title',
    'label' => 'Button Title',
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
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-funds_list-field_funds_list_hero_header'
  $field_instances['node-funds_list-field_funds_list_hero_header'] = array(
    'bundle' => 'funds_list',
    'default_value' => NULL,
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_funds_list_hero_header',
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
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-funds_list-field_funds_list_hero_image'
  $field_instances['node-funds_list-field_funds_list_hero_image'] = array(
    'bundle' => 'funds_list',
    'deleted' => 0,
    'description' => 'Full-width image to be used in behind the header text.<br />
Dimensions (ideal): 1920 x 740 pixels.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_funds_list_hero_image',
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
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-funds_list-field_funds_list_hero_sub_header'
  $field_instances['node-funds_list-field_funds_list_hero_sub_header'] = array(
    'bundle' => 'funds_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_funds_list_hero_sub_header',
    'label' => 'Sub-Header',
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
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-funds_list-field_funds_list_search_header'
  $field_instances['node-funds_list-field_funds_list_search_header'] = array(
    'bundle' => 'funds_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_funds_list_search_header',
    'label' => 'Search Module Header',
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
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Button Title');
  t('Featured Funds Eyebrow Title in Search');
  t('Featured Funds Module Header');
  t('Full-width image to be used in behind the header text.<br />
Dimensions (ideal): 1920 x 740 pixels.');
  t('Header');
  t('Image');
  t('Manage which suggested search terms show below the search bar on the Funds page. Search terms must be separated by the | character.');
  t('Search Module Header');
  t('Sub-Header');
  t('Suggested Search Terms');

  return $field_instances;
}
