<?php
/**
 * @file
 * wp_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wp_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: create wp_match content.
  $permissions['create wp_match content'] = array(
    'name' => 'create wp_match content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any wp_match content.
  $permissions['delete any wp_match content'] = array(
    'name' => 'delete any wp_match content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any wp_match content.
  $permissions['edit any wp_match content'] = array(
    'name' => 'edit any wp_match content',
    'roles' => array(
      0 => 'admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
