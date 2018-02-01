<?php
/**
 * @file
 * nyulmc_ood_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nyulmc_ood_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'oXuJBJo6kUPUXAtW7hakO81wqMxlonCGOZX_wEwAgUw';
  $export['cron_key'] = $strongarm;

  return $export;
}
