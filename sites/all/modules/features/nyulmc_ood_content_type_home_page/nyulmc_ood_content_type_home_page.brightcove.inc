<?php
/**
 * @file
 * nyulmc_ood_content_type_home_page.brightcove.inc
 */

/**
 * Implements hook_brightcove_player().
 */
function nyulmc_ood_content_type_home_page_brightcove_player() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'single_video_player';
  $preset->display_name = 'Single Video Player (Default) (Responsive)';
  $preset->player_id = '3916090361001';
  $preset->player_key = '';
  $preset->responsive = TRUE;
  $export['single_video_player'] = $preset;

  return $export;
}
