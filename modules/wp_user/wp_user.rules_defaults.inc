<?php
/**
 * @file
 * wp_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wp_user_default_rules_configuration() {
  $items = array();
  $items['rules_wp_user_redirect'] = entity_import('rules_config', '{ "rules_wp_user_redirect" : {
      "LABEL" : "wp_user_redirect",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "DO" : [ { "redirect" : { "url" : "[site:url]" } } ]
    }
  }');
  return $items;
}
