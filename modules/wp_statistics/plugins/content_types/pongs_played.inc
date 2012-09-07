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
function wp_statistics_pongs_played_content_type_render($subtype, $conf, $panel_args, $context) {
  $query = db_select('node', 'n')
    ->condition('type', 'wp_match', '=')
    ->fields('n', array('nid'))
    ->execute();

  $result = array_keys($query->fetchAllAssoc('nid'));

  $pongs = 0;
  foreach (array_chunk($result, 10) as $set) {
    $matches = entity_load('node', $set);

    foreach ($matches as $match) {
      $pongs += (int) $match->field_match_results[LANGUAGE_NONE][0]['value'];
      $pongs += (int) $match->field_match_results[LANGUAGE_NONE][1]['value'];
    }
  }

  $block = new stdClass();
  $block->module = 'pongs_played';
  $block->title = t('Pongs played');
  $block->content = $pongs;

  return $block;
}

/**
 * Returns the administrative title for a type.
 */
function wp_statistics_pongs_played_content_type_admin_title($subtype, $conf, $context) {
  return t('Pongs played');
}
