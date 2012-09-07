<?php
/**
 * @file
 */


/**
 *
 */
$plugin = array(
  'title' => t('Pongs played'),
  'description' => t('The number of pongs played.'),
  'category' => t('Statistics'),
);

/**
 * Render the custom content type.
 */
function wp_statistics_pongs_total_content_type_render($subtype, $conf, $panel_args, $context) {
  $query = db_select('node', 'n')
    ->condition('type', 'wp_match', '=')
    ->execute();

  $block = new stdClass();
  $block->module = 'pongs_played';
  $block->title = t('Pongs played');
  $block->content = $query->fetchField();

  return $block;
}

/**
 * Returns the administrative title for a type.
 */
function wp_statistics_pongs_total_content_type_admin_title($subtype, $conf, $context) {
  return t('Pongs played');
}
