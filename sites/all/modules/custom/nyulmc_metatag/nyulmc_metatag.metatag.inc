<?php
/**
 * @file
 * Metatag integration for custom NYULMC tags (well one, really).
 */

/**
 * Implements hook_metatag_config_default_alter().
 */
function nyulmc_metatag_metatag_config_default_alter(array &$configs) {
  foreach ($configs as &$config) {
    switch ($config->instance) {
      case 'global':
        $config->config += array(
          'nyulmc:analytics:title' => array('value' => '[site:name]'),
        );
        break;

      case 'node':
        $config->config += array(
          'nyulmc:analytics:title' => array('value' => '[site:name]'),
        );
        break;
    }
  }
}

/**
 * Implements hook_metatag_info().
 */
function nyulmc_metatag_metatag_info() {
  $info['groups']['nyulmc'] = array(
    'label' => t('NYULMC Analytics'),
    'description' => t('A set of meta tags specially for controlling the summaries displayed for custom NYULMC settings.'),
    'form' => array(
      '#weight' => 60,
    ),
  );
  $info['tags']['nyulmc:analytics:title'] = array(
    'label' => t('Analytics Page Name'),
    'description' => t('The analytics\' page name, which should be concise.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'nyulmc',
    'element' => array(
      '#theme' => 'nyulmc_metatag',
    ),
  );

  return $info;
}
