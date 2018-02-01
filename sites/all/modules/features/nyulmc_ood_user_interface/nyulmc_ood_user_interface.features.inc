<?php
/**
 * @file
 * nyulmc_ood_user_interface.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyulmc_ood_user_interface_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
