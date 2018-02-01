<?php
/**
 * @file
 *   Form function live here, related to the purpose of this module.
 */
/**
 * Form to manage administration of custom variables used for NYULMC, such
 * as default phone numbers, etc.
 *
 * Implements hook_form.
 */
function nyulmc_ood_admin_variables_form($form, &$form_state){
  // This is a prefix to all of our variables, to namespace them inside the
  // variables table.
  $prefix = NYULMC_OOD_ADMIN_VARIABLES_PREFIX;

  // Add a field set (grouping of fields) for learn about global content.
  $form['about_giving'] = array(
    '#title' => t('About Giving'),
    '#type' => 'fieldset',
  );
  
  // Add a field set (grouping of fields) for learn about global content.
  $form['default_nids'] = array(
    '#title' => t('Default Node ID\'s'),
    '#type' => 'fieldset',
  );

  // Get field definition from its abstraction.
  $about_giving = _nyulmc_ood_admin_variables_get_about_giving_fields_definition();
  $default_nids = _nyulmc_ood_admin_variables_get_why_give_default_nids();
	
  // Build out each default About Giving text fields.
  foreach($about_giving as $field){
    $form['about_giving'][$field['key']] = array(
      '#title' => t($field['title']),
      '#type' => $field['type'],
      '#description' => $field['description'],
      '#default_value' => variable_get($prefix . $field['key'], ''),
      '#required' => isset($field['required']) ? $field['required'] : FALSE,
    );
  }
	
  // Build out each default node ID's.
  foreach($default_nids as $field){
    $form['default_nids'][$field['key']] = array(
      '#title' => t($field['title']),
      '#type' => $field['type'],
      '#description' => $field['description'],
      '#default_value' => variable_get($prefix . $field['key'], ''),
      '#required' => isset($field['required']) ? $field['required'] : FALSE,
    );
  }
	
  // Submit button.
  $form['submit'] = array(
    '#value' => t('submit'),
    '#type' => 'submit',
  );

  return $form;
}

/**
 * Implements hook_form_submit()
 *
 * @param array $form
 *   The structure of the form, including field definitions, default values,
 *   etc. This should not be referenced to determine any values.
 * @param array $form_state
 *   An array containing the state of the form. You should always look here for
 *   passed field values. Look in: form_state['values'] for the data, and not
 *   form_state['input'], which is uncleaned input.
 */
function nyulmc_ood_admin_variables_form_submit($form, &$form_state){
  // This is a prefix to all of our variables, to namespace them inside the
  // variables table.
  $prefix = NYULMC_OOD_ADMIN_VARIABLES_PREFIX;

  // If we recieved set values, process them.
  if(isset($form_state['values'])) {
    foreach($form_state['values'] AS $key => $value) {
      variable_set($prefix . $key, $value);
    }
  }
}

/**
 * Build an array for each of the About Giving text default variables, with field info.
 * This is an abstraction, so we can assemble the form with more general logic.
 */
function _nyulmc_ood_admin_variables_get_about_giving_fields_definition(){
  return array(
    array(
      // The key for the variable. This is as it appears in the database,
      // minus the prefix from above.
      'key' => 'about_giving_title',

      // The title that will be displayed.
      'title' => 'Section Title',

      // The description that will be added to the field.
      'description' => 'Title that will appear in the Learn About block at the bottom of the Fund Pages.',

      // The form element type that will be used for the field.
      'type' => 'textfield',

      // Does the user need to fill out this field before the form
      // can be submitted?
      'required' => TRUE,
    ),
    array(
      'key' => 'about_giving_text',
      'title' => 'Section Text',
      'description' => 'Summary text that will appear in the Learn About block at the bottom of the Fund Pages.',
      'type' => 'textarea',
    ),
  );
}

/**
 * Build an array for each of the Default NID variables, with field info.
 * This is an abstraction, so we can assemble the form with more general logic.
 */
function _nyulmc_ood_admin_variables_get_why_give_default_nids(){
  return array(
    array(
      'key' => 'default_why_give_nid',
      'title' => 'Default Why Give page node ID',
      'description' => 'Node ID of the Why Give node that will be accessible via the default JSON endpoint.',
      'type' => 'textfield',
      'required' => FALSE
    ),
    array(
      'key' => 'default_home_page_nid',
      'title' => 'Default Home Page node ID',
      'description' => 'Node ID of the Home Page node that will be accessible via the default JSON endpoint.',
      'type' => 'textfield',
      'required' => FALSE
    )
  );
}