<?php
/**
 * @file
 * wp_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wp_user_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wp_user_views_api() {
  return array("api" => "3.0");
}
