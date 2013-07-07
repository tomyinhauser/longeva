<?php
/**
 * @file
 * longeva_feature_tags.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function longeva_feature_tags_user_default_permissions() {
  $permissions = array();

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
