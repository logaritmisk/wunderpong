<?php
/**
 * @file
 */


/**
 *
 */
$plugin = array(
  'title' => t('User login'),
  'description' => t('The user login form.'),
  'category' => t('Wunderpong'),
);

/**
 * Render the custom content type.
 */
function wp_general_user_login_form_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->module = 'user_login_form';
  $block->title = t('User login');
  $block->content = drupal_get_form('user_login');

  return $block;
}

/**
 * Returns the administrative title for a type.
 */
function wp_general_user_login_form_content_type_admin_title($subtype, $conf, $context) {
  return t('User login form');
}
