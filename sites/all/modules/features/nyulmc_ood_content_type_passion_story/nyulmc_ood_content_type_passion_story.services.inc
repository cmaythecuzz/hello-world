<?php

/**
 * Append data for passion_story nodes to our response,
 * if this was a passion_story content type.
 *
 * @param Object $response_data
 *   The response object we'll be returning for the request. Passed by reference.
 * @param Entity_Metadata_Wrapper $node_wrapper
 *   The wrapped node, which is our source for the response data we'll load
 *   into our return object.
 * @return StdClass
 */
function _nyulmc_ood_content_type_passion_story_retrieve_passion_story($response_data, $node_wrapper) {

  // If this is not our type, get out of here.
  if($node_wrapper->type->value() !== 'passion_story') {
      return;
  }
  // Helper class for processing output.
  $helper = new nyulmcServiceHelpers();

  // Attach any SEO data.
  _nyulmc_ood_services_api_core_node_retrieve_seo($response_data, $node_wrapper);

  $response_data->image = $helper->prepareImage($node_wrapper->field_passion_story_image->value());
  $response_data->overview = $helper->prepareBody($node_wrapper->field_passion_story_overview);
  $response_data->short_description = $helper->prepareBody($node_wrapper->field_passion_story_s_d);
  $response_data->eyebrow = $helper->prepareBody($node_wrapper->field_passion_story_eyebrow);
  $response_data->body = $helper::prepareBody($node_wrapper->body);
  $response_data->slug = $node_wrapper->field_slug->value();

  module_load_include('inc', 'nyulmc_ood_content_type_fund', 'nyulmc_ood_content_type_fund.services');

  $donate_fund = $node_wrapper->field_passion_st_show_donate_mod;
  if($donate_fund->getIdentifier()){
    $donate_fund_node = new stdClass();
    $fund_node = $donate_fund;
    $name = $fund_node->title;
    $donate_fund_node->name = $name;
    $donate_fund_node->language = LANGUAGE_NONE;
    _nyulmc_ood_content_type_fund_retrieve_fund($donate_fund_node, $fund_node);
    unset($donate_fund_node->metadata);
    unset($donate_fund_node->quote);
    unset($donate_fund_node->supporters);
    unset($donate_fund_node->category);
    unset($donate_fund_node->keywords);
    unset($donate_fund_node->body_images);
    unset($donate_fund_node->show_detail_page);
    unset($donate_fund_node->allocation_code);
    unset($donate_fund_node->appeal_code);
    unset($donate_fund_node->body);
  }
  else{
    $donate_fund_node = null;
  }

  $response_data->related_fund = $donate_fund_node;

  $created_date = new DateTime();
  $created_date->setTimestamp($node_wrapper->created->value());
  $response_data->date = $created_date->format('Y-m-dP');

  // Unset all fields that will not be exposed.
  unset($response_data->type);

  return $response_data;

}

/**
 * Alter results of the Passion stories service call.
 *
 * @param array $results
 *   Array of results(funds) passed by reference.
 */
function _nyulmc_ood_content_type_passion_story_retrieve_list_of_passion_story(&$story){

  // If this is not for passion story content type get out of here.
  if($story->type != 'passion_story'){
    return;
  }

  //Load passion story node and populate it.
  $node = node_load($story->nid);
  // Wrap our node in an entity metadata wrapper, so we can autoload things,
  // and clean out that pesky language undefined syntax.
  $node_wrapper = entity_metadata_wrapper('node', $node);

  //Attach and parse custom fields.
  _nyulmc_ood_content_type_passion_story_retrieve_passion_story($story, $node_wrapper);

}