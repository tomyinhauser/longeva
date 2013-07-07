<?php
/**
 * @file
 * longeva_feature_products.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function longeva_feature_products_user_default_permissions() {
  $permissions = array();

  // Exported permission: create produtos content.
  $permissions['create produtos content'] = array(
    'name' => 'create produtos content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any produtos content.
  $permissions['delete any produtos content'] = array(
    'name' => 'delete any produtos content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own produtos content.
  $permissions['delete own produtos content'] = array(
    'name' => 'delete own produtos content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any produtos content.
  $permissions['edit any produtos content'] = array(
    'name' => 'edit any produtos content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own produtos content.
  $permissions['edit own produtos content'] = array(
    'name' => 'edit own produtos content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
