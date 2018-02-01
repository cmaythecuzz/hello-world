<?php
// Resource file for nyulmc_ood_content_type_p2p_landing.

/**
 * Retrieves a node
 *
 * @param $node
 * @param $helper nyulmcServiceHelpers
 *
 * @return stdClass
 */
function _nyulmc_ood_content_type_p2p_landing_retrieve_node($node, $helper) {
  if ($node->type !== 'fundraise_landing') {
    return null;
  }

  $language = entity_language('node', $node);
  $node_wrapper = entity_metadata_wrapper('node', $node);
  $response = new stdClass();

  // We set the language in the response so that it can be used by _nyulmc_ood_services_api_core_node_retrieve_seo
  $response->language = $language;
  _nyulmc_ood_services_api_core_node_retrieve_seo($response, $node_wrapper);

  $campaign_slugs = array();
  foreach ($node_wrapper->field_p2p_landing_feat_campaigns as $featured_campaign) {
    $campaign_slugs[] = $helper->prepareBody($featured_campaign);
  }
  $response->campaign_slugs = $campaign_slugs;
  $response->header = $helper->prepareBody($node_wrapper->field_p2p_landing_module_header);

  unset($response->language);
  return $response;
}

/**
 * Retrieves the index action for p2p landing page. This is a singleton content type.
 */
function _nyulmc_ood_content_type_p2p_landing_retrieve_node_index() {
  if (($nid = nyulmc_ood_core_node_type_exists('fundraise_landing')) && ($node = node_load($nid))) {

    $node_wrapper = entity_metadata_wrapper('node', $node);
    // Helper class for processing output.
    $helper = new nyulmcServiceHelpers();
    return _nyulmc_ood_content_type_p2p_landing_retrieve_node($node, $helper);
  } else {
    return services_error(t('Node could not be found'), 404);
  }
}