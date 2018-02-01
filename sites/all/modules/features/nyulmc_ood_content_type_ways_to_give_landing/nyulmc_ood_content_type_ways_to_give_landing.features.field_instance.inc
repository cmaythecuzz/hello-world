<?php
/**
 * @file
 * nyulmc_ood_content_type_ways_to_give_landing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nyulmc_ood_content_type_ways_to_give_landing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_wtg_body-field_wtg_bod_link_cta'
  $field_instances['field_collection_item-field_wtg_body-field_wtg_bod_link_cta'] = array(
    'bundle' => 'field_wtg_body',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wtg_bod_link_cta',
    'label' => 'Link CTA Title',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_wtg_body-field_wtg_body_address'
  $field_instances['field_collection_item-field_wtg_body-field_wtg_body_address'] = array(
    'bundle' => 'field_wtg_body',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wtg_body_address',
    'label' => 'Physical Address',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_wtg_body-field_wtg_body_body'
  $field_instances['field_collection_item-field_wtg_body-field_wtg_body_body'] = array(
    'bundle' => 'field_wtg_body',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wtg_body_body',
    'label' => 'Body',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_wtg_body-field_wtg_body_button_cta'
  $field_instances['field_collection_item-field_wtg_body-field_wtg_body_button_cta'] = array(
    'bundle' => 'field_wtg_body',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wtg_body_button_cta',
    'label' => 'Button CTA Title',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_wtg_body-field_wtg_body_contact_header'
  $field_instances['field_collection_item-field_wtg_body-field_wtg_body_contact_header'] = array(
    'bundle' => 'field_wtg_body',
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
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wtg_body_contact_header',
    'label' => 'Contact Info Header',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_wtg_body-field_wtg_body_email'
  $field_instances['field_collection_item-field_wtg_body-field_wtg_body_email'] = array(
    'bundle' => 'field_wtg_body',
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
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wtg_body_email',
    'label' => 'Email',
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

  // Exported field_instance: 'field_collection_item-field_wtg_body-field_wtg_body_header'
  $field_instances['field_collection_item-field_wtg_body-field_wtg_body_header'] = array(
    'bundle' => 'field_wtg_body',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wtg_body_header',
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

  // Exported field_instance: 'field_collection_item-field_wtg_body-field_wtg_body_image'
  $field_instances['field_collection_item-field_wtg_body-field_wtg_body_image'] = array(
    'bundle' => 'field_wtg_body',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wtg_body_image',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_wtg_body-field_wtg_body_phone'
  $field_instances['field_collection_item-field_wtg_body-field_wtg_body_phone'] = array(
    'bundle' => 'field_wtg_body',
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
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_wtg_body_phone',
    'label' => 'Phone',
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

  // Exported field_instance: 'node-ways_to_give_landing-field_wtg_body'
  $field_instances['node-ways_to_give_landing-field_wtg_body'] = array(
    'bundle' => 'ways_to_give_landing',
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
    'field_name' => 'field_wtg_body',
    'label' => 'Modules',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ways_to_give_landing-field_wtg_land_hero_subheader'
  $field_instances['node-ways_to_give_landing-field_wtg_land_hero_subheader'] = array(
    'bundle' => 'ways_to_give_landing',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_wtg_land_hero_subheader',
    'label' => 'Subheader',
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
      'text_processing' => 1,
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

  // Exported field_instance: 'node-ways_to_give_landing-wtg_land_hero_eyebrow'
  $field_instances['node-ways_to_give_landing-wtg_land_hero_eyebrow'] = array(
    'bundle' => 'ways_to_give_landing',
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
    'field_name' => 'wtg_land_hero_eyebrow',
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

  // Exported field_instance: 'node-ways_to_give_landing-wtg_land_hero_image'
  $field_instances['node-ways_to_give_landing-wtg_land_hero_image'] = array(
    'bundle' => 'ways_to_give_landing',
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
    'field_name' => 'wtg_land_hero_image',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-ways_to_give_landing-wtg_land_short_description'
  $field_instances['node-ways_to_give_landing-wtg_land_short_description'] = array(
    'bundle' => 'ways_to_give_landing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This copy might appear on pages other than this one. Suggested maximum of 350 characters.	',
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
    'field_name' => 'wtg_land_short_description',
    'label' => 'Short Description',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Button CTA Title');
  t('Contact Info Header');
  t('Email');
  t('Header');
  t('Image');
  t('Link CTA Title');
  t('Modules');
  t('Phone');
  t('Physical Address');
  t('Short Description');
  t('Subheader');
  t('This copy might appear on pages other than this one. Suggested maximum of 350 characters.	');

  return $field_instances;
}
