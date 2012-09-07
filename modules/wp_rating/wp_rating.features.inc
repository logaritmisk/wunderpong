<?php
/**
 * @file
 * wp_rating.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wp_rating_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
