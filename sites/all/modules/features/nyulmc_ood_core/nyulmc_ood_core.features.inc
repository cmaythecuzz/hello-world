<?php
/**
 * @file
 * nyulmc_ood_core.features.inc
 */

/**
 * Implements hook_default_brightcove_client().
 */
function nyulmc_ood_core_default_brightcove_client() {
  $items = array();
  $items['bf12e42e-515e-404a-acb8-8142eefe9c27'] = entity_import('brightcove_client', '{
    "label" : "MCIT Brightcove API Client",
    "account_id" : "3714047748001",
    "client_id" : "bf12e42e-515e-404a-acb8-8142eefe9c27",
    "client_secret" : "B02d-4PeRtDbJ68Wogphv61mPFdlvBLGkCA7qA5G_h76-n9S_G_gvNzOxPNRByAJb3iT2EqcbSOpFqjLOCaf6A",
    "uid" : "1",
    "created" : "1509479416",
    "data" : { "default_player" : "rJgSBFLnbM" },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function nyulmc_ood_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "brightcove" && $api == "brightcove") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
