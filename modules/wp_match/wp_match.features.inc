<?php
/**
 * @file
 * wp_match.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wp_match_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wp_match_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wp_match_node_info() {
  $items = array(
    'wp_match' => array(
      'name' => t('Match'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
