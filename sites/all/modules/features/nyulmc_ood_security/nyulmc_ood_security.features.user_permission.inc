<?php
/**
 * @file
 * nyulmc_ood_security.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nyulmc_ood_security_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access environment indicator'.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator default_environment'.
  $permissions['access environment indicator default_environment'] = array(
    'name' => 'access environment indicator default_environment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator overwritten_environment'.
  $permissions['access environment indicator overwritten_environment'] = array(
    'name' => 'access environment indicator overwritten_environment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access event log'.
  $permissions['access event log'] = array(
    'name' => 'access event log',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'event_log',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer brightcove playlists'.
  $permissions['administer brightcove playlists'] = array(
    'name' => 'administer brightcove playlists',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: 'administer brightcove settings'.
  $permissions['administer brightcove settings'] = array(
    'name' => 'administer brightcove settings',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'service consumer' => 'service consumer',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer environment indicator settings'.
  $permissions['administer environment indicator settings'] = array(
    'name' => 'administer environment indicator settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer services'.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'browse playlists'.
  $permissions['browse playlists'] = array(
    'name' => 'browse playlists',
    'roles' => array(
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: 'browse videos'.
  $permissions['browse videos'] = array(
    'name' => 'browse videos',
    'roles' => array(
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create 175th_anniversary content'.
  $permissions['create 175th_anniversary content'] = array(
    'name' => 'create 175th_anniversary content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create events_landing content'.
  $permissions['create events_landing content'] = array(
    'name' => 'create events_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create fund content'.
  $permissions['create fund content'] = array(
    'name' => 'create fund content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fundraise_landing content'.
  $permissions['create fundraise_landing content'] = array(
    'name' => 'create fundraise_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create funds_list content'.
  $permissions['create funds_list content'] = array(
    'name' => 'create funds_list content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create home_page content'.
  $permissions['create home_page content'] = array(
    'name' => 'create home_page content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create passion_story content'.
  $permissions['create passion_story content'] = array(
    'name' => 'create passion_story content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create single_file content'.
  $permissions['create single_file content'] = array(
    'name' => 'create single_file content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create supporter_landing content'.
  $permissions['create supporter_landing content'] = array(
    'name' => 'create supporter_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create supporter_message_form content'.
  $permissions['create supporter_message_form content'] = array(
    'name' => 'create supporter_message_form content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create vilcek_hall content'.
  $permissions['create vilcek_hall content'] = array(
    'name' => 'create vilcek_hall content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ways_to_give_child_page content'.
  $permissions['create ways_to_give_child_page content'] = array(
    'name' => 'create ways_to_give_child_page content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ways_to_give_landing content'.
  $permissions['create ways_to_give_landing content'] = array(
    'name' => 'create ways_to_give_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create why_give content'.
  $permissions['create why_give content'] = array(
    'name' => 'create why_give content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any 175th_anniversary content'.
  $permissions['delete any 175th_anniversary content'] = array(
    'name' => 'delete any 175th_anniversary content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any events_landing content'.
  $permissions['delete any events_landing content'] = array(
    'name' => 'delete any events_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fund content'.
  $permissions['delete any fund content'] = array(
    'name' => 'delete any fund content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fundraise_landing content'.
  $permissions['delete any fundraise_landing content'] = array(
    'name' => 'delete any fundraise_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any funds_list content'.
  $permissions['delete any funds_list content'] = array(
    'name' => 'delete any funds_list content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any home_page content'.
  $permissions['delete any home_page content'] = array(
    'name' => 'delete any home_page content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any passion_story content'.
  $permissions['delete any passion_story content'] = array(
    'name' => 'delete any passion_story content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any single_file content'.
  $permissions['delete any single_file content'] = array(
    'name' => 'delete any single_file content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any supporter_landing content'.
  $permissions['delete any supporter_landing content'] = array(
    'name' => 'delete any supporter_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any supporter_message_form content'.
  $permissions['delete any supporter_message_form content'] = array(
    'name' => 'delete any supporter_message_form content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vilcek_hall content'.
  $permissions['delete any vilcek_hall content'] = array(
    'name' => 'delete any vilcek_hall content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ways_to_give_child_page content'.
  $permissions['delete any ways_to_give_child_page content'] = array(
    'name' => 'delete any ways_to_give_child_page content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ways_to_give_landing content'.
  $permissions['delete any ways_to_give_landing content'] = array(
    'name' => 'delete any ways_to_give_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any why_give content'.
  $permissions['delete any why_give content'] = array(
    'name' => 'delete any why_give content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own 175th_anniversary content'.
  $permissions['delete own 175th_anniversary content'] = array(
    'name' => 'delete own 175th_anniversary content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own events_landing content'.
  $permissions['delete own events_landing content'] = array(
    'name' => 'delete own events_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fund content'.
  $permissions['delete own fund content'] = array(
    'name' => 'delete own fund content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fundraise_landing content'.
  $permissions['delete own fundraise_landing content'] = array(
    'name' => 'delete own fundraise_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own funds_list content'.
  $permissions['delete own funds_list content'] = array(
    'name' => 'delete own funds_list content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own home_page content'.
  $permissions['delete own home_page content'] = array(
    'name' => 'delete own home_page content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own passion_story content'.
  $permissions['delete own passion_story content'] = array(
    'name' => 'delete own passion_story content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own single_file content'.
  $permissions['delete own single_file content'] = array(
    'name' => 'delete own single_file content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own supporter_landing content'.
  $permissions['delete own supporter_landing content'] = array(
    'name' => 'delete own supporter_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own supporter_message_form content'.
  $permissions['delete own supporter_message_form content'] = array(
    'name' => 'delete own supporter_message_form content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vilcek_hall content'.
  $permissions['delete own vilcek_hall content'] = array(
    'name' => 'delete own vilcek_hall content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ways_to_give_child_page content'.
  $permissions['delete own ways_to_give_child_page content'] = array(
    'name' => 'delete own ways_to_give_child_page content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ways_to_give_landing content'.
  $permissions['delete own ways_to_give_landing content'] = array(
    'name' => 'delete own ways_to_give_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own why_give content'.
  $permissions['delete own why_give content'] = array(
    'name' => 'delete own why_give content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any 175th_anniversary content'.
  $permissions['edit any 175th_anniversary content'] = array(
    'name' => 'edit any 175th_anniversary content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any events_landing content'.
  $permissions['edit any events_landing content'] = array(
    'name' => 'edit any events_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fund content'.
  $permissions['edit any fund content'] = array(
    'name' => 'edit any fund content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fundraise_landing content'.
  $permissions['edit any fundraise_landing content'] = array(
    'name' => 'edit any fundraise_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any funds_list content'.
  $permissions['edit any funds_list content'] = array(
    'name' => 'edit any funds_list content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any home_page content'.
  $permissions['edit any home_page content'] = array(
    'name' => 'edit any home_page content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any passion_story content'.
  $permissions['edit any passion_story content'] = array(
    'name' => 'edit any passion_story content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any single_file content'.
  $permissions['edit any single_file content'] = array(
    'name' => 'edit any single_file content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any supporter_landing content'.
  $permissions['edit any supporter_landing content'] = array(
    'name' => 'edit any supporter_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any supporter_message_form content'.
  $permissions['edit any supporter_message_form content'] = array(
    'name' => 'edit any supporter_message_form content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vilcek_hall content'.
  $permissions['edit any vilcek_hall content'] = array(
    'name' => 'edit any vilcek_hall content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ways_to_give_child_page content'.
  $permissions['edit any ways_to_give_child_page content'] = array(
    'name' => 'edit any ways_to_give_child_page content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ways_to_give_landing content'.
  $permissions['edit any ways_to_give_landing content'] = array(
    'name' => 'edit any ways_to_give_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any why_give content'.
  $permissions['edit any why_give content'] = array(
    'name' => 'edit any why_give content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own 175th_anniversary content'.
  $permissions['edit own 175th_anniversary content'] = array(
    'name' => 'edit own 175th_anniversary content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own events_landing content'.
  $permissions['edit own events_landing content'] = array(
    'name' => 'edit own events_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fund content'.
  $permissions['edit own fund content'] = array(
    'name' => 'edit own fund content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fundraise_landing content'.
  $permissions['edit own fundraise_landing content'] = array(
    'name' => 'edit own fundraise_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own funds_list content'.
  $permissions['edit own funds_list content'] = array(
    'name' => 'edit own funds_list content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own home_page content'.
  $permissions['edit own home_page content'] = array(
    'name' => 'edit own home_page content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own passion_story content'.
  $permissions['edit own passion_story content'] = array(
    'name' => 'edit own passion_story content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own single_file content'.
  $permissions['edit own single_file content'] = array(
    'name' => 'edit own single_file content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own supporter_landing content'.
  $permissions['edit own supporter_landing content'] = array(
    'name' => 'edit own supporter_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own supporter_message_form content'.
  $permissions['edit own supporter_message_form content'] = array(
    'name' => 'edit own supporter_message_form content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vilcek_hall content'.
  $permissions['edit own vilcek_hall content'] = array(
    'name' => 'edit own vilcek_hall content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ways_to_give_child_page content'.
  $permissions['edit own ways_to_give_child_page content'] = array(
    'name' => 'edit own ways_to_give_child_page content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ways_to_give_landing content'.
  $permissions['edit own ways_to_give_landing content'] = array(
    'name' => 'edit own ways_to_give_landing content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own why_give content'.
  $permissions['edit own why_give content'] = array(
    'name' => 'edit own why_give content',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'get a system variable'.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get any binary files'.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get own binary files'.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'perform unlimited index queries'.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'services',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save file information'.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set a system variable'.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'upload videos'.
  $permissions['upload videos'] = array(
    'name' => 'upload videos',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'brightcove',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format nyulmc_basic_html'.
  $permissions['use text format nyulmc_basic_html'] = array(
    'name' => 'use text format nyulmc_basic_html',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format nyulmc_events_html'.
  $permissions['use text format nyulmc_events_html'] = array(
    'name' => 'use text format nyulmc_events_html',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format nyulmc_links_only'.
  $permissions['use text format nyulmc_links_only'] = array(
    'name' => 'use text format nyulmc_links_only',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format nyulmc_ood_links_and_basic'.
  $permissions['use text format nyulmc_ood_links_and_basic'] = array(
    'name' => 'use text format nyulmc_ood_links_and_basic',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'NYULMC Editor' => 'NYULMC Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'DTI Admin' => 'DTI Admin',
      'NYULMC Editor' => 'NYULMC Editor',
      'OOD Admin' => 'OOD Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
