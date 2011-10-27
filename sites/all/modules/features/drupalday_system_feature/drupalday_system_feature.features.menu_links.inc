<?php
/**
 * @file
 * drupalday_system_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drupalday_system_feature_menu_default_menu_links() {
  $menu_links = array();

<<<<<<< HEAD
<<<<<<< HEAD
  // Exported menu link: main-menu:user
  $menu_links['main-menu:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My drupalday',
    'options' => array(
      'attributes' => array(
        'id' => 'mydrupalday',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
  );
=======
>>>>>>> 2131171... attendees
=======
>>>>>>> 2131171... attendees
  // Exported menu link: menu-footer-menu:node/59
  $menu_links['menu-footer-menu:node/59'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
    'link_title' => 'Diventa sponsor',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'sponsor',
  );
  // Exported menu link: menu-footer-menu:node/60
  $menu_links['menu-footer-menu:node/60'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/60',
    'router_path' => 'node/%',
    'link_title' => 'L\'evento',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'no-link',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Exported menu link: menu-footer-menu:node/83
  $menu_links['menu-footer-menu:node/83'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/83',
    'router_path' => 'node/%',
    'link_title' => 'Spread the word',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/60',
  );
  // Exported menu link: menu-footer-menu:sponsor
  $menu_links['menu-footer-menu:sponsor'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'sponsor',
    'router_path' => 'sponsor',
    'link_title' => 'Sponsor',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
  );
  // Exported menu link: menu-my-drupal-day:node/add/session
  $menu_links['menu-my-drupal-day:node/add/session'] = array(
    'menu_name' => 'menu-my-drupal-day',
    'link_path' => 'node/add/session',
    'router_path' => 'node/add/session',
    'link_title' => 'Proponi un talk',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-my-drupal-day:user
  $menu_links['menu-my-drupal-day:user'] = array(
    'menu_name' => 'menu-my-drupal-day',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'il tuo profilo',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Diventa sponsor');
  t('L\'evento');
<<<<<<< HEAD
<<<<<<< HEAD
  t('My drupalday');
  t('Proponi un talk');
=======
>>>>>>> 2131171... attendees
=======
>>>>>>> 2131171... attendees
  t('Sponsor');
  t('Spread the word');
  t('il tuo profilo');


  return $menu_links;
}
