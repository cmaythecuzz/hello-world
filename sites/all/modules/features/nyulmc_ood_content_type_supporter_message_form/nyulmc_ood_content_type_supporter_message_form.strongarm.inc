<?php
/**
 * @file
 * nyulmc_ood_content_type_supporter_message_form.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nyulmc_ood_content_type_supporter_message_form_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__supporter_message_form';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '2',
        ),
        'metatags' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__supporter_message_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_supporter_message_form';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_supporter_message_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_supporter_message_form';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_supporter_message_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_supporter_message_form';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_supporter_message_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_supporter_message_form';
  $strongarm->value = '1';
  $export['node_preview_supporter_message_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_supporter_message_form';
  $strongarm->value = 1;
  $export['node_submitted_supporter_message_form'] = $strongarm;

  return $export;
}
