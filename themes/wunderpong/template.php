<?php

/**
 * Change the default meta content-type tag to the shorter HTML5 version.
 */
function wunderpong_html_head_alter(&$head_elements) {
  // Unset meta variables.
  unset($head_elements['system_meta_generator']);
    foreach ($head_elements as $key => $element) {
    if (isset($element['#attributes']['rel']) && $element['#attributes']['rel'] == 'shortlink') {
      unset($head_elements[$key]);
    }
    $head_elements['system_meta_content_type']['#attributes'] = array(
      'charset' => 'utf-8',
    );
  }
}

/**
 * Process variables for the html tag.
 */
function wunderpong_process_html_tag(&$vars) {
  $tag = &$vars['element'];
  if ($tag['#tag'] == 'style' || $tag['#tag'] == 'script') {
    // Remove redundant type attribute and CDATA comments.
    unset($tag['#attributes']['type'], $tag['#value_prefix'], $tag['#value_suffix']);

    // Remove media="all" but leave others unaffected.
    if (isset($tag['#attributes']['media']) && $tag['#attributes']['media'] === 'all') {
      unset($tag['#attributes']['media']);
    }
  }
}

/**
 * Modify the Panels default output to remove the panel separator.
 */
function wunderpong_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode($vars['panes']);
  return $output;
}

/**
 * Override of theme_field().
 */
function wunderpong_field($vars) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$vars['label_hidden']) {
    $output .= '<h5' . $vars['title_attributes'] . '>' . $vars['label'] . ':</h5>';
  }

  // Render the items.
  foreach ($vars['items'] as $delta => $item) {
    $classes = 'item';
    $output .= '<div class="' . $classes . '">' . drupal_render($item) . '</div>';
  }

  $output = '<div class="' . $vars['classes'] . '"' . $vars['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Override of theme_menu_tree().
 */
function wunderpong_menu_tree($variables) {
  return '<ul class="clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Override of theme_filter_guidelines().
 */
function wunderpong_filter_tips() {
  return '';
}

function wunderpong_filter_tips_more_info() {
  return '';
}

/**
 * Override of theme_menu_local_tasks().
 */
function wunderpong_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Process variables for menu-block-wrapper.tpl.php.
 */
function wunderpong_preprocess_menu_block_wrapper(&$vars) {
  unset($vars['classes_array']);
  $vars['classes_array'][] = $vars['config']['menu_name'];
  $vars['classes_array'][] = 'level-' . $vars['config']['level'];
}

/**
 * Override of theme_textarea().
 */
function wunderpong_textarea($variables) {
  // Remove resizable textareas.
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'cols', 'rows'));
  _form_set_class($element, array('form-textarea'));

  $output = '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
  return $output;
}
