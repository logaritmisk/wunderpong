<?php
/**
 * @file
 * wp_match.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wp_match_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'wp_match_recent';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'wp_match_recent';
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
    'field_match_players' => 'field_match_players',
    'field_match_results' => 'field_match_results',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_match_players' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_match_results' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Player */
  $handler->display->display_options['fields']['field_match_winner_user']['id'] = 'field_match_winner_user';
  $handler->display->display_options['fields']['field_match_winner_user']['table'] = 'field_data_field_match_winner_user';
  $handler->display->display_options['fields']['field_match_winner_user']['field'] = 'field_match_winner_user';
  $handler->display->display_options['fields']['field_match_winner_user']['label'] = 'Winner';
  $handler->display->display_options['fields']['field_match_winner_user']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Player */
  $handler->display->display_options['fields']['field_match_loser_user']['id'] = 'field_match_loser_user';
  $handler->display->display_options['fields']['field_match_loser_user']['table'] = 'field_data_field_match_loser_user';
  $handler->display->display_options['fields']['field_match_loser_user']['field'] = 'field_match_loser_user';
  $handler->display->display_options['fields']['field_match_loser_user']['label'] = 'Loser';
  $handler->display->display_options['fields']['field_match_loser_user']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Result */
  $handler->display->display_options['fields']['field_match_winner_result']['id'] = 'field_match_winner_result';
  $handler->display->display_options['fields']['field_match_winner_result']['table'] = 'field_data_field_match_winner_result';
  $handler->display->display_options['fields']['field_match_winner_result']['field'] = 'field_match_winner_result';
  $handler->display->display_options['fields']['field_match_winner_result']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Result */
  $handler->display->display_options['fields']['field_match_loser_result']['id'] = 'field_match_loser_result';
  $handler->display->display_options['fields']['field_match_loser_result']['table'] = 'field_data_field_match_loser_result';
  $handler->display->display_options['fields']['field_match_loser_result']['field'] = 'field_match_loser_result';
  $handler->display->display_options['fields']['field_match_loser_result']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_match_date']['id'] = 'field_match_date';
  $handler->display->display_options['fields']['field_match_date']['table'] = 'field_data_field_match_date';
  $handler->display->display_options['fields']['field_match_date']['field'] = 'field_match_date';
  $handler->display->display_options['fields']['field_match_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_match_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Sort criterion: Content: Date (field_match_date) */
  $handler->display->display_options['sorts']['field_match_date_value']['id'] = 'field_match_date_value';
  $handler->display->display_options['sorts']['field_match_date_value']['table'] = 'field_data_field_match_date';
  $handler->display->display_options['sorts']['field_match_date_value']['field'] = 'field_match_date_value';
  $handler->display->display_options['sorts']['field_match_date_value']['order'] = 'DESC';
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
    'wp_match' => 'wp_match',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['wp_match_recent'] = $view;

  return $export;
}
