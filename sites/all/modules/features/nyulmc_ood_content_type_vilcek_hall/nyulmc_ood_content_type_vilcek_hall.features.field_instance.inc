<?php
/**
 * @file
 * nyulmc_ood_content_type_vilcek_hall.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nyulmc_ood_content_type_vilcek_hall_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-vilcek_hall-field_vlck_about_body'
  $field_instances['node-vilcek_hall-field_vlck_about_body'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_about_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'nyulmc_basic_html' => 'nyulmc_basic_html',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_alter_desc1'
  $field_instances['node-vilcek_hall-field_vlck_alter_desc1'] = array(
    'bundle' => 'vilcek_hall',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Create a fundraising page.',
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
    'field_name' => 'field_vlck_alter_desc1',
    'label' => 'Description',
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

  // Exported field_instance: 'node-vilcek_hall-field_vlck_alter_desc2'
  $field_instances['node-vilcek_hall-field_vlck_alter_desc2'] = array(
    'bundle' => 'vilcek_hall',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Make a gift of any amount.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_vlck_alter_desc2',
    'label' => 'Description',
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

  // Exported field_instance: 'node-vilcek_hall-field_vlck_contact_email'
  $field_instances['node-vilcek_hall-field_vlck_contact_email'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_contact_email',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_contact_phone'
  $field_instances['node-vilcek_hall-field_vlck_contact_phone'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_contact_phone',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_footer_header'
  $field_instances['node-vilcek_hall-field_vlck_footer_header'] = array(
    'bundle' => 'vilcek_hall',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_vlck_footer_header',
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
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_gallery_fund_id'
  $field_instances['node-vilcek_hall-field_vlck_gallery_fund_id'] = array(
    'bundle' => 'vilcek_hall',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Only supporter stories related to this fund will be shown.If this field is blank, the module will be hidden.',
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
    'field_name' => 'field_vlck_gallery_fund_id',
    'label' => 'Fund ID',
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_gallery_header'
  $field_instances['node-vilcek_hall-field_vlck_gallery_header'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_gallery_header',
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_giving_proc_desc1'
  $field_instances['node-vilcek_hall-field_vlck_giving_proc_desc1'] = array(
    'bundle' => 'vilcek_hall',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Step 1: Make a Pledge or give online',
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
    'field_name' => 'field_vlck_giving_proc_desc1',
    'label' => 'Description',
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

  // Exported field_instance: 'node-vilcek_hall-field_vlck_giving_proc_desc2'
  $field_instances['node-vilcek_hall-field_vlck_giving_proc_desc2'] = array(
    'bundle' => 'vilcek_hall',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Step 2: We\'ll send you a form to mail back. ',
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
    'field_name' => 'field_vlck_giving_proc_desc2',
    'label' => 'Description',
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

  // Exported field_instance: 'node-vilcek_hall-field_vlck_giving_proc_desc3'
  $field_instances['node-vilcek_hall-field_vlck_giving_proc_desc3'] = array(
    'bundle' => 'vilcek_hall',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Step 3: Your name will be featured on a plaque in Vilcek Hall.',
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
    'field_name' => 'field_vlck_giving_proc_desc3',
    'label' => 'Description',
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

  // Exported field_instance: 'node-vilcek_hall-field_vlck_hero_dollar_amount'
  $field_instances['node-vilcek_hall-field_vlck_hero_dollar_amount'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_hero_dollar_amount',
    'label' => 'Dollar Amount Raised so Far',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_hero_eyebrow'
  $field_instances['node-vilcek_hall-field_vlck_hero_eyebrow'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_hero_eyebrow',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_hero_header'
  $field_instances['node-vilcek_hall-field_vlck_hero_header'] = array(
    'bundle' => 'vilcek_hall',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vlck_hero_header',
    'label' => 'Header',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_hero_image'
  $field_instances['node-vilcek_hall-field_vlck_hero_image'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_hero_image',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_hero_percent'
  $field_instances['node-vilcek_hall-field_vlck_hero_percent'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_hero_percent',
    'label' => 'Percent progress (for 50% enter 50)',
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

  // Exported field_instance: 'node-vilcek_hall-field_vlck_hero_sentence'
  $field_instances['node-vilcek_hall-field_vlck_hero_sentence'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_hero_sentence',
    'label' => 'Sentence containing number of rooms ("out of 175 Rooms")',
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

  // Exported field_instance: 'node-vilcek_hall-field_vlck_hero_slug'
  $field_instances['node-vilcek_hall-field_vlck_hero_slug'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_hero_slug',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_wall_background_image'
  $field_instances['node-vilcek_hall-field_vlck_wall_background_image'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_wall_background_image',
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
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_wall_header'
  $field_instances['node-vilcek_hall-field_vlck_wall_header'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_wall_header',
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_wall_name'
  $field_instances['node-vilcek_hall-field_vlck_wall_name'] = array(
    'bundle' => 'vilcek_hall',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Names in virtual plaque',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_vlck_wall_name',
    'label' => 'Name',
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

  // Exported field_instance: 'node-vilcek_hall-field_vlck_wall_show_supp'
  $field_instances['node-vilcek_hall-field_vlck_wall_show_supp'] = array(
    'bundle' => 'vilcek_hall',
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
    'field_name' => 'field_vlck_wall_show_supp',
    'label' => 'Show list of supporters',
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
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-vilcek_hall-field_vlck_wall_sub_header'
  $field_instances['node-vilcek_hall-field_vlck_wall_sub_header'] = array(
    'bundle' => 'vilcek_hall',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vilcek Hall Honorary Rooms',
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
    'field_name' => 'field_vlck_wall_sub_header',
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
      'weight' => 25,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Background Image');
  t('Body');
  t('Create a fundraising page.');
  t('Description');
  t('Dollar Amount Raised so Far');
  t('Email');
  t('Eyebrow');
  t('Fund ID');
  t('Header');
  t('Image');
  t('Make a gift of any amount.');
  t('Name');
  t('Names in virtual plaque');
  t('Only supporter stories related to this fund will be shown.If this field is blank, the module will be hidden.');
  t('Percent progress (for 50% enter 50)');
  t('Phone');
  t('Sentence containing number of rooms ("out of 175 Rooms")');
  t('Set the background image for this module.');
  t('Show list of supporters');
  t('Slug');
  t('Step 1: Make a Pledge or give online');
  t('Step 2: We\'ll send you a form to mail back. ');
  t('Step 3: Your name will be featured on a plaque in Vilcek Hall.');
  t('Sub-Header');
  t('Vilcek Hall Honorary Rooms');

  return $field_instances;
}
