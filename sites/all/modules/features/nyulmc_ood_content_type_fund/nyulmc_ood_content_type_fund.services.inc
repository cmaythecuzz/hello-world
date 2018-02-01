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
 * @return Object | null
 */
function _nyulmc_ood_content_type_fund_retrieve_fund($response_data, $node_wrapper) {

  // If this is not our type, get out of here.
  if($node_wrapper->type->value() !== 'fund') {
    return;
  }

  // Helper class for processing output.
  $helper = new nyulmcServiceHelpers();

  // Attach any SEO data.
  _nyulmc_ood_services_api_core_node_retrieve_seo($response_data, $node_wrapper);

  // Main Tab
  $response_data->name = $node_wrapper->title->value();
  $response_data->add_the = $helper::prepareBooleanOutput($node_wrapper->field_fund_add_the);
  $response_data->luminate_id = $helper->prepareBody($node_wrapper->field_fund_luminate_id);
  $response_data->appeal_code = $helper->prepareBody($node_wrapper->field_appeal_code);
  $response_data->allocation_code = $helper->prepareBody($node_wrapper->field_allocation_code);
  $response_data->short_description = $helper::prepareBody($node_wrapper->field_fund_description);
  $response_data->show_detail_page = $helper::prepareBooleanOutput($node_wrapper->field_show_detail_page);
  $response_data->hide_from_explore = $helper::prepareBooleanOutput($node_wrapper->field_fund_hide_from_exp);
  $response_data->syr_form = $helper->prepareEntityReference($node_wrapper, 'field_fund_syr_form');
  $response_data->slug = $node_wrapper->field_slug->value();


  // Search tags. Attaching Search Keywords.
  $response_data->keywords = array();
  $helper->processTags($node_wrapper->field_keywords, $response_data->keywords);

  // Hero
  $response_data->header = $helper->prepareBody($node_wrapper->field_fund_campaign_page_header);
  $response_data->overview = $helper::prepareBody($node_wrapper->field_overview);
  $response_data->hero_image = $helper::prepareImage($node_wrapper->field_fund_hero_image->value());
  $response_data->hero_button = $helper->processWrappedLink($node_wrapper->field_fund_button_cta_title);

  // Sidebar
  $response_data->hide_donation_sidebar = $helper->prepareBooleanOutput($node_wrapper->field_fund_hide_donate_module);
  $response_data->contact_email = $helper->prepareBody($node_wrapper->field_fund_hero_email);
  $response_data->contact_phone = $helper->prepareBody($node_wrapper->field_fund_hero_phone);
  $response_data->sidebar_cta_header = $helper->prepareBody($node_wrapper->field_fund_campaign_header);
  $response_data->sidebar_cta_description = $helper->prepareBody($node_wrapper->field_fund_campaign_description);
  $response_data->sidebar_button = $helper->processWrappedLink($node_wrapper->field_fund_campaign_button_title);
  $response_data->sidebar_button_more_info = $helper->processWrappedLink($node_wrapper->field_fund_sidebar_link);

  // Sidebar News and Announcements
  $news_announcements = new stdClass();
  $news_announcements->header = $helper->prepareBody($node_wrapper->field_fund_news_module_header);
  $announcements_list = array();
  foreach ($node_wrapper->field_fund_news_and_announce as $announcement) {
    $header = $helper->prepareBody($announcement->field_fund_news_header);
    if (!empty($header)) {
      $announcement_item = new stdClass();
      $announcement_item->image = $helper->prepareImage($announcement->field_fund_news_image_upload->value());
      $announcement_item->header = $header;
      $announcement_item->description  = $helper->prepareBody($announcement->field_fund_news_description);
      $announcement_item->link = $helper->processWrappedLink($announcement->field_fund_news_link);
      $announcements_list[] = $announcement_item;
    }
  }
  $news_announcements->announcements = $announcements_list;
  $response_data->news_announcements = $news_announcements;

  // Featured Fund
  $featured_fund = new stdClass();
  $featured_fund->position = $node_wrapper->field_fund_featured_fund_pos->value();
  $featured_fund->image = $helper->prepareImage($node_wrapper->field_fund_feat_preview_image->value());
  $featured_fund->title_description = $helper->prepareBody($node_wrapper->field_fund_feat_title_desc);
  $response_data->featured_fund = $featured_fund;

  // Body/Stats
  $response_data->body = $helper::prepareBody($node_wrapper->body);
  $response_data->body_images = $helper::prepareWysiwygImages($response_data->body);
  $response_data->stats_header = $helper->prepareBody($node_wrapper->field_fund_stats_module_header);
  $stats = array();
  foreach ($node_wrapper->field_fund_stats as $stat) {
    $statObj = new stdClass();
    $statObj->stat = $helper->prepareBody($stat->field_past_stats_text_line_1);
    $statObj->description = $helper->prepareBody($stat->field_fund_stats_description);
    $stats[] = $statObj;
  }
  $response_data->stats = $stats;
  $response_data->stats_body = $helper->prepareBody($node_wrapper->field_fund_body_2);

  // Fund supporters
  $response_data->supporters = array();
  $response_data->supporters_headline = $helper->prepareBody($node_wrapper->field_fund_supporters_title);
  foreach($node_wrapper->field_fund_field_supporters as $supporter){
    $response_data->supporters[] = array(
      'doctor_npi' => $helper->prepareBody($supporter->field_supporter_doctor_npi),
      'name' => $helper->prepareBody($supporter->field_supporter_name),
      'specialty' => $helper->prepareBody($supporter->field_supporter_specialty_title),
      'image' => $helper->prepareImage($supporter->field_supporter_image->value())
    );
  }

  // Quote
  $response_data->quote = array(
    'quote' => $helper->prepareBody($node_wrapper->field_fund_quote_quote),
    'image' => $helper->prepareImage($node_wrapper->field_fund_quote_image->value()),
    'doctor_npi' => $helper->prepareBody($node_wrapper->field_fund_quote_doctor_npi),
    'name' => $helper->prepareBody($node_wrapper->field_fund_quote_name),
    'title' => $helper->prepareBody($node_wrapper->field_fund_quote_title),
    'body' => $helper->prepareBody($node_wrapper->field_fund_body_3)
  );

  // Impact dialogue
  $fund_impacts = new stdClass();
  $fund_impacts->why_we_give = _nyulmc_ood_content_type_fund_retrieve_impact($node_wrapper->field_find_impact_why_we_give, $helper);
  $fund_impacts->see_impact= _nyulmc_ood_content_type_fund_retrieve_impact($node_wrapper->field_fund_impact_see_the_impact, $helper);
  $fund_impacts->body = $helper->prepareBody($node_wrapper->field_fund_id_body);
  $response_data->impact_dialogue = $fund_impacts;
  $response_data->sidebar_link = $helper::processWrappedLink($node_wrapper->field_fund_sidebar_link);

  // Other ways to give
  $owtg = new stdClass();
  $owtg->header = $helper->prepareBody($node_wrapper->field_fund_owtg_module_header);
  $owtg->ways_to_give = [];
  foreach ($node_wrapper->field_field_fund_owtg as $owtg_item) {
    $way_to_give = new stdClass();
    $way_to_give->eyebrow = $helper->prepareBody($owtg_item->field_fund_owyg_eyebrow);
    $way_to_give->header = $helper->prepareBody($owtg_item->field_fund_owtg_header);
    $way_to_give->description = $helper->prepareBody($owtg_item->field_fund_owtg_description);
    $way_to_give->image = $helper->prepareImage($owtg_item->field_fund_owtg_image->value());
    $way_to_give->link = $helper->processWrappedLink($owtg_item->field_fund_owtg_link);
    $owtg->ways_to_give[] = $way_to_give;
  }
  $response_data->other_ways_to_give = $owtg;

  // Gallery
  $gallery = new stdClass();
  $gallery->header = $helper->prepareBody($node_wrapper->field_fund_camp_giv_gall_hea);
  $gallery->fund_id = $helper->prepareBody($node_wrapper->field_fund_gallery_id);
  $gallery->hide_gallery = $helper->prepareBooleanOutput($node_wrapper->field_fund_camp_hide_ggallery);
  $response_data->gallery = $gallery;

  // Campaign
  // TODO: remove this property once all symfony changes are in place
  $campaign_tab = new stdClass();
  $campaign_tab->header = $helper->prepareBody($node_wrapper->field_fund_campaign_header);
  $campaign_tab->description = $helper->prepareBody($node_wrapper->field_fund_campaign_description);
  $campaign_tab->button = $helper->processWrappedLink($node_wrapper->field_fund_campaign_button_title, array(), false);
  $campaign_tab->page_header = $helper->prepareBody($node_wrapper->field_fund_campaign_page_header);
  $campaign_tab->giving_gallery_header = $helper->prepareBody($node_wrapper->field_fund_camp_giv_gall_hea);
  $campaign_tab->hide_giving_gallery = $helper->prepareBooleanOutput($node_wrapper->field_fund_camp_hide_ggallery);

  $response_data->campaign = $campaign_tab;

  // Unset all fields that will not be exposed.
  unset($response_data->type);

  return $response_data;
}

