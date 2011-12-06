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
      "ACTIVE" : false,
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
      "ACTIVE" : false,
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
        { "drupal_message" : { "message" : "Grazie per il tuo contributo [node:author]!\\r\\nLa tua proposta di sessione verr\\u00e0 valutata dal nostro comitato scientifico, al pi\\u00f9 presto ti faremo sapere il risultato.\\r\\n\\r\\nRicordati che puoi verificare sempre lo stato della tua sessione dalla tua pagina profilo a questo indirizzo:\\r\\n\\u003ca href=\\"[site:url]user\\/[node:author:uid]\\/sessions\\"\\u003e[site:url]user\\/[node:author:uid]\\/sessions\\u003c\\/a\\u003e\\r\\n\\r\\n" } },
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
