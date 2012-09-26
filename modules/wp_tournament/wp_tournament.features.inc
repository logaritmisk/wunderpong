<?php
/**
 * @file
 * wp_tournament.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wp_tournament_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wp_tournament_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wp_tournament_node_info() {
  $items = array(
    'wp_tournament' => array(
      'name' => t('Tournament'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