/**
 * @param EntityMetadataWrapper $impact_wrapper
 * @param nyulmcServiceHelpers $helper
 *
 * @return stdClass
 */
function _nyulmc_ood_content_type_fund_retrieve_impact($impact_wrapper, $helper) {
  $return_object = new stdClass();
  if ($impact_wrapper->getIdentifier()) {
    $return_object->quote = $helper->prepareBody($impact_wrapper->field_fund_impact_quote);
    $return_object->image = $helper->prepareImage($impact_wrapper->field_fund_impact_image->value());
    $return_object->doctor_npi = $helper->prepareBody($impact_wrapper->field_fund_impact_doctor_npi);
    $return_object->name = $helper->prepareBody($impact_wrapper->field_fund_impact_name);
    $return_object->title = $helper->prepareBody($impact_wrapper->field_fund_impact_title);
    $return_object->link = $helper->processWrappedLink($impact_wrapper->field_fund_impact_link_title);
  }
  return $return_object;
}

/**
 * Alter results of the Fund service call.
 *
 * @param array $results
 *   Array of results(funds) passed by reference.
 */
function _nyulmc_ood_content_type_fund_retrieve_list_of_funds(&$fund){

  // If this is not for fund content type get out of here.
  if($fund->type != 'fund'){
    return;
  }

  //Load fund node and populate it.
  $node = node_load($fund->nid);
  // Wrap our node in an entity metadata wrapper, so we can autoload things,
  // and clean out that pesky language undefined syntax.
  $node_wrapper = entity_metadata_wrapper('node', $node);

  //Attach and parse custom fields.
  _nyulmc_ood_content_type_fund_retrieve_fund($fund, $node_wrapper);
}