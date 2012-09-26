<?php
/**
 * @file
 * wp_match.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wp_match_default_rules_configuration() {
  $items = array();
  $items['rules_wp_match_players'] = entity_import('rules_config', '{ "rules_wp_match_players" : {
      "LABEL" : "wp_match_players",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "wp_match" : "wp_match" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-match-players" ], "value" : { "value" : [] } } },
        { "list_add" : {
            "list" : [ "node:field-match-players" ],
            "item" : [ "node:field-match-winner-user" ]
          }
        },
        { "list_add" : {
            "list" : [ "node:field-match-players" ],
            "item" : [ "node:field-match-loser-user" ]
          }
        }
      ]
    }
  }');
  $items['rules_wp_match_redirect'] = entity_import('rules_config', '{ "rules_wp_match_redirect" : {
      "LABEL" : "wp_match_redirect",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "wp_match" : "wp_match" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "[site:url]" } } ]
    }
  }');
  return $items;
}
