<?php
/**
 * @file
 * sessions.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
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
  $items['rules_session_create'] = entity_import('rules_config', '{ "rules_session_create" : {
      "LABEL" : "Session Create",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "AND" : [
            { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "2" : "2" } } } },
            { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "session" : "session" } } } }
          ]
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Thanks for your contribution [node:author]!\\r\\nYour sessions will be reviewed by our team as soon as possible, you will receive a notification when it will be approved or not.\\r\\n\\r\\nRemember that your uploaded session are listed in your profile: \\u003ca href=\\"[node:author:url]\\/sessions\\"\\u003e[node:author:url]\\/sessions\\u003c\\/a\\u003e" } },
        { "redirect" : { "url" : "\\u003cfront\\u003e" } },
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "[[site:name]] A new session has been uploaded.",
            "message" : "Dear \\"[site:name]\\" site administrators,\\r\\n\\r\\nA new session has been uploaded by: \\"[node:author]\\" ([node:author:url])\\r\\n\\r\\nSession: [node:url]\\r\\n\\r\\nEdit: [node:edit-url]\\r\\n\\r\\nApprove: [site:url]admin\\/sessions\\r\\n\\r\\nSincerely yours, \\r\\n[site:name]"
          }
        }
      ]
    }
  }');
  return $items;
}
