<?php
/**
 * @file
 * longeva_feature_site.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function longeva_feature_site_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer google analytics.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  return $permissions;
}
