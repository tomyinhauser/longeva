<?php
/**
 * @file
 * longeva_feature_highlights.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function longeva_feature_highlights_user_default_permissions() {
  $permissions = array();

  // Exported permission: create highlight content.
  $permissions['create highlight content'] = array(
    'name' => 'create highlight content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any highlight content.
  $permissions['delete any highlight content'] = array(
    'name' => 'delete any highlight content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own highlight content.
  $permissions['delete own highlight content'] = array(
    'name' => 'delete own highlight content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any highlight content.
  $permissions['edit any highlight content'] = array(
    'name' => 'edit any highlight content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own highlight content.
  $permissions['edit own highlight content'] = array(
    'name' => 'edit own highlight content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
