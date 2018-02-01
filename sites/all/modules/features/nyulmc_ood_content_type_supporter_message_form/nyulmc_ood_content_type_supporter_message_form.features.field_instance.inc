<?php
/**
 * @file
 * nyulmc_ood_content_type_supporter_message_form.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nyulmc_ood_content_type_supporter_message_form_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_conf_page_hide_mos'
  $field_instances['node-supporter_message_form-field_sup_msg_conf_page_hide_mos'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_conf_page_hide_mos',
    'label' => 'Hide Meet Other Supporters Section',
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_conf_page_sub_head'
  $field_instances['node-supporter_message_form-field_sup_msg_conf_page_sub_head'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_conf_page_sub_head',
    'label' => 'Sub-Heading Text',
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
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_conf_page_title'
  $field_instances['node-supporter_message_form-field_sup_msg_conf_page_title'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_conf_page_title',
    'label' => 'Title Text',
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_field_eyebrow_text'
  $field_instances['node-supporter_message_form-field_sup_msg_field_eyebrow_text'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_field_eyebrow_text',
    'label' => 'Eyebrow Text',
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

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_field_header_text'
  $field_instances['node-supporter_message_form-field_sup_msg_field_header_text'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_field_header_text',
    'label' => 'Header Text',
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

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_field_helper_text'
  $field_instances['node-supporter_message_form-field_sup_msg_field_helper_text'] = array(
    'bundle' => 'supporter_message_form',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sup_msg_field_helper_text',
    'label' => 'Helper Text',
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

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_field_message'
  $field_instances['node-supporter_message_form-field_sup_msg_field_message'] = array(
    'bundle' => 'supporter_message_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sup_msg_field_message',
    'label' => 'Field Message',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_field_tooltip_text'
  $field_instances['node-supporter_message_form-field_sup_msg_field_tooltip_text'] = array(
    'bundle' => 'supporter_message_form',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sup_msg_field_tooltip_text',
    'label' => 'Tooltip Text',
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

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_form_slug'
  $field_instances['node-supporter_message_form-field_sup_msg_form_slug'] = array(
    'bundle' => 'supporter_message_form',
    'default_value' => NULL,
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
    'field_name' => 'field_sup_msg_form_slug',
    'label' => 'Slug',
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
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_header_text'
  $field_instances['node-supporter_message_form-field_sup_msg_header_text'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_header_text',
    'label' => 'Header Text',
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
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_large_hi'
  $field_instances['node-supporter_message_form-field_sup_msg_large_hi'] = array(
    'bundle' => 'supporter_message_form',
    'deleted' => 0,
    'description' => 'Image should be 1600 x 526 pixels',
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
    'field_name' => 'field_sup_msg_large_hi',
    'label' => 'Large Hero Image',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_medium_hero_image'
  $field_instances['node-supporter_message_form-field_sup_msg_medium_hero_image'] = array(
    'bundle' => 'supporter_message_form',
    'deleted' => 0,
    'description' => 'Image should be 1024 x 644 pixels',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_sup_msg_medium_hero_image',
    'label' => 'Medium Hero Image',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_sub_header_text'
  $field_instances['node-supporter_message_form-field_sup_msg_sub_header_text'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_sub_header_text',
    'label' => 'Sub-Header Text',
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
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_tellus_eyebrow'
  $field_instances['node-supporter_message_form-field_sup_msg_tellus_eyebrow'] = array(
    'bundle' => 'supporter_message_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_sup_msg_tellus_eyebrow',
    'label' => 'Eyebrow Text',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_tellus_eyebrow_img'
  $field_instances['node-supporter_message_form-field_sup_msg_tellus_eyebrow_img'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_tellus_eyebrow_img',
    'label' => 'Eyebrow Text',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_tellus_hay'
  $field_instances['node-supporter_message_form-field_sup_msg_tellus_hay'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_tellus_hay',
    'label' => 'Hide About You',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_tellus_heade'
  $field_instances['node-supporter_message_form-field_sup_msg_tellus_heade'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_tellus_heade',
    'label' => 'Header Text',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_tellus_helper'
  $field_instances['node-supporter_message_form-field_sup_msg_tellus_helper'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_tellus_helper',
    'label' => 'Helper Text',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_tellus_helper_img'
  $field_instances['node-supporter_message_form-field_sup_msg_tellus_helper_img'] = array(
    'bundle' => 'supporter_message_form',
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
    'field_name' => 'field_sup_msg_tellus_helper_img',
    'label' => 'Helper Text',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-supporter_message_form-field_sup_msg_tellus_tooltip_img'
  $field_instances['node-supporter_message_form-field_sup_msg_tellus_tooltip_img'] = array(
    'bundle' => 'supporter_message_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_sup_msg_tellus_tooltip_img',
    'label' => 'Tooltip Text',
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
      'weight' => 17,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Eyebrow Text');
  t('Field Message');
  t('Header Text');
  t('Helper Text');
  t('Hide About You');
  t('Hide Meet Other Supporters Section');
  t('Image should be 1024 x 644 pixels');
  t('Image should be 1600 x 526 pixels');
  t('Large Hero Image');
  t('Medium Hero Image');
  t('Slug');
  t('Sub-Header Text');
  t('Sub-Heading Text');
  t('Title Text');
  t('Tooltip Text');

  return $field_instances;
}
