<?php
/**
 * @file
 * wp_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wp_user_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => '2',
  );

  // Exported role: player.
  $roles['player'] = array(
    'name' => 'player',
    'weight' => '3',
  );

  return $roles;
}
