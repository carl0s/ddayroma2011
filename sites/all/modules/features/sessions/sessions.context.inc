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
  $context->name = 'sessioni_biz';
  $context->description = '';
  $context->tag = 'sessions';
  $context->conditions = array(
    'get' => array(
      'values' => array(
        'track=biz' => 'track=biz',
        'q=sessioni' => 'q=sessioni',
      ),
    ),
    'views' => array(
      'values' => array(
        'sessions_schedule' => 'sessions_schedule',
        'sessions_schedule:page' => 'sessions_schedule:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-biz_block' => array(
          'module' => 'boxes',
          'delta' => 'biz_block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_sitewide',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sessions');
  $export['sessioni_biz'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sessioni_code';
  $context->description = '';
  $context->tag = 'sessions';
  $context->conditions = array(
    'get' => array(
      'values' => array(
        'track=code' => 'track=code',
        'q=sessioni' => 'q=sessioni',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sessions');
  $export['sessioni_code'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sessioni_pa';
  $context->description = '';
  $context->tag = 'sessions';
  $context->conditions = array(
    'get' => array(
      'values' => array(
        'track=pa' => 'track=pa',
        'q=sessioni' => 'q=sessioni',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sessions');
  $export['sessioni_pa'] = $context;

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
