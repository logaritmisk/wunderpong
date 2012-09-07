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
  $items['rules_wp_match_process_player_0'] = entity_import('rules_config', '{ "rules_wp_match_process_player_0" : {
      "LABEL" : "wp_match_process_player_0",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "wp_match" : "wp_match" } }
          }
        },
        { "data_is" : {
            "data" : [ "node:field-match-results:0" ],
            "op" : "\\u003E",
            "value" : [ "node:field-match-results:1" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-match-winner" ],
            "value" : [ "node:field-match-players:0" ]
          }
        },
        { "data_set" : {
            "data" : [ "node:field-match-loser" ],
            "value" : [ "node:field-match-players:1" ]
          }
        }
      ]
    }
  }');
  $items['rules_wp_match_process_player_1'] = entity_import('rules_config', '{ "rules_wp_match_process_player_1" : {
      "LABEL" : "wp_match_process_player_1",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "wp_match" : "wp_match" } }
          }
        },
        { "data_is" : {
            "data" : [ "node:field-match-results:0" ],
            "op" : "\\u003C",
            "value" : [ "node:field-match-results:1" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-match-winner" ],
            "value" : [ "node:field-match-players:1" ]
          }
        },
        { "data_set" : {
            "data" : [ "node:field-match-loser" ],
            "value" : [ "node:field-match-players:0" ]
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
