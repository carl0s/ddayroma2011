<?php
/**
 * @file
 * sessions.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function sessions_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sessions_create';
  $context->description = '';
  $context->tag = 'sessions';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/add/session' => 'node/add/session',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-sessions_info' => array(
          'module' => 'boxes',
          'delta' => 'sessions_info',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sessions');
  $export['sessions_create'] = $context;

  return $export;
}
