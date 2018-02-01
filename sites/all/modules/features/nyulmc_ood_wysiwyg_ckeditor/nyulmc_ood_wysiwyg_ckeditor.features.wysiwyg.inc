<?php
/**
 * @file
 * nyulmc_ood_wysiwyg_ckeditor.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function nyulmc_ood_wysiwyg_ckeditor_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: nyulmc_basic_html
  $profiles['nyulmc_basic_html'] = array(
    'format' => 'nyulmc_basic_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'HorizontalRule' => 1,
          'Format' => 1,
        ),
        'nyulmc_callout' => array(
          'nyulmc_callout' => 1,
        ),
        'nyulmc_location' => array(
          'nyulmc_location' => 1,
        ),
        'nyulmc_quote' => array(
          'nyulmc_quote' => 1,
        ),
        'nyulmc_photo_quote' => array(
          'nyulmc_photo_quote' => 1,
        ),
        'nyulmc_media_link' => array(
          'nyulmc_media_link' => 1,
        ),
        'nyulmc_caption' => array(
          'nyulmc_caption' => 1,
        ),
        'stat' => array(
          'stat' => 1,
        ),
        'nyulmc_fullwidth_caption' => array(
          'nyulmc_fullwidth_caption' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-basic',
      'forcePasteAsPlainText' => 0,
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: nyulmc_events_html
  $profiles['nyulmc_events_html'] = array(
    'format' => 'nyulmc_events_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'HorizontalRule' => 1,
          'Format' => 1,
        ),
        'nyulmc_callout' => array(
          'nyulmc_callout' => 1,
        ),
        'nyulmc_quote' => array(
          'nyulmc_quote' => 1,
        ),
        'nyulmc_media_link' => array(
          'nyulmc_media_link' => 1,
        ),
        'nyulmc_caption' => array(
          'nyulmc_caption' => 1,
        ),
        'stat' => array(
          'stat' => 1,
        ),
        'nyulmc_fullwidth_caption' => array(
          'nyulmc_fullwidth_caption' => 1,
        ),
        'nyulmc_photo_link_quote' => array(
          'nyulmc_photo_link_quote' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-basic',
      'forcePasteAsPlainText' => 0,
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: nyulmc_links_only
  $profiles['nyulmc_links_only'] = array(
    'format' => 'nyulmc_links_only',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Link' => 1,
          'Unlink' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-css',
      'forcePasteAsPlainText' => 0,
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: nyulmc_ood_links_and_basic
  $profiles['nyulmc_ood_links_and_basic'] = array(
    'format' => 'nyulmc_ood_links_and_basic',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'Link' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-basic',
      'forcePasteAsPlainText' => 0,
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: nyulmc_ood_links_and_paragraphs
  $profiles['nyulmc_ood_links_and_paragraphs'] = array(
    'format' => 'nyulmc_ood_links_and_paragraphs',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Link' => 1,
          'Unlink' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-paste',
      'forcePasteAsPlainText' => 0,
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
