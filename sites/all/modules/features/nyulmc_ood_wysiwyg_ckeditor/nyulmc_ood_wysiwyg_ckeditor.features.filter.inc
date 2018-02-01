<?php
/**
 * @file
 * nyulmc_ood_wysiwyg_ckeditor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function nyulmc_ood_wysiwyg_ckeditor_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_url' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: NYULMC Basic HTML.
  $formats['nyulmc_basic_html'] = array(
    'format' => 'nyulmc_basic_html',
    'name' => 'NYULMC Basic HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<p> <br> <div> <a> <em> <strong> <cite> <blockquote> <code> <img> <h1> <h2> <h3> <h4> <h5> <h6> <ul> <ol> <li> <img> <span> <figure> <figcaption> <embed> <address> <hr> <sup> <sub> <u>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_brightcove' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'player' => 'single_video_player',
        ),
      ),
    ),
  );

  // Exported format: NYULMC Events HTML.
  $formats['nyulmc_events_html'] = array(
    'format' => 'nyulmc_events_html',
    'name' => 'NYULMC Events HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<p> <br> <div> <a> <em> <strong> <cite> <blockquote> <code> <img> <h1> <h2> <h3> <h4> <h5> <h6> <ul> <ol> <li> <img> <span> <figure> <figcaption> <embed> <address> <hr> <sup> <sub>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_brightcove' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(
          'player' => 'single_video_player',
        ),
      ),
    ),
  );

  // Exported format: NYULMC - Links Only.
  $formats['nyulmc_links_only'] = array(
    'format' => 'nyulmc_links_only',
    'name' => 'NYULMC - Links Only',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> ',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  // Exported format: NYULMC OOD Links and basic.
  $formats['nyulmc_ood_links_and_basic'] = array(
    'format' => 'nyulmc_ood_links_and_basic',
    'name' => 'NYULMC OOD Links and basic',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <ul> <ol> <li> <dl> <dt> <dd> <p> <br> <u>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
    ),
  );

  // Exported format: NYULMC OOD Links and Paragraphs.
  $formats['nyulmc_ood_links_and_paragraphs'] = array(
    'format' => 'nyulmc_ood_links_and_paragraphs',
    'name' => 'NYULMC OOD Links and Paragraphs',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <br> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -5,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
