<?php
/**
 * @file
 */


/**
 *
 */
$plugin = array(
  'title' => t('Player count'),
  'description' => t('Number of active players.'),
  'category' => t('Statistics'),
);

/**
 * Render the custom content type.
 */
function wp_statistics_player_count_content_type_render($subtype, $conf, $panel_args, $context) {
  $query = db_select('node', 'n')
    ->condition('type', 'wp_match', '=')
    ->fields('n', array('nid'))
    ->execute();

  $result = array_keys($query->fetchAllAssoc('nid'));

  $players = array();
  foreach (array_chunk($result, 10) as $set) {
    $matches = entity_load('node', $set);

    foreach ($matches as $match) {
      foreach ($match->field_match_players[LANGUAGE_NONE] as $player) {
	if (isset($players[$player['target_id']])) {
	  $players[$player['target_id']] += 1;
	}
	else {
	  $players[$player['target_id']] = 1;
	}
      }
    }
  }

  $block = new stdClass();
  $block->module = 'player_count';
  $block->title = t('Player count');
  $block->content = count($players);

  return $block;
}

/**
 * Returns the administrative title for a type.
 */
function wp_statistics_player_count_content_type_admin_title($subtype, $conf, $context) {
  return t('Player count');
}
