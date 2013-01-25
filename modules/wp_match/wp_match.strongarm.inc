<?php
/**
 * @file
 * wp_match.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wp_match_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_match';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_match';
  $strongarm->value = 'Match';
  $export['auto_entitylabel_pattern_node_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_match';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_match';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_match';
  $strongarm->value = '0';
  $export['node_preview_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_match';
  $strongarm->value = 1;
  $export['node_submitted_match'] = $strongarm;

  return $export;
}
