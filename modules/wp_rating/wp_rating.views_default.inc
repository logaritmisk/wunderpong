<?php
/**
 * @file
 * wp_rating.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wp_rating_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'wp_rating_rating';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'wp_rating_rating';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_user_rating' => 'field_user_rating',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_user_rating' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Rating */
  $handler->display->display_options['fields']['field_user_rating']['id'] = 'field_user_rating';
  $handler->display->display_options['fields']['field_user_rating']['table'] = 'field_data_field_user_rating';
  $handler->display->display_options['fields']['field_user_rating']['field'] = 'field_user_rating';
  $handler->display->display_options['fields']['field_user_rating']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_rating']['alter']['text'] = '[field_user_rating]%';
  $handler->display->display_options['fields']['field_user_rating']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_user_rating']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_user_rating']['delta_offset'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Player';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: User: Rating (field_user_rating) */
  $handler->display->display_options['sorts']['field_user_rating_value']['id'] = 'field_user_rating_value';
  $handler->display->display_options['sorts']['field_user_rating_value']['table'] = 'field_data_field_user_rating';
  $handler->display->display_options['sorts']['field_user_rating_value']['field'] = 'field_user_rating_value';
  $handler->display->display_options['sorts']['field_user_rating_value']['order'] = 'DESC';
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
    4 => '4',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['wp_rating_rating'] = $view;

  return $export;
}
