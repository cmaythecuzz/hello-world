<?php

/**
 * Append data for fund nodes to our response,
 * if this was a fund content type.
 *
 * @param Object $response_data
 *   The response object we'll be returning for the request. Passed by reference.
 * @param Entity_Metadata_Wrapper $node_wrapper
 *   The wrapped node, which is our source for the response data we'll load
 *   into our return object.
 */
function _nyulmc_ood_content_type_home_page_retrieve_home_page($response_data, $node_wrapper) {

  // If this is not our type, get out of here.
  if($node_wrapper->type->value() !== 'home_page') {
    return;
  }

  // Helper class for processing output.
  $helper = new nyulmcServiceHelpers();

  // Hero
  $hero = new stdClass();
  $headers = array();
  $title_cards = $node_wrapper->field_title_cards;
  foreach ($title_cards as $card){
    // Each of the title cards is an EntityValueWrapper. We use the helper
    // method to process it.
    $headers[] = $helper::prepareBody($card);
  }
  $hero->eyebrow = $helper->prepareBody($node_wrapper->field_home_hero_eyebrow);
  $hero->headers = $headers;
  $hero->background_image = $helper->prepareImage($node_wrapper->field_home_hero_background_image->value());
  $hero->video = $helper->processBrightcoveField($node_wrapper, 'field_video');
  $hero->video->api_token = variable_get('brightcove_read_api_key');
  $hero->cta = $helper->processWrappedLink($node_wrapper->field_home_hero_cta);

  // Stats
  $stats = new stdClass();
  $stats->header = $helper->prepareBody($node_wrapper->field_home_stats_module_header);
  $stats_field_collection = array();
  foreach ($node_wrapper->field_home_stats_stats as $field_collection) {
    $stats_field_collection[] = array(
      'eyebrow' => $helper->prepareBody($field_collection->field_home_stats_eyebrow),
      'stat' => $helper->prepareBody($field_collection->field_home_stats_stat),
      'description' => $helper->prepareBody($field_collection->field_home_stats_description)
    );
  }
  $stats->stats = $stats_field_collection;

  // Get Involved
  $get_involved = new stdClass();
  $get_involved->header = $helper->prepareBody($node_wrapper->field_home_gi_module_header);
  $get_involved_items = array();
  foreach ($node_wrapper->field_home_get_involved_items as $get_involved_item) {
    $get_involved_items[] = array(
      'header' => $helper->prepareBody($get_involved_item->field_home_get_inv_header),
      'description' => $helper->prepareBody($get_involved_item->field_home_get_inv_desc),
      'link' => $helper->prepareBody($get_involved_item->field_home_get_inv_link),
      'image' => $helper->prepareImage($get_involved_item->field_home_get_inv_image->value()),
      'featured_link' => $helper->processWrappedLink($get_involved_item->field_home_get_inv_feat_link_t, array(), false)
    );
  }
  $get_involved->items = $get_involved_items;

  // Featured Stories
  $featured_stories = new stdClass();
  $featured_stories->header = $helper->prepareBody($node_wrapper->field_home_feat_st_module_header);
  $featured_stories_stories = array();
  foreach ($node_wrapper->field_home_featured_stories as $featured_story) {
    $featured_stories_stories[] = array(
      'eyebrow' => $helper->prepareBody($featured_story->field_home_feat_st_eyebrow),
      'header' => $helper->prepareBody($featured_story->field_home_feat_st_header),
      'description' => $helper->prepareBody($featured_story->field_home_feat_st_description),
      'image' => $helper->prepareImage($featured_story->field_home_feat_st_image->value()),
      'link' => $helper->processWrappedLink($featured_story->field_home_feat_st_link, array(), false)
    );
  }
  $featured_stories->featured_stories = $featured_stories_stories;

  // Community & Footer
  $community_footer = new stdClass();
  $community_footer->community_header = $helper->prepareBody($node_wrapper->field_home_module_header_comm);
  $community_footer->make_a_gift_header = $helper->prepareBody($node_wrapper->field_home_module_header_mag);

  $response_data->hero = $hero;
  $response_data->stats = $stats;
  $response_data->get_involved = $get_involved;
  $response_data->featured_stories = $featured_stories;
  $response_data->community_footer = $community_footer;

  // Sticky Footer
  $sticky_footer = new stdClass();
  $sticky_footer->hide_sticky_footer = $helper->prepareBooleanOutput($node_wrapper->field_home_hide_sticky_footer);
  $sticky_footer->date_last_reset = ($helper->prepareBody($node_wrapper->field_home_sticky_date_of_reset)) ?: null;
  $sticky_footer->header = $helper->prepareBody($node_wrapper->field_home_sticky_head);
  $sticky_footer->sub_header = $helper->prepareBody($node_wrapper->field_home_sticky_sub_header);
  $sticky_footer->button = $helper->processWrappedLink($node_wrapper->field_home_sticky_button);
  $response_data->sticky_footer = $sticky_footer;

  // Unset all fields that will not be exposed.
  unset($response_data->id);  
  unset($response_data->language);  
  unset($response_data->title);

  return $response_data;
}


function processFeaturedFund($featured_fund, $response_data, $helper, $index){
  if($featured_fund->getIdentifier() && $featured_fund->field_fund_name_reference->getIdentifier()){
    $fund_node = node_load($featured_fund->field_fund_name_reference->getIdentifier());
    $name = $fund_node->title;
    $slug = entity_metadata_wrapper('node', $fund_node)->field_slug->value();
    $response_data->featured_funds['funds'][] = array(
      'name' => $name,
      'image' => $helper->prepareImage($featured_fund->field_image_featured->value()),
      'slug' => $slug,
      'index' => $index
    );
  }
}