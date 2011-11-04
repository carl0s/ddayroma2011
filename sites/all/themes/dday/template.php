<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function dday_preprocess_block(&$vars) {
  $block = $vars['block'];
  //  block_id_1 = logo block
  if ($block -> module == 'boxes' && $block -> bid == 'boxes-join_button') {
    if (module_exists('drupalday_system_feature')) {
      $count_users_tot = drupalday_system_feature_user_count();
      // prepend user cached user count
      $vars['content'] = '<div class="user-count-number"><div class="wrapper">' . $count_users_tot . '<br /><span>iscritti</span></div></div>' . $vars['content'];
    }
  }
}

function dday_preprocess_links(&$vars) {// kpr($vars);
  global $user;

  if (isset($vars['links']['menu-435']) || isset($vars['links']['menu-435 active-trail'])) {
    if ($user -> uid > 0) {
      unset($vars['links']['menu-435']);
      unset($vars['links']['menu-435 active-trail']);
    } else {
      $vars['links']['menu-435']['title'] .= theme('render_drupalday_system_feature_user_count');
      $vars['links']['menu-435']['html'] = true;
    }
  }

  if (isset($vars['links']['menu-1286']) || isset($vars['links']['menu-1286 active-trail'])) {
    if ($user -> uid == 0) {
      unset($vars['links']['menu-1286']);
      unset($vars['links']['menu-1286 active-trail']);
    }
  }
}

function dday_views_pre_render(&$view) {
  if($view->name == 'skills') {
    $term = taxonomy_term_load($view->args[0]);
    drupal_set_title('Skill: ' . $term->name);
  } 
}

