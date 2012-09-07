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
  $block->content = drupal_get_form('wp_general_user_login');

  return $block;
}

/**
 * Returns the administrative title for a type.
 */
function wp_general_user_login_form_content_type_admin_title($subtype, $conf, $context) {
  return t('User login form');
}

/**
 * Our own user_login form.
 */
function wp_general_user_login($form, &$form_state) {
  // Display login form:
  $form['mail'] = array(
    '#type' => 'textfield',
    '#title' => t('Mail'),
    '#description' => t('Enter your mail address.'),
    '#size' => 60,
    '#required' => TRUE,
  );

  $form['pass'] = array(
    '#type' => 'password',
    '#title' => t('Password'),
    '#description' => t('Enter your password.'),
    '#required' => TRUE,
  );

  $form['#validate'] = user_login_default_validators();
  array_unshift($form['#validate'], 'wp_general_user_login_validate');

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Log in'),
    '#submit' => array('user_login_submit'),
  );

  return $form;
}

/**
 * Custom validate for user_login that gets user name from mail address.
 */
function wp_general_user_login_validate($form, &$form_state) {
  $account = db_query("SELECT * FROM {users} WHERE mail = :mail AND status = 1", array(':mail' => $form_state['values']['mail']))->fetchObject();

  if ($account) {
    $form_state['values']['name'] = $account->name;
  }
}
