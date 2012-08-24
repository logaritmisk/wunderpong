<?php
/**
 * @file
 * wp_general.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wp_general_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => '3',
  );

  // Exported role: player.
  $roles['player'] = array(
    'name' => 'player',
    'weight' => '2',
  );

  return $roles;
}
