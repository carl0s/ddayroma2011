<?php
/**
 * @file
 * sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sessions_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'sessions_administration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions Administration';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions Administration';
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_session_status' => 'field_session_status',
    'name' => 'name',
    'ops' => 'ops',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_session_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  $handler->display->display_options['style_options']['empty_table'] = 1;
  /* Relazione: Flags: sessions_schedule_approve */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'sessions_schedule_approve';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Contenuto: Status */
  $handler->display->display_options['fields']['field_session_status']['id'] = 'field_session_status';
  $handler->display->display_options['fields']['field_session_status']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['fields']['field_session_status']['field'] = 'field_session_status';
  $handler->display->display_options['fields']['field_session_status']['label'] = 'Current status';
  $handler->display->display_options['fields']['field_session_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_status']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_status']['field_api_classes'] = 0;
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Created by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Campo: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Azioni';
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['external'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['html'] = 0;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['ops']['hide_empty'] = 0;
  $handler->display->display_options['fields']['ops']['empty_zero'] = 0;
  $handler->display->display_options['fields']['ops']['hide_alter_empty'] = 0;
  /* Campo: Contenuto: Data di inserimento */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Criterio di ordinamento: Contenuto: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Contenuto: Status */
  $handler->display->display_options['fields']['field_session_status']['id'] = 'field_session_status';
  $handler->display->display_options['fields']['field_session_status']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['fields']['field_session_status']['field'] = 'field_session_status';
  $handler->display->display_options['fields']['field_session_status']['label'] = 'Current status';
  $handler->display->display_options['fields']['field_session_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_status']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_status']['field_api_classes'] = 0;
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Created by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Campo: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Azioni';
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['external'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['html'] = 0;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['ops']['hide_empty'] = 0;
  $handler->display->display_options['fields']['ops']['empty_zero'] = 0;
  $handler->display->display_options['fields']['ops']['hide_alter_empty'] = 0;
  /* Campo: Contenuto: Data di inserimento */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['path'] = 'admin/sessions';
  $translatables['sessions_administration'] = array(
    t('Master'),
    t('Sessions Administration'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('flag'),
    t('autore'),
    t('Session name'),
    t('Current status'),
    t('Created by'),
    t('Azioni'),
    t('Data di inserimento'),
    t('Page'),
  );
  $export['sessions_administration'] = $view;

  $view = new view;
  $view->name = 'sessions_schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions Schedule';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Drupal Day Roma 2011 - Sessions Schedule';
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'title' => 'title',
    'field_session_presenters' => 'title',
    'field_session_room' => 'field_session_room',
    'field_session_track' => 'field_session_track',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
    ),
    'field_session_presenters' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_session_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_session_track' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Intestazione: Globale: Area di testo */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Il <strong>Call For Paper</strong> è ancora aperta <strong>fino al 19 novembre</strong>.

Aiutaci a dare un taglio diverso e <em>open</em> a questa giornata proponendo talk che favoriscano il dialogo tra le diverse aree professionali, tra sviluppatori, business manager e comunicatori per sottolineare la versatilità di Drupal.

La submission delle proposte è semplice, compila il form nella sezione "Proponi un talk" e allega l\'eventuale documentazione aggiuntiva.

<em><strong>A partire dal 21 novembre potrai trovare qui tutte le sessioni scelte per il Drupal Day Roma 2011.</em></strong>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Non ci sono ancora sessioni in questa track. <a href="/node/add/session" class="button">proponi una sessione</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relazione: Contenuto: Time Slot (field_session_timeslot) */
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['id'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['table'] = 'field_data_field_session_timeslot';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['field'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['delta'] = '-1';
  /* Relazione: Flags: session_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'session_schedule';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relazione: Contenuto: Speaker(s) (field_session_presenters) */
  $handler->display->display_options['relationships']['field_session_presenters_uid']['id'] = 'field_session_presenters_uid';
  $handler->display->display_options['relationships']['field_session_presenters_uid']['table'] = 'field_data_field_session_presenters';
  $handler->display->display_options['relationships']['field_session_presenters_uid']['field'] = 'field_session_presenters_uid';
  /* Campo: Contenuto: Date and Time */
  $handler->display->display_options['fields']['field_slot_date']['id'] = 'field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['table'] = 'field_data_field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['field'] = 'field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['relationship'] = 'field_session_timeslot_nid';
  $handler->display->display_options['fields']['field_slot_date']['label'] = '';
  $handler->display->display_options['fields']['field_slot_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slot_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slot_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slot_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slot_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slot_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['settings'] = array(
    'format_type' => 'hour',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_slot_date']['field_api_classes'] = 0;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Contenuto: Speaker(s) */
  $handler->display->display_options['fields']['field_session_presenters']['id'] = 'field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['table'] = 'field_data_field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['field'] = 'field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['label'] = '';
  $handler->display->display_options['fields']['field_session_presenters']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_presenters']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['delta_limit'] = '5';
  $handler->display->display_options['fields']['field_session_presenters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_presenters']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['field_api_classes'] = 0;
  /* Campo: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['external'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['html'] = 0;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['ops']['hide_empty'] = 0;
  $handler->display->display_options['fields']['ops']['empty_zero'] = 0;
  $handler->display->display_options['fields']['ops']['hide_alter_empty'] = 0;
  /* Campo: Contenuto: Room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  /* Criterio di ordinamento: Contenuto: Date and Time (field_slot_date) */
  $handler->display->display_options['sorts']['field_slot_date_value']['id'] = 'field_slot_date_value';
  $handler->display->display_options['sorts']['field_slot_date_value']['table'] = 'field_data_field_slot_date';
  $handler->display->display_options['sorts']['field_slot_date_value']['field'] = 'field_slot_date_value';
  $handler->display->display_options['sorts']['field_slot_date_value']['relationship'] = 'field_session_timeslot_nid';
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: All Sessions */
  $handler = $view->new_display('page', 'All Sessions', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessioni';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'field_session_track_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Timeslot */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_session_timeslot_nid';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Timeslot';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<span>[title_1]</span>';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Contenuto: Speaker(s) */
  $handler->display->display_options['fields']['field_session_presenters']['id'] = 'field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['table'] = 'field_data_field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['field'] = 'field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['label'] = '';
  $handler->display->display_options['fields']['field_session_presenters']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['text'] = 'di [field_session_presenters] ';
  $handler->display->display_options['fields']['field_session_presenters']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_presenters']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_presenters']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['field_api_classes'] = 0;
  /* Campo: Contenuto: Room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['label'] = '';
  $handler->display->display_options['fields']['field_session_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_room']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_room']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_room']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_room']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_room']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_room']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_room']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_room']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_session_room']['field_api_classes'] = 0;
  /* Campo: Contenuto: Traccia */
  $handler->display->display_options['fields']['field_session_track']['id'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_track']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_track']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_track']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_track']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_session_track']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_track']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_track']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_track']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_track']['field_api_classes'] = 0;
  /* Campo: Globale: Testo personalizzato */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="session">
  <h2>[title]</h2>
  <h3>di [field_session_presenters] - [field_session_room]</h3>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Campo: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['external'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['html'] = 0;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['ops']['hide_empty'] = 0;
  $handler->display->display_options['fields']['ops']['empty_zero'] = 0;
  $handler->display->display_options['fields']['ops']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Criterio del filtro: Contenuto: Traccia (field_session_track) */
  $handler->display->display_options['filters']['field_session_track_value']['id'] = 'field_session_track_value';
  $handler->display->display_options['filters']['field_session_track_value']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['filters']['field_session_track_value']['field'] = 'field_session_track_value';
  $handler->display->display_options['filters']['field_session_track_value']['value'] = array(
    'biz' => 'biz',
    'code' => 'code',
    'pa' => 'pa',
  );
  $handler->display->display_options['filters']['field_session_track_value']['group'] = 0;
  $handler->display->display_options['filters']['field_session_track_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_track_value']['expose']['operator_id'] = 'field_session_track_value_op';
  $handler->display->display_options['filters']['field_session_track_value']['expose']['label'] = 'Tracce';
  $handler->display->display_options['filters']['field_session_track_value']['expose']['operator'] = 'field_session_track_value_op';
  $handler->display->display_options['filters']['field_session_track_value']['expose']['identifier'] = 'track';
  $handler->display->display_options['filters']['field_session_track_value']['expose']['reduce'] = 1;
  /* Criterio del filtro: Contenuto: Status (field_session_status) */
  $handler->display->display_options['filters']['field_session_status_value']['id'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['filters']['field_session_status_value']['field'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'sessioni';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sessioni';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Sessioni';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: 2 Luglio */
  $handler = $view->new_display('page', '2 Luglio', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessioni Lunedi 2 Luglio';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'field_session_track_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Date and Time */
  $handler->display->display_options['fields']['field_slot_date']['id'] = 'field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['table'] = 'field_data_field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['field'] = 'field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['relationship'] = 'field_session_timeslot_nid';
  $handler->display->display_options['fields']['field_slot_date']['label'] = '';
  $handler->display->display_options['fields']['field_slot_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slot_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slot_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slot_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slot_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slot_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['settings'] = array(
    'format_type' => 'schedule_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_slot_date']['field_api_classes'] = 0;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Contenuto: Speaker(s) */
  $handler->display->display_options['fields']['field_session_presenters']['id'] = 'field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['table'] = 'field_data_field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['field'] = 'field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['label'] = '';
  $handler->display->display_options['fields']['field_session_presenters']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_presenters']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['delta_limit'] = '5';
  $handler->display->display_options['fields']['field_session_presenters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_presenters']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['field_api_classes'] = 0;
  /* Campo: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['external'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['html'] = 0;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['ops']['hide_empty'] = 0;
  $handler->display->display_options['fields']['ops']['empty_zero'] = 0;
  $handler->display->display_options['fields']['ops']['hide_alter_empty'] = 0;
  /* Campo: Contenuto: Room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['label'] = '';
  $handler->display->display_options['fields']['field_session_room']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_room']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_room']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_room']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_room']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_room']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_room']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_room']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_session_room']['field_api_classes'] = 0;
  /* Campo: Contenuto: Traccia */
  $handler->display->display_options['fields']['field_session_track']['id'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['label'] = '';
  $handler->display->display_options['fields']['field_session_track']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_track']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_track']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_track']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_track']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_track']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_track']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_track']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Criterio del filtro: Contenuto: Traccia (field_session_track) */
  $handler->display->display_options['filters']['field_session_track_value']['id'] = 'field_session_track_value';
  $handler->display->display_options['filters']['field_session_track_value']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['filters']['field_session_track_value']['field'] = 'field_session_track_value';
  $handler->display->display_options['filters']['field_session_track_value']['value'] = array(
    'all' => 'all',
    'code' => 'code',
    'pa' => 'pa',
    'biz' => 'biz',
  );
  $handler->display->display_options['filters']['field_session_track_value']['group'] = 0;
  $handler->display->display_options['filters']['field_session_track_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_track_value']['expose']['operator_id'] = 'field_session_track_value_op';
  $handler->display->display_options['filters']['field_session_track_value']['expose']['label'] = 'Show Track';
  $handler->display->display_options['filters']['field_session_track_value']['expose']['operator'] = 'field_session_track_value_op';
  $handler->display->display_options['filters']['field_session_track_value']['expose']['identifier'] = 'track';
  $handler->display->display_options['filters']['field_session_track_value']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_session_track_value']['expose']['reduce'] = 1;
  /* Criterio del filtro: Contenuto: Date and Time (field_slot_date) */
  $handler->display->display_options['filters']['field_slot_date_value']['id'] = 'field_slot_date_value';
  $handler->display->display_options['filters']['field_slot_date_value']['table'] = 'field_data_field_slot_date';
  $handler->display->display_options['filters']['field_slot_date_value']['field'] = 'field_slot_date_value';
  $handler->display->display_options['filters']['field_slot_date_value']['relationship'] = 'field_session_timeslot_nid';
  $handler->display->display_options['filters']['field_slot_date_value']['value']['value'] = '2011-07-02';
  $handler->display->display_options['filters']['field_slot_date_value']['granularity'] = 'day';
  $handler->display->display_options['filters']['field_slot_date_value']['form_type'] = 'date_select';
  $handler->display->display_options['filters']['field_slot_date_value']['default_date'] = '';
  $handler->display->display_options['filters']['field_slot_date_value']['default_to_date'] = '';
  $handler->display->display_options['filters']['field_slot_date_value']['year_range'] = '-3:+3';
  $handler->display->display_options['filters']['field_slot_date_value']['add_delta'] = '';
  /* Criterio del filtro: Contenuto: Status (field_session_status) */
  $handler->display->display_options['filters']['field_session_status_value']['id'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['filters']['field_session_status_value']['field'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'conference/monday';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Lunedi 2 Luglio';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Sessions';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'sessions-schedule.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: User's schedule */
  $handler = $view->new_display('page', 'User\'s schedule', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Il tuo programma';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_session_presenters' => 'field_session_presenters',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_session_presenters' => array(
      'align' => '',
      'separator' => '',
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Non hai ancora nessuna sessione in programma, puoi aggiungere <a href="/sessioni">da qui</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Contenuto: Time Slot (field_session_timeslot) */
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['id'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['table'] = 'field_data_field_session_timeslot';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['field'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['delta'] = '-1';
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relazione: Flags: session_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'session_schedule';
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Contenuto: Date and Time */
  $handler->display->display_options['fields']['field_slot_date']['id'] = 'field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['table'] = 'field_data_field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['field'] = 'field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['relationship'] = 'field_session_timeslot_nid';
  $handler->display->display_options['fields']['field_slot_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slot_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slot_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_slot_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slot_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slot_date']['settings'] = array(
    'format_type' => 'schedule_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_slot_date']['field_api_classes'] = 0;
  /* Campo: Contenuto: Speaker(s) */
  $handler->display->display_options['fields']['field_session_presenters']['id'] = 'field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['table'] = 'field_data_field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['field'] = 'field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['label'] = 'Presenter';
  $handler->display->display_options['fields']['field_session_presenters']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['delta_limit'] = '5';
  $handler->display->display_options['fields']['field_session_presenters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_presenters']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['field_api_classes'] = 0;
  /* Campo: Contenuto: Room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_room']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_room']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_room']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_room']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_room']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_room']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_room']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_room']['field_api_classes'] = 0;
  /* Campo: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Azione';
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['external'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['html'] = 0;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['ops']['hide_empty'] = 0;
  $handler->display->display_options['fields']['ops']['empty_zero'] = 0;
  $handler->display->display_options['fields']['ops']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'user/%/schedule';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Programma Sessioni';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: User's sessions */
  $handler = $view->new_display('page', 'User\'s sessions', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Your submitted sessions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_session_status' => 'field_session_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_session_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Non ci sono sessioni, se vuoi proporne una <a href="/node/add/session">clicca qui.</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Contenuto: Status */
  $handler->display->display_options['fields']['field_session_status']['id'] = 'field_session_status';
  $handler->display->display_options['fields']['field_session_status']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['fields']['field_session_status']['field'] = 'field_session_status';
  $handler->display->display_options['fields']['field_session_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['text'] = '[field_session_status-value]';
  $handler->display->display_options['fields']['field_session_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_status']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_status']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Contenuto: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Utente: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['uid']['title'] = 'Sessioni proposte di %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['path'] = 'user/%/sessions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Sessioni proposte';
  $handler->display->display_options['menu']['description'] = 'User\'s sessions';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Ultime sessioni accettate */
  $handler = $view->new_display('block', 'Ultime sessioni accettate', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ultime Sessioni accettate';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'picture' => 0,
    'field_user_twitter' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'picture' => 0,
    'field_user_twitter' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Contenuto: Time Slot (field_session_timeslot) */
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['id'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['table'] = 'field_data_field_session_timeslot';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['field'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['delta'] = '-1';
  /* Relazione: Flags: session_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'session_schedule';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relazione: Contenuto: Speaker(s) (field_session_presenters) */
  $handler->display->display_options['relationships']['field_session_presenters_uid']['id'] = 'field_session_presenters_uid';
  $handler->display->display_options['relationships']['field_session_presenters_uid']['table'] = 'field_data_field_session_presenters';
  $handler->display->display_options['relationships']['field_session_presenters_uid']['field'] = 'field_session_presenters_uid';
  $handler->display->display_options['relationships']['field_session_presenters_uid']['required'] = 0;
  $handler->display->display_options['relationships']['field_session_presenters_uid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Utente: Ritratto */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_session_presenters_uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'thumbnail';
  /* Campo: Utente: Twitter */
  $handler->display->display_options['fields']['field_user_twitter']['id'] = 'field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['table'] = 'field_data_field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['field'] = 'field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['relationship'] = 'field_session_presenters_uid';
  $handler->display->display_options['fields']['field_user_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_user_twitter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_twitter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_twitter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_user_twitter']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_user_twitter']['field_api_classes'] = 0;
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Contenuto: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';

  /* Display: All Sessions profilo utente */
  $handler = $view->new_display('page', 'All Sessions profilo utente', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessioni';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'field_session_track_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Intestazione: Globale: Area di testo */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Non ci sono sessioni nello schedule.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Timeslot */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_session_timeslot_nid';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Timeslot';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<span>[title_1]</span>';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Contenuto: Speaker(s) */
  $handler->display->display_options['fields']['field_session_presenters']['id'] = 'field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['table'] = 'field_data_field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['field'] = 'field_session_presenters';
  $handler->display->display_options['fields']['field_session_presenters']['label'] = '';
  $handler->display->display_options['fields']['field_session_presenters']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['text'] = 'di [field_session_presenters] ';
  $handler->display->display_options['fields']['field_session_presenters']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_presenters']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_session_presenters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_presenters']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['field_api_classes'] = 0;
  /* Campo: Contenuto: Room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['label'] = '';
  $handler->display->display_options['fields']['field_session_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_room']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_room']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_room']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_room']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_room']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_room']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_room']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_room']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_session_room']['field_api_classes'] = 0;
  /* Campo: Contenuto: Traccia */
  $handler->display->display_options['fields']['field_session_track']['id'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_track']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_track']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_track']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_track']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_track']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_session_track']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_track']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_track']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_track']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_session_track']['field_api_classes'] = 0;
  /* Campo: Globale: Testo personalizzato */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="session">
  <h2>[title]</h2>
  <h3>di [field_session_presenters] - [field_session_room]</h3>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Utente: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_session_presenters_uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Criterio del filtro: Contenuto: Status (field_session_status) */
  $handler->display->display_options['filters']['field_session_status_value']['id'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['filters']['field_session_status_value']['field'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_session_status_value']['group'] = 0;
  $handler->display->display_options['path'] = 'sessioni';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sessioni';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Sessioni';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';
  $translatables['sessions_schedule'] = array(
    t('Master'),
    t('Drupal Day Roma 2011 - Sessions Schedule'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Il <strong>Call For Paper</strong> è ancora aperta <strong>fino al 19 novembre</strong>.

Aiutaci a dare un taglio diverso e <em>open</em> a questa giornata proponendo talk che favoriscano il dialogo tra le diverse aree professionali, tra sviluppatori, business manager e comunicatori per sottolineare la versatilità di Drupal.

La submission delle proposte è semplice, compila il form nella sezione "Proponi un talk" e allega l\'eventuale documentazione aggiuntiva.

<em><strong>A partire dal 21 novembre potrai trovare qui tutte le sessioni scelte per il Drupal Day Roma 2011.</em></strong>
'),
    t('Non ci sono ancora sessioni in questa track. <a href="/node/add/session" class="button">proponi una sessione</a>'),
    t('field_session_timeslot'),
    t('flag'),
    t('field_session_presenters'),
    t('Room'),
    t('All Sessions'),
    t('Sessioni'),
    t('<span>[title_1]</span>'),
    t('di [field_session_presenters] '),
    t('Traccia'),
    t('<div class="session">
  <h2>[title]</h2>
  <h3>di [field_session_presenters] - [field_session_room]</h3>
</div>'),
    t('Tracce'),
    t('2 Luglio'),
    t('Sessioni Lunedi 2 Luglio'),
    t('Show Track'),
    t('Feed'),
    t('User\'s schedule'),
    t('Il tuo programma'),
    t('Non hai ancora nessuna sessione in programma, puoi aggiungere <a href="/sessioni">da qui</a>'),
    t('autore'),
    t('Titolo'),
    t('Date and Time'),
    t('Presenter'),
    t('Azione'),
    t('User\'s sessions'),
    t('Your submitted sessions'),
    t('Non ci sono sessioni, se vuoi proporne una <a href="/node/add/session">clicca qui.</a>'),
    t('Status'),
    t('[field_session_status-value]'),
    t('Tutti'),
    t('Sessioni proposte di %1'),
    t('Ultime sessioni accettate'),
    t('Ultime Sessioni accettate'),
    t('All Sessions profilo utente'),
    t('Non ci sono sessioni nello schedule.'),
  );
  $export['sessions_schedule'] = $view;

  return $export;
}
