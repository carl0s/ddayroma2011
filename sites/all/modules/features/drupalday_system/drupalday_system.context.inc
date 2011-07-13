<?php
/**
 * @file
 * drupalday_system.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function drupalday_system_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'System';
  $context->description = 'System wide context';
  $context->tag = 'dday';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_first',
          'weight' => '-14',
        ),
        'system-management' => array(
          'module' => 'system',
          'delta' => 'management',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('System wide context');
  t('dday');
  $export['System'] = $context;

  return $export;
}
