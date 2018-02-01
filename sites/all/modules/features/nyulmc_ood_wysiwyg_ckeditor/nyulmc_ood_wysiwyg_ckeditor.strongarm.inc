<?php
/**
 * @file
 * nyulmc_ood_wysiwyg_ckeditor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nyulmc_ood_wysiwyg_ckeditor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_per_field_core';
  $strongarm->value = 1;
  $export['better_formats_per_field_core'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_cache_db';
  $strongarm->value = array(
    'cache_time' => '600',
  );
  $export['brightcove_cache_db'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_cache_enabled';
  $strongarm->value = 1;
  $export['brightcove_cache_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_cache_file';
  $strongarm->value = array(
    'cache_time' => '600',
    'path' => 'sites/default/files/cache/',
    'ext' => 'cache',
  );
  $export['brightcove_cache_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_cache_memcached';
  $strongarm->value = array(
    'cache_time' => '600',
    'host' => 'localhost',
    'port' => '11211',
  );
  $export['brightcove_cache_memcached'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_cache_type';
  $strongarm->value = 'db';
  $export['brightcove_cache_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_check_for_unavailable';
  $strongarm->value = 1;
  $export['brightcove_check_for_unavailable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_create_multiple_renditions';
  $strongarm->value = '1';
  $export['brightcove_create_multiple_renditions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_custom_fields';
  $strongarm->value = 0;
  $export['brightcove_custom_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_custom_field_number';
  $strongarm->value = '10';
  $export['brightcove_custom_field_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_default_image';
  $strongarm->value = 'sites/all/modules/contrib/brightcove/images/default-image.png';
  $export['brightcove_default_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_encode_to';
  $strongarm->value = 'MP4';
  $export['brightcove_encode_to'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_link_field';
  $strongarm->value = '';
  $export['brightcove_link_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_mapi_path';
  $strongarm->value = 'sites/all/libraries/brightcove';
  $export['brightcove_mapi_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_player_full_api';
  $strongarm->value = 0;
  $export['brightcove_player_full_api'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_player_responsive';
  $strongarm->value = 0;
  $export['brightcove_player_responsive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_player_smart_api';
  $strongarm->value = 0;
  $export['brightcove_player_smart_api'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_preserve_source_rendition';
  $strongarm->value = 0;
  $export['brightcove_preserve_source_rendition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_read_api_key';
  $strongarm->value = 'O4Rr8ggGHOzZJyS1VaTzsjfiy6bS1nP6iRfkRAklq-oHZa-t9cwy7A..';
  $export['brightcove_read_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_status_display_unavailable';
  $strongarm->value = 'This video is unavailable for the moment.';
  $export['brightcove_status_display_unavailable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_user_field';
  $strongarm->value = '';
  $export['brightcove_user_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'brightcove_write_api_key';
  $strongarm->value = '';
  $export['brightcove_write_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'media_link' => array(
        'custom_settings' => TRUE,
      ),
      'media_preview' => array(
        'custom_settings' => TRUE,
      ),
      'media_small' => array(
        'custom_settings' => TRUE,
      ),
      'media_large' => array(
        'custom_settings' => TRUE,
      ),
      'media_original' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'file' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_link' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_large' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_original' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  return $export;
}
