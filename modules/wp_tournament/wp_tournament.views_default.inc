<?php
/**
 * @file
 * wp_tournament.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wp_tournament_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'wp_tournament_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'wp_tournament_overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'nid_2' => 'nid_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_match_players_node']['id'] = 'reverse_field_match_players_node';
  $handler->display->display_options['relationships']['reverse_field_match_players_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_match_players_node']['field'] = 'reverse_field_match_players_node';
  $handler->display->display_options['relationships']['reverse_field_match_players_node']['label'] = 'all';
  $handler->display->display_options['relationships']['reverse_field_match_players_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_match_winner_user_node']['id'] = 'reverse_field_match_winner_user_node';
  $handler->display->display_options['relationships']['reverse_field_match_winner_user_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_match_winner_user_node']['field'] = 'reverse_field_match_winner_user_node';
  $handler->display->display_options['relationships']['reverse_field_match_winner_user_node']['label'] = 'winner';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_match_loser_user_node']['id'] = 'reverse_field_match_loser_user_node';
  $handler->display->display_options['relationships']['reverse_field_match_loser_user_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_match_loser_user_node']['field'] = 'reverse_field_match_loser_user_node';
  $handler->display->display_options['relationships']['reverse_field_match_loser_user_node']['label'] = 'loser';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_match_players_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_match_winner_user_node';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count_distinct';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'reverse_field_match_loser_user_node';
  $handler->display->display_options['fields']['nid_2']['group_type'] = 'count_distinct';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[nid_1] * 2';
  /* Contextual filter: Content: Tournament (field_match_tournament) */
  $handler->display->display_options['arguments']['field_match_tournament_target_id']['id'] = 'field_match_tournament_target_id';
  $handler->display->display_options['arguments']['field_match_tournament_target_id']['table'] = 'field_data_field_match_tournament';
  $handler->display->display_options['arguments']['field_match_tournament_target_id']['field'] = 'field_match_tournament_target_id';
  $handler->display->display_options['arguments']['field_match_tournament_target_id']['relationship'] = 'reverse_field_match_players_node';
  $handler->display->display_options['arguments']['field_match_tournament_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_match_tournament_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_match_tournament_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_match_tournament_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_match_tournament_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['wp_tournament_overview'] = $view;

  return $export;
}
