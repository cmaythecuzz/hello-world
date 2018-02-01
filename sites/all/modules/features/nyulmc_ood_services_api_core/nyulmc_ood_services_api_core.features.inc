<?php
/**
 * @file
 * nyulmc_ood_services_api_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nyulmc_ood_services_api_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
