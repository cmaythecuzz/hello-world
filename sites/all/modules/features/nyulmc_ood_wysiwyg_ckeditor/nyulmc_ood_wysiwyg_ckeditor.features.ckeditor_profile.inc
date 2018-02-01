<?php
/**
 * @file
 * nyulmc_ood_wysiwyg_ckeditor.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function nyulmc_ood_wysiwyg_ckeditor_ckeditor_profile_defaults() {
  $data = array(
    'NYULMC' => array(
      'name' => 'NYULMC',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Format\',\'Bold\',\'Italic\',\'Underline\',\'-\'],
    [\'HorizontalRule\',\'NumberedList\',\'BulletedList\',\'nyulmc_quote\',\'nyulmc_callout\',\'nyulmc_location\',\'-\',\'Link\',\'Unlink\'],
    [\'-\',\'MediaEmbed\',\'Image\',\'Media\',\'nyulmc_media_link\',\'nyulmc_media_embed\',\'Statistic\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'custom',
        'uicolor_user' => '#D3D3D3',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 'f',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%h%t/css/ckeditor.styles.css',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.allowedContent = true;
config.protectedSource.push( /<nyu:stats[\\s\\S]*?\\>/g )
config.protectedSource.push( /<\\/nyu:stats[\\s\\S]*?\\>/g );',
        'loadPlugins' => array(
/**
          'ckeditor_link' => array(
            'name' => 'drupal_path',
            'desc' => 'CKEditor Link - A plugin to easily create links to Drupal internal paths',
            'path' => '%base_path%sites/all/modules/contrib/ckeditor_link/plugins/link/',
            'buttons' => FALSE,
          ),
 */
          'dialog' => array(
            'name' => 'dialog',
            'desc' => 'Plugin file: dialog',
            'path' => '%plugin_dir%dialog/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'image2' => array(
            'name' => 'image2',
            'desc' => 'Plugin file: image2',
            'path' => '%plugin_dir%image2/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'lineutils' => array(
            'name' => 'lineutils',
            'desc' => 'Plugin file: lineutils',
            'path' => '%plugin_dir%lineutils/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%plugin_dir%media/',
            'buttons' => array(
              'Media' => array(
                'label' => 'Media',
                'icon' => 'images/icon.gif',
              ),
            ),
            'default' => 'f',
          ),
          'mediaembed' => array(
            'name' => 'mediaembed',
            'desc' => 'Plugin for inserting Drupal embeded media',
            'path' => '%plugin_dir%mediaembed/',
            'buttons' => array(
              'MediaEmbed' => array(
                'label' => 'MediaEmbed',
                'icon' => 'images/icon.png',
              ),
            ),
            'default' => 'f',
          ),
          'nyulmc_callout' => array(
            'name' => 'nyulmc_callout',
            'desc' => 'NYULMC: Inline Callout plugin.',
            'path' => '%base_path%sites/all/modules/custom/nyulmc_ckeditor/plugins/nyulmc_callout/',
            'buttons' => array(
              'nyulmc_callout' => array(
                'label' => 'nyulmc_callout',
                'icon' => 'icons/nyulmc_callout.png',
              ),
            ),
          ),
          'nyulmc_location' => array(
            'name' => 'nyulmc_location',
            'desc' => 'NYULMC: Inline Location Address plugin.',
            'path' => '%base_path%sites/all/modules/custom/nyulmc_ckeditor/plugins/nyulmc_location/',
            'buttons' => array(
              'nyulmc_location' => array(
                'label' => 'nyulmc_location',
                'icon' => 'icons/nyulmc_location.png',
              ),
            ),
          ),
          'nyulmc_media_link' => array(
            'name' => 'nyulmc_media_link',
            'desc' => 'NYULMC: Inline linking for media, including PDF files.',
            'path' => '%base_path%sites/all/modules/custom/nyulmc_ckeditor/plugins/nyulmc_media_link/',
            'buttons' => array(
              'nyulmc_media_link' => array(
                'label' => 'nyulmc_media_link',
                'icon' => 'icons/nyulmc_media_link.png',
              ),
            ),
          ),
          'nyulmc_quote' => array(
            'name' => 'nyulmc_quote',
            'desc' => 'NYULMC: Inline Quote plugin.',
            'path' => '%base_path%sites/all/modules/custom/nyulmc_ckeditor/plugins/nyulmc_quote/',
            'buttons' => array(
              'nyulmc_quote' => array(
                'label' => 'nyulmc_quote',
                'icon' => 'icons/nyulmc_quote.png',
              ),
            ),
          ),
          'stat' => array(
            'name' => 'stat',
            'desc' => 'NYULMC: Plugin for inserting statistics.',
            'path' => '%base_path%sites/all/modules/custom/nyulmc_ckeditor/plugins/stat/',
            'buttons' => array(
              'Statistic' => array(
                'label' => 'Statistic',
                'icon' => 'icons/stat.png',
              ),
            ),
          ),
          'stylesheetparser' => array(
            'name' => 'stylesheetparser',
            'desc' => 'Stylesheet Parser plugin. See <a href="http://ckeditor.com/addon/stylesheetparser">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.0/full-all/plugins/stylesheetparser/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'tableresize' => array(
            'name' => 'tableresize',
            'desc' => 'Table Resize plugin. See <a href="http://ckeditor.com/addon/tableresize">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.0/full-all/plugins/tableresize/',
            'buttons' => FALSE,
            'default' => 't',
          ),
          'widget' => array(
            'name' => 'widget',
            'desc' => 'Plugin file: widget',
            'path' => '%plugin_dir%widget/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'nyulmc_basic_html' => 'NYULMC Basic HTML',
        'nyulmc_basic_html_lists' => 'NYULMC Basic HTML + Lists',
        'unfiltered' => 'Unfiltered',
      ),
    ),
  );
  return $data;
}
