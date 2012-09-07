<?php
/**
 * @file
 * wp_statistics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wp_statistics_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
