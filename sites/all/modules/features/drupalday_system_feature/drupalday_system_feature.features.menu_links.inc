<?php
/**
 * @file
 * drupalday_system_feature.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function drupalday_system_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu:<front>
  $menu_links['menu-footer-menu:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
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
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
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
  // Exported menu link: menu-footer-menu:node/85
  $menu_links['menu-footer-menu:node/85'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/85',
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
  // Exported menu link: menu-footer-menu:node/86
  $menu_links['menu-footer-menu:node/86'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/86',
    'router_path' => 'node/%',
    'link_title' => 'Gli organizzatori',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Diventa sponsor');
  t('Gli organizzatori');
  t('L\'evento');
  t('La location');
  t('Partecipa');
  t('Sponsor');
  t('Spread the word');


  return $menu_links;
}
