<?php
/**
 * @file
 * wp_general.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wp_general_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wp_general_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wp_general_node_info() {
  $items = array(
    'match' => array(
      'name' => t('Match'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'set' => array(
      'name' => t('Set'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
