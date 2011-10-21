<?php
/**
 * @file
 * drupalday_system_feature.features.menu_custom.inc
 */

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function drupalday_system_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'The footer menu for the whole website
',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('The footer menu for the whole website
');


  return $menus;
}
