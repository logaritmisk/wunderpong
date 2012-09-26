<?php
/**
 * @file
 * wp_match.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wp_match_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_match_loser|node|wp_match|form';
  $field_group->group_name = 'group_match_loser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wp_match';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Loser',
    'weight' => '2',
    'children' => array(
      0 => 'field_match_loser_user',
      1 => 'field_match_loser_result',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Loser',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-match-loser field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_match_loser|node|wp_match|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_match_winner|node|wp_match|form';
  $field_group->group_name = 'group_match_winner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wp_match';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Winner',
    'weight' => '1',
    'children' => array(
      0 => 'field_match_winner_user',
      1 => 'field_match_winner_result',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Winner',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-match-winner field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_match_winner|node|wp_match|form'] = $field_group;

  return $export;
}
