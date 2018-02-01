<?php
/**
 * @file
 * nyulmc_ood_content_type_single_file.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nyulmc_ood_content_type_single_file_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-single_file-field_sinlge_file'
  $field_instances['node-single_file-field_sinlge_file'] = array(
    'bundle' => 'single_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
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
    'field_name' => 'field_sinlge_file',
    'label' => 'File',
    'required' => 1,
    'settings' => array(
      'description_display' => 'after',
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '100 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('File');

  return $field_instances;
}
