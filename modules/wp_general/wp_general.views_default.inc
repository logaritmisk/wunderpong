<?php
/**
 * @file
 * wp_general.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wp_general_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'match_recent';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'match_recent';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_set_1_target_id']['id'] = 'field_set_1_target_id';
  $handler->display->display_options['relationships']['field_set_1_target_id']['table'] = 'field_data_field_set_1';
  $handler->display->display_options['relationships']['field_set_1_target_id']['field'] = 'field_set_1_target_id';
  $handler->display->display_options['relationships']['field_set_1_target_id']['label'] = 'set_1';
  $handler->display->display_options['relationships']['field_set_1_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_set_2_target_id']['id'] = 'field_set_2_target_id';
  $handler->display->display_options['relationships']['field_set_2_target_id']['table'] = 'field_data_field_set_2';
  $handler->display->display_options['relationships']['field_set_2_target_id']['field'] = 'field_set_2_target_id';
  $handler->display->display_options['relationships']['field_set_2_target_id']['label'] = 'set_2';
  $handler->display->display_options['relationships']['field_set_2_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_set_3_target_id']['id'] = 'field_set_3_target_id';
  $handler->display->display_options['relationships']['field_set_3_target_id']['table'] = 'field_data_field_set_3';
  $handler->display->display_options['relationships']['field_set_3_target_id']['field'] = 'field_set_3_target_id';
  $handler->display->display_options['relationships']['field_set_3_target_id']['label'] = 'set_3';
  /* Field: Content: Players */
  $handler->display->display_options['fields']['field_players']['id'] = 'field_players';
  $handler->display->display_options['fields']['field_players']['table'] = 'field_data_field_players';
  $handler->display->display_options['fields']['field_players']['field'] = 'field_players';
  $handler->display->display_options['fields']['field_players']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_players']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_players']['separator'] = ' - ';
  /* Field: Content: Winner */
  $handler->display->display_options['fields']['field_winner']['id'] = 'field_winner';
  $handler->display->display_options['fields']['field_winner']['table'] = 'field_data_field_winner';
  $handler->display->display_options['fields']['field_winner']['field'] = 'field_winner';
  $handler->display->display_options['fields']['field_winner']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Result 1 */
  $handler->display->display_options['fields']['field_result_1']['id'] = 'field_result_1';
  $handler->display->display_options['fields']['field_result_1']['table'] = 'field_data_field_result_1';
  $handler->display->display_options['fields']['field_result_1']['field'] = 'field_result_1';
  $handler->display->display_options['fields']['field_result_1']['relationship'] = 'field_set_1_target_id';
  $handler->display->display_options['fields']['field_result_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Result 2 */
  $handler->display->display_options['fields']['field_result_2']['id'] = 'field_result_2';
  $handler->display->display_options['fields']['field_result_2']['table'] = 'field_data_field_result_2';
  $handler->display->display_options['fields']['field_result_2']['field'] = 'field_result_2';
  $handler->display->display_options['fields']['field_result_2']['relationship'] = 'field_set_1_target_id';
  $handler->display->display_options['fields']['field_result_2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Result 1 */
  $handler->display->display_options['fields']['field_result_1_1']['id'] = 'field_result_1_1';
  $handler->display->display_options['fields']['field_result_1_1']['table'] = 'field_data_field_result_1';
  $handler->display->display_options['fields']['field_result_1_1']['field'] = 'field_result_1';
  $handler->display->display_options['fields']['field_result_1_1']['relationship'] = 'field_set_2_target_id';
  $handler->display->display_options['fields']['field_result_1_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Result 2 */
  $handler->display->display_options['fields']['field_result_2_1']['id'] = 'field_result_2_1';
  $handler->display->display_options['fields']['field_result_2_1']['table'] = 'field_data_field_result_2';
  $handler->display->display_options['fields']['field_result_2_1']['field'] = 'field_result_2';
  $handler->display->display_options['fields']['field_result_2_1']['relationship'] = 'field_set_2_target_id';
  $handler->display->display_options['fields']['field_result_2_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Result 1 */
  $handler->display->display_options['fields']['field_result_1_2']['id'] = 'field_result_1_2';
  $handler->display->display_options['fields']['field_result_1_2']['table'] = 'field_data_field_result_1';
  $handler->display->display_options['fields']['field_result_1_2']['field'] = 'field_result_1';
  $handler->display->display_options['fields']['field_result_1_2']['relationship'] = 'field_set_3_target_id';
  $handler->display->display_options['fields']['field_result_1_2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Result 2 */
  $handler->display->display_options['fields']['field_result_2_2']['id'] = 'field_result_2_2';
  $handler->display->display_options['fields']['field_result_2_2']['table'] = 'field_data_field_result_2';
  $handler->display->display_options['fields']['field_result_2_2']['field'] = 'field_result_2';
  $handler->display->display_options['fields']['field_result_2_2']['relationship'] = 'field_set_3_target_id';
  $handler->display->display_options['fields']['field_result_2_2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'match' => 'match',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['match_recent'] = $view;

  $view = new view();
  $view->name = 'player_rank';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'player_rank';
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
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_players_node']['id'] = 'reverse_field_players_node';
  $handler->display->display_options['relationships']['reverse_field_players_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_players_node']['field'] = 'reverse_field_players_node';
  $handler->display->display_options['relationships']['reverse_field_players_node']['label'] = 'match';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_winner_target_id']['id'] = 'field_winner_target_id';
  $handler->display->display_options['relationships']['field_winner_target_id']['table'] = 'field_data_field_winner';
  $handler->display->display_options['relationships']['field_winner_target_id']['field'] = 'field_winner_target_id';
  $handler->display->display_options['relationships']['field_winner_target_id']['relationship'] = 'reverse_field_players_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_winner_node']['id'] = 'reverse_field_winner_node';
  $handler->display->display_options['relationships']['reverse_field_winner_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_winner_node']['field'] = 'reverse_field_winner_node';
  $handler->display->display_options['relationships']['reverse_field_winner_node']['label'] = 'winner';
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
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_players_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Matches';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_winner_node';
  $handler->display->display_options['fields']['nid_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Wins';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Losses';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[nid] - [nid_1]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Ratio';
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '1';
  $handler->display->display_options['fields']['expression_1']['suffix'] = '%';
  $handler->display->display_options['fields']['expression_1']['expression'] = '([nid_1] / [nid]) * 100';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['player_rank'] = $view;

  $view = new view();
  $view->name = 'reference_players';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'reference_players';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['reference_players'] = $view;

  return $export;
}
