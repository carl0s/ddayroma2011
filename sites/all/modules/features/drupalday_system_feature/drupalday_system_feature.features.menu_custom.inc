<?php
/**
 * @file
 * drupalday_system_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function drupalday_system_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-menu
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'The footer menu for the whole website
',
  );
  // Exported menu: menu-my-drupal-day
  $menus['menu-my-drupal-day'] = array(
    'menu_name' => 'menu-my-drupal-day',
    'title' => 'My Drupal Day',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Main menu');
  t('My Drupal Day');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The footer menu for the whole website
');


  return $menus;
}
