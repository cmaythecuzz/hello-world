<?php

/**
 * Append data for why give nodes to our response,
 * if this was a why_give content type.
 *
 * @param Object $response_data
 *   The response object we'll be returning for the request. Passed by reference.
 * @param Entity_Metadata_Wrapper $node_wrapper
 *   The wrapped node, which is our source for the response data we'll load
 *   into our return object.
 * @return Object
 */
function _nyulmc_ood_content_type_why_give_retrieve_why_give($response_data, $node_wrapper) {

  // If this is not our type, get out of here.
  if ($node_wrapper->type->value() !== 'why_give') {
    return;
  }

  // Helper class for processing output.
  $helper = new nyulmcServiceHelpers();
  $prefix = NYULMC_OOD_ADMIN_VARIABLES_PREFIX;

  $sections = $node_wrapper->field_why_give_section;
  $response_data->main = array(
    'title' => $helper->prepareBody($node_wrapper->title),
    'overview' => $helper->prepareBody($node_wrapper->field_why_give_overview_main),
    'jump_link' => $helper->prepareBody($node_wrapper->field_why_give_video_jump_link)
  );
  $response_data->sections = array();
  foreach ($sections as $section) {
    // Each of the sections is an EntityValueWrapper. We use the helper
    // method to process it.
    $section_title = $section->field_why_give_section_title;
    $section_body = $section->field_why_give_section_body;
    $section_image = $section->field_why_give_section_image;
    $section_eyebrow = $section->field_why_give_section_eyebrow;
    $section_stats = $section->field_why_give_section_stats;
    $stats = array();
    foreach ($section_stats as $section_stat) {
      $stat = new stdClass();
      $stat->stat = $helper->prepareBody($section_stat->field_why_give_stats_stat);
      $stat->text = $helper->prepareBody($section_stat->field_why_give_stats_text);
      $stats[] = $stat;
    }
    $prepared_body = $helper->prepareBody($section_body);

    $prepared_image = $helper->prepareImage($section_image->value());
    $response_data->sections[] = array(
      'title' => $helper->prepareBody($section_title),
      'body' => $prepared_body,
      'image' => $prepared_image,
      'eyebrow' => $helper->prepareBody($section_eyebrow),
      'stats' => $stats
    );
  }
  $video = array(
    'title' => $helper->prepareBody($node_wrapper->field_video_title),
    'image' => $helper->prepareImage($node_wrapper->field_video_image->value()),
    'video' => $helper->processBrightcoveField($node_wrapper, 'field_video')
  );
  if (!isset($video['video'])) {
    $response_data->video = array();
  } else{
    $response_data->video = $video;
  }
  $response_data->general_appeal = array(
    'body' => $helper->prepareBody($node_wrapper->field_why_give_general_appeal_bo)
  );

  // Unset all fields that will not be exposed.
  unset($response_data->id);
  unset($response_data->language);
  unset($response_data->title);

  return $response_data;
}
