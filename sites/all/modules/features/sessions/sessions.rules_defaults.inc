<?php
/**
 * @file
 * sessions.rules_defaults.inc
 */

/**
 * Implementation of hook_default_rules_configuration().
 */
function sessions_default_rules_configuration() {
  $items = array();
  $items['rules_approve_session'] = entity_import('rules_config', '{ "rules_approve_session" : {
      "LABEL" : "Approve Session",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_sessions_schedule_approve" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_session_status" } },
        { "OR" : [
            { "data_is" : { "data" : [ "flagged-node:field-session-status" ], "value" : "0" } },
            { "data_is" : { "data" : [ "flagged-node:field-session-status" ], "value" : "2" } }
          ]
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:field-session-status" ], "value" : "1" } }
      ]
    }
  }');
  $items['rules_defer_session'] = entity_import('rules_config', '{ "rules_defer_session" : {
      "LABEL" : "Defer Session",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_sessions_schedule_approve" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_session_status" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:field-session-status" ], "value" : "2" } }
      ]
    }
  }');
  return $items;
}
