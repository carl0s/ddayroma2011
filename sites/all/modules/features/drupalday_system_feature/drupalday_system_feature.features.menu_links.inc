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

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:evento
  $menu_links['main-menu:evento'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'evento',
    'router_path' => 'evento',
    'link_title' => 'L\'evento',
    'options' => array(
      'attributes' => array(
        'id' => 'eventomenu',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:news
  $menu_links['main-menu:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/72',
  );
  // Exported menu link: main-menu:node/104
  $menu_links['main-menu:node/104'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/104',
    'router_path' => 'node/%',
    'link_title' => 'Press',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/72',
  );
  // Exported menu link: main-menu:node/116
  $menu_links['main-menu:node/116'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/116',
    'router_path' => 'node/%',
    'link_title' => 'Accomodation',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'evento',
  );
  // Exported menu link: main-menu:node/117
  $menu_links['main-menu:node/117'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/117',
    'router_path' => 'node/%',
    'link_title' => 'Perchè sponsorizzare il DrupalDay 2011',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'sponsor',
  );
  // Exported menu link: main-menu:node/59
  $menu_links['main-menu:node/59'] = array(
    'menu_name' => 'main-menu',
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
    'weight' => '-49',
    'parent_path' => 'sponsor',
  );
  // Exported menu link: main-menu:node/60
  $menu_links['main-menu:node/60'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/60',
    'router_path' => 'node/%',
    'link_title' => 'Cos’è un DrupalDay',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'evento',
  );
  // Exported menu link: main-menu:node/72
  $menu_links['main-menu:node/72'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/72',
    'router_path' => 'node/%',
    'link_title' => 'Contatti',
    'options' => array(
      'attributes' => array(
        'id' => 'contattimenu',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: main-menu:node/83
  $menu_links['main-menu:node/83'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/83',
    'router_path' => 'node/%',
    'link_title' => 'Spread the world',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/84
  $menu_links['main-menu:node/84'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/84',
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
    'weight' => '-49',
    'parent_path' => 'evento',
  );
  // Exported menu link: main-menu:node/98
  $menu_links['main-menu:node/98'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/98',
    'router_path' => 'node/%',
    'link_title' => 'Location',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'evento',
  );
  // Exported menu link: main-menu:node/add/session
  $menu_links['main-menu:node/add/session'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/session',
    'router_path' => 'node/add/session',
    'link_title' => 'Proponi una sessione',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'user',
  );
  // Exported menu link: main-menu:partecipanti
  $menu_links['main-menu:partecipanti'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'partecipanti',
    'router_path' => 'partecipanti',
    'link_title' => 'Partecipanti',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
  );
  // Exported menu link: main-menu:sessioni
  $menu_links['main-menu:sessioni'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sessioni',
    'router_path' => 'sessioni',
    'link_title' => 'Sessioni',
    'options' => array(
      'attributes' => array(
        'id' => 'sessionimenu',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:sessioni/biz
  $menu_links['main-menu:sessioni/biz'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sessioni/biz',
    'router_path' => 'sessioni/biz',
    'link_title' => 'Business',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'sessioni',
  );
  // Exported menu link: main-menu:sessioni/code
  $menu_links['main-menu:sessioni/code'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sessioni/code',
    'router_path' => 'sessioni/code',
    'link_title' => 'Code',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'sessioni',
  );
  // Exported menu link: main-menu:sessioni/pa
  $menu_links['main-menu:sessioni/pa'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sessioni/pa',
    'router_path' => 'sessioni/pa',
    'link_title' => 'PA',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'sessioni',
  );
  // Exported menu link: main-menu:sponsor
  $menu_links['main-menu:sponsor'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sponsor',
    'router_path' => 'sponsor',
    'link_title' => 'Sponsor',
    'options' => array(
      'attributes' => array(
        'id' => 'sponsormenu',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
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
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: main-menu:user/logout
  $menu_links['main-menu:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'user',
  );
  // Exported menu link: main-menu:user/register
  $menu_links['main-menu:user/register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Iscriviti',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
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
  t('Accomodation');
  t('Business');
  t('Code');
  t('Contatti');
  t('Cos’è un DrupalDay');
  t('Diventa sponsor');
  t('Gli organizzatori');
  t('Home');
  t('Iscriviti');
  t('L\'evento');
  t('La location');
  t('Location');
  t('Logout');
  t('My drupalday');
  t('News');
  t('PA');
  t('Partecipa');
  t('Partecipanti');
  t('Perchè sponsorizzare il DrupalDay 2011');
  t('Press');
  t('Press office');
  t('Proponi un talk');
  t('Proponi una sessione');
  t('Sessioni');
  t('Sponsor');
  t('Spread the word');
  t('Spread the world');


  return $menu_links;
}
