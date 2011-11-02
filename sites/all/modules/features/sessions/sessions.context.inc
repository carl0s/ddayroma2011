<?php
/**
 * @file
 * sessions.context.inc
 */

/**
 * Implements hook_context_default_contexts().
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
    'path' => array(
      'values' => array(
        'sessioni/biz' => 'sessioni/biz',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-biz_description' => array(
          'module' => 'boxes',
          'delta' => 'biz_description',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-top' => array(
          'module' => 'menu',
          'delta' => 'menu-top',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'menu-menu-menu-biz' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-biz',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'menu-menu-menu-pa' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-pa',
          'region' => 'user_third',
          'weight' => '-10',
        ),
        'boxes-biz_block' => array(
          'module' => 'boxes',
          'delta' => 'biz_block',
          'region' => 'sidebar_first',
          'weight' => '-32',
        ),
        'views-sponsor-block_2' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_2',
          'region' => 'sidebar_first',
          'weight' => '-31',
        ),
        'views-sponsor-block_3' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_3',
          'region' => 'sidebar_first',
          'weight' => '-30',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'header_first',
          'weight' => '-34',
        ),
        'views-sponsor-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_1',
          'region' => 'header_first',
          'weight' => '-33',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'footer_second',
          'weight' => '-34',
        ),
        'boxes-social_block' => array(
          'module' => 'boxes',
          'delta' => 'social_block',
          'region' => 'footer_second',
          'weight' => '-33',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'pagina_track',
    ),
    'theme_html' => array(
      'class' => 'biz-page',
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
    'path' => array(
      'values' => array(
        'sessioni/code' => 'sessioni/code',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-code_description' => array(
          'module' => 'boxes',
          'delta' => 'code_description',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-top' => array(
          'module' => 'menu',
          'delta' => 'menu-top',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'menu-menu-menu-biz' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-biz',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'menu-menu-menu-pa' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-pa',
          'region' => 'user_third',
          'weight' => '-10',
        ),
        'boxes-join_button' => array(
          'module' => 'boxes',
          'delta' => 'join_button',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'boxes-code_block' => array(
          'module' => 'boxes',
          'delta' => 'code_block',
          'region' => 'sidebar_first',
          'weight' => '-32',
        ),
        'views-sponsor-block_2' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_2',
          'region' => 'sidebar_first',
          'weight' => '-31',
        ),
        'views-sponsor-block_3' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_3',
          'region' => 'sidebar_first',
          'weight' => '-30',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'header_first',
          'weight' => '-36',
        ),
        'views-sponsor-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_1',
          'region' => 'header_first',
          'weight' => '-35',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'footer_second',
          'weight' => '-12',
        ),
        'boxes-social_block' => array(
          'module' => 'boxes',
          'delta' => 'social_block',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'pagina_track',
    ),
    'theme_html' => array(
      'class' => 'code-page',
    ),
  );
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
    'path' => array(
      'values' => array(
        'sessioni/pa' => 'sessioni/pa',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-pa_description' => array(
          'module' => 'boxes',
          'delta' => 'pa_description',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-top' => array(
          'module' => 'menu',
          'delta' => 'menu-top',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'menu-menu-menu-biz' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-biz',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'menu-menu-menu-pa' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-pa',
          'region' => 'user_third',
          'weight' => '-10',
        ),
        'boxes-join_button' => array(
          'module' => 'boxes',
          'delta' => 'join_button',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'boxes-pa_block' => array(
          'module' => 'boxes',
          'delta' => 'pa_block',
          'region' => 'sidebar_first',
          'weight' => '-34',
        ),
        'views-sponsor-block_2' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_2',
          'region' => 'sidebar_first',
          'weight' => '-33',
        ),
        'views-sponsor-block_3' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_3',
          'region' => 'sidebar_first',
          'weight' => '-32',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'header_first',
          'weight' => '-34',
        ),
        'views-sponsor-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_1',
          'region' => 'header_first',
          'weight' => '-33',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'footer_second',
          'weight' => '-34',
        ),
        'boxes-social_block' => array(
          'module' => 'boxes',
          'delta' => 'social_block',
          'region' => 'footer_second',
          'weight' => '-33',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'pagina_track',
    ),
    'theme_html' => array(
      'class' => 'pa-page',
    ),
  );
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
