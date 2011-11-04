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

  // Exported menu link: main-menu:user
  $menu_links['main-menu:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Il mio programma',
    'options' => array(
      'attributes' => array(),
      'fragment' => 'schedule',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'user',
  );
  // Exported menu link: menu-footer-menu:evento
  $menu_links['menu-footer-menu:evento'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'evento',
    'router_path' => 'evento',
    'link_title' => 'Gli organizzatori',
    'options' => array(
      'attributes' => array(),
      'fragment' => 'owner',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/60',
  );
  // Exported menu link: menu-footer-menu:node/104
  $menu_links['menu-footer-menu:node/104'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/104',
    'router_path' => 'node/%',
    'link_title' => 'Press office',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/72',
  );
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
  // Exported menu link: menu-footer-menu:node/72
  $menu_links['menu-footer-menu:node/72'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/72',
    'router_path' => 'node/%',
    'link_title' => 'Contatti',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
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
  // Exported menu link: menu-footer-menu:node/98
  $menu_links['menu-footer-menu:node/98'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/98',
    'router_path' => 'node/%',
    'link_title' => 'La location',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/60',
  );
  // Exported menu link: menu-footer-menu:node/add/session
  $menu_links['menu-footer-menu:node/add/session'] = array(
    'menu_name' => 'menu-footer-menu',
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
    'weight' => '0',
    'parent_path' => 'user/register',
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
  // Exported menu link: menu-footer-menu:user/register
  $menu_links['menu-footer-menu:user/register'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Partecipa',
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
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contatti');
  t('Diventa sponsor');
  t('Gli organizzatori');
  t('Il mio programma');
  t('L\'evento');
  t('La location');
  t('Partecipa');
  t('Press office');
  t('Proponi un talk');
  t('Sponsor');
  t('Spread the word');


  return $menu_links;
}
