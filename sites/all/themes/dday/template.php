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
  if ($block->module == 'block' && $block->bid == 'block-boxes-join-button') {
    if (module_exists('drupalday_system_feature')) {
      $count_users_tot = drupalday_system_feature_user_count();
      // prepend user cached user count
      $vars['content'] = '<span class="user_counter baloon"> '. $count_users_tot .' </span>' . $vars['content'];
    }
  }
}
