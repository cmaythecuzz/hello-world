<?php

function nyulmc_ood_services_api_core_drush_command() {
  $items['nyulmc-ood-create-user'] = array(
    'description' => 'Wrapper for adding a user that returns success whether or not the user was created.',
    'aliases' => array('nyucu'),
    'arguments' => array(
      'username' => 'The username',
      'password' => 'The password'
    ),
    'options' => array(
      'role' => 'The role that the new user will have',
      'conserve-user' => 'Whether the user should be conserved and edited if it already exists.'
    )
  );

  return $items;

}

function drush_nyulmc_ood_services_api_core_nyulmc_ood_create_user($username = null, $password = null){

  if(!$username || !$password){
    return drush_set_error(dt("Must provide username and password."));
  }

  // Check if the user already exists on drupal. If it does, stop execution and
  // exit.
  $user = user_load_by_name($username);
  $new_user = array();
  $account = new stdClass();
  if($user) {
    // user already exists
    drupal_set_message(dt("The user already exists."), 'warning');
    $conserve_user = drush_get_option('conserve-user', false);
    if($conserve_user){
      // conserve the user
      drupal_set_message(dt("Editing the existing user."), 'warning');
      $account->uid = $user->uid;
    }
    else{
      drupal_set_message(dt("Will not edit existing user."), 'error');
      return;
    }
  }

  $new_user = array_merge(array(
    'name' => $username,
    'pass' => $password,
    'status' => 1,
  ), $new_user);

  // Check that the role exists. If it doesn't, stop execution
  $role = drush_get_option('role', false);
  if($role){
    if(!is_string($role)){
      // role not valid
      drupal_set_message(dt("The role name is not valid."), 'error');
      return;
    }
    $role_loaded = user_role_load_by_name($role);
    if(!$role_loaded){
      // Role does not exist
      drupal_set_message(dt("The role does not exist."), 'error');
      return;
    }
    $new_user['roles'] = array(
      DRUPAL_AUTHENTICATED_RID => 'authenticated user',
      $role_loaded->rid => $role_loaded->name
    );
  }


  if(user_save($account, $new_user)){
    drupal_set_message('User created/edited');
    return;
  }
  else{
    return drush_set_error(dt("User could not be created."));
  }

}