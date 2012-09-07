<?php
/**
 * @file
 */


/**
 *
 */
$plugin = array(
  'title' => t('Matches played'),
  'description' => t('The number of matches played.'),
  'category' => t('Statistics'),
);

/**
 * Render the custom content type.
 */
function wp_statistics_matches_played_content_type_render($subtype, $conf, $panel_args, $context) {
  $query = db_select('node', 'n')
    ->condition('type', 'wp_match', '=')
    ->countQuery()
    ->execute();

  $block = new stdClass();
  $block->module = 'matches_played';
  $block->title = t('Matches played');
  $block->content = $query->fetchField();

  return $block;
}

/**
 * Returns the administrative title for a type.
 */
function wp_statistics_matches_played_content_type_admin_title($subtype, $conf, $context) {
  return t('Matches played');
}
