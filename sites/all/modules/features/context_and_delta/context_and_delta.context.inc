<?php
/**
 * @file
 * context_and_delta.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_and_delta_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'attendees';
  $context->description = '';
  $context->tag = 'attendees context';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'attendees:page' => 'attendees:page',
        'attendees:page_1' => 'attendees:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
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
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('attendees context');
  $export['attendees'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'homepage context';
  $context->tag = 'homepage context';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'home' => 'home',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-call_for_paper' => array(
          'module' => 'boxes',
          'delta' => 'call_for_paper',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-attendees-block' => array(
          'module' => 'views',
          'delta' => 'attendees-block',
          'region' => 'content',
          'weight' => '1',
        ),
        'menu-menu-top' => array(
          'module' => 'menu',
          'delta' => 'menu-top',
          'region' => 'user_first',
          'weight' => '0',
        ),
        'menu-menu-menu-biz' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-biz',
          'region' => 'user_second',
          'weight' => '0',
        ),
        'menu-menu-menu-pa' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-pa',
          'region' => 'user_third',
          'weight' => '0',
        ),
        'boxes-join_button' => array(
          'module' => 'boxes',
          'delta' => 'join_button',
          'region' => 'branding',
          'weight' => '0',
        ),
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'sidebar_first',
          'weight' => '-36',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'header_first',
          'weight' => '0',
        ),
        'views-sponsor-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_1',
          'region' => 'header_first',
          'weight' => '1',
        ),
        'boxes-code' => array(
          'module' => 'boxes',
          'delta' => 'code',
          'region' => 'preface_first',
          'weight' => '0',
        ),
        'boxes-biz' => array(
          'module' => 'boxes',
          'delta' => 'biz',
          'region' => 'preface_second',
          'weight' => '0',
        ),
        'boxes-pa' => array(
          'module' => 'boxes',
          'delta' => 'pa',
          'region' => 'preface_third',
          'weight' => '0',
        ),
        'views-sponsor-block_2' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_2',
          'region' => 'preface_fourth',
          'weight' => '0',
        ),
        'views-sponsor-block_3' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_3',
          'region' => 'postscript_first',
          'weight' => '0',
        ),
        'views-owner-block' => array(
          'module' => 'views',
          'delta' => 'owner-block',
          'region' => 'postscript_second',
          'weight' => '0',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '0',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'footer_second',
          'weight' => '0',
        ),
        'boxes-social_block' => array(
          'module' => 'boxes',
          'delta' => 'social_block',
          'region' => 'footer_second',
          'weight' => '1',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'clone_of_sitewide',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('homepage context');
  $export['homepage'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press';
  $context->description = 'press context, with news, mailchimp block and page-press';
  $context->tag = 'press context';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'press' => 'press',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'pagina_track',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('press context');
  t('press context, with news, mailchimp block and page-press');
  $export['press'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = 'Sitewide Context';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~homepage' => '~homepage',
        '~sponsor' => '~sponsor',
        '~sessioni_code' => '~sessioni_code',
        '~sessioni_biz' => '~sessioni_biz',
        '~sessioni_pa' => '~sessioni_pa',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'menu-menu-top' => array(
          'module' => 'menu',
          'delta' => 'menu-top',
          'region' => 'user_first',
          'weight' => '0',
        ),
        'menu-menu-menu-biz' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-biz',
          'region' => 'user_second',
          'weight' => '0',
        ),
        'menu-menu-menu-pa' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-pa',
          'region' => 'user_third',
          'weight' => '0',
        ),
        'boxes-join_button' => array(
          'module' => 'boxes',
          'delta' => 'join_button',
          'region' => 'branding',
          'weight' => '0',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'header_first',
          'weight' => '0',
        ),
        'views-sponsor-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_1',
          'region' => 'header_first',
          'weight' => '1',
        ),
        'views-sponsor-block_2' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_2',
          'region' => 'preface_fourth',
          'weight' => '-10',
        ),
        'views-sponsor-block_3' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_3',
          'region' => 'postscript_first',
          'weight' => '0',
        ),
        'views-owner-block' => array(
          'module' => 'views',
          'delta' => 'owner-block',
          'region' => 'postscript_second',
          'weight' => '0',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '0',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'footer_second',
          'weight' => '0',
        ),
        'boxes-social_block' => array(
          'module' => 'boxes',
          'delta' => 'social_block',
          'region' => 'footer_second',
          'weight' => '1',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'sitewide',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide Context');
  $export['sitewide'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsor';
  $context->description = 'Sponsor context';
  $context->tag = 'Sponsor';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sponsor' => 'sponsor',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
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
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'views-sponsor-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsor-block_1',
          'region' => 'header_first',
          'weight' => '0',
        ),
        'views-diventa_sponsor-block' => array(
          'module' => 'views',
          'delta' => 'diventa_sponsor-block',
          'region' => 'postscript_second',
          'weight' => '-10',
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
          'weight' => '-31',
        ),
        'boxes-social_block' => array(
          'module' => 'boxes',
          'delta' => 'social_block',
          'region' => 'footer_second',
          'weight' => '-30',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'no_sponsor',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sponsor');
  t('Sponsor context');
  $export['sponsor'] = $context;

  return $export;
}
