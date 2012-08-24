<?php
/**
 * @file
 */


/**
 * Implements hook_form_FORM_ID_alter()
 */
function wunderpong_form_install_configure_form_alter(&$form, &$form_state) {
  array_unshift($form['#submit'], 'wunderpong_install_configure_form_submit');
}

/**
 * Override settings under installation.
 */
function wunderpong_install_configure_form_submit($form, &$form_state) {
  $form_state['values']['update_status_module'][1] = FALSE;
}
