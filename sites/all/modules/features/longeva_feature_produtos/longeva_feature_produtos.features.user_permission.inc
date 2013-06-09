<?php
/**
 * @file
 * longeva_feature_produtos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function longeva_feature_produtos_user_default_permissions() {
  $permissions = array();

  // Exported permission: create produto content.
  $permissions['create produto content'] = array(
    'name' => 'create produto content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any produto content.
  $permissions['delete any produto content'] = array(
    'name' => 'delete any produto content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own produto content.
  $permissions['delete own produto content'] = array(
    'name' => 'delete own produto content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any produto content.
  $permissions['edit any produto content'] = array(
    'name' => 'edit any produto content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own produto content.
  $permissions['edit own produto content'] = array(
    'name' => 'edit own produto content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
