<?php
/**
 * @file
 * nyulmc_ood_security.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function nyulmc_ood_security_user_default_roles() {
  $roles = array();

  // Exported role: DTI Admin.
  $roles['DTI Admin'] = array(
    'name' => 'DTI Admin',
    'weight' => 5,
  );

  // Exported role: NYULMC Editor.
  $roles['NYULMC Editor'] = array(
    'name' => 'NYULMC Editor',
    'weight' => 3,
  );

  // Exported role: OOD Admin.
  $roles['OOD Admin'] = array(
    'name' => 'OOD Admin',
    'weight' => 6,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: service consumer.
  $roles['service consumer'] = array(
    'name' => 'service consumer',
    'weight' => 4,
  );

  return $roles;
}
