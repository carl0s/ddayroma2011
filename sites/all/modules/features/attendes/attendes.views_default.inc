<?php
/**
 * @file
 * attendes.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function attendes_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'attendees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Attendees';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendees';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relazione: Utente: Sessioni Drupal Day 2011 di interesse (field_session_attendee) */
  $handler->display->display_options['relationships']['field_session_attendee_nid']['id'] = 'field_session_attendee_nid';
  $handler->display->display_options['relationships']['field_session_attendee_nid']['table'] = 'field_data_field_session_attendee';
  $handler->display->display_options['relationships']['field_session_attendee_nid']['field'] = 'field_session_attendee_nid';
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Campo: Utente: Ritratto */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  /* Campo: Utente: Twitter */
  $handler->display->display_options['fields']['field_user_twitter']['id'] = 'field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['table'] = 'field_data_field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['field'] = 'field_user_twitter';
  /* Campo: Utente: Bio */
  $handler->display->display_options['fields']['field_user_bio']['id'] = 'field_user_bio';
  $handler->display->display_options['fields']['field_user_bio']['table'] = 'field_data_field_user_bio';
  $handler->display->display_options['fields']['field_user_bio']['field'] = 'field_user_bio';
  /* Criterio di ordinamento: Utente: Data creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contestuale: Utente: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Attendees */
  $handler = $view->new_display('page', 'Attendees', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Partecipanti';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Utente: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Campo: Utente: Ritratto */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
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
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'attendees/[uid]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Campo: Utente: Twitter */
  $handler->display->display_options['fields']['field_user_twitter']['id'] = 'field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['table'] = 'field_data_field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['field'] = 'field_user_twitter';
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
  /* Campo: Utente: Skills */
  $handler->display->display_options['fields']['field_user_skills']['id'] = 'field_user_skills';
  $handler->display->display_options['fields']['field_user_skills']['table'] = 'field_data_field_user_skills';
  $handler->display->display_options['fields']['field_user_skills']['field'] = 'field_user_skills';
  $handler->display->display_options['fields']['field_user_skills']['label'] = 'my skills';
  $handler->display->display_options['fields']['field_user_skills']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_skills']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['field_api_classes'] = 0;
  /* Campo: Utente: Interessi */
  $handler->display->display_options['fields']['field_user_interest']['id'] = 'field_user_interest';
  $handler->display->display_options['fields']['field_user_interest']['table'] = 'field_data_field_user_interest';
  $handler->display->display_options['fields']['field_user_interest']['field'] = 'field_user_interest';
  $handler->display->display_options['fields']['field_user_interest']['label'] = 'my interests';
  $handler->display->display_options['fields']['field_user_interest']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_interest']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'attendees';

  /* Display: Attendees Block Home */
  $handler = $view->new_display('block', 'Attendees Block Home', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Partecipanti';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Utente: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Campo: Utente: Ritratto */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['path'] = '<front>';
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
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Attendees details */
  $handler = $view->new_display('page', 'Attendees details', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Utente: Ritratto */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
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
  /* Campo: Utente: Cognome */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lastname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_lastname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_lastname']['field_api_classes'] = 0;
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_user_firstname']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['text'] = '[field_user_firstname] [field_user_lastname]';
  $handler->display->display_options['fields']['field_user_firstname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_firstname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_firstname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_firstname']['field_api_classes'] = 0;
  /* Campo: Utente: Twitter */
  $handler->display->display_options['fields']['field_user_twitter']['id'] = 'field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['table'] = 'field_data_field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['field'] = 'field_user_twitter';
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
  /* Campo: Utente: Skills */
  $handler->display->display_options['fields']['field_user_skills']['id'] = 'field_user_skills';
  $handler->display->display_options['fields']['field_user_skills']['table'] = 'field_data_field_user_skills';
  $handler->display->display_options['fields']['field_user_skills']['field'] = 'field_user_skills';
  $handler->display->display_options['fields']['field_user_skills']['label'] = 'my skills';
  $handler->display->display_options['fields']['field_user_skills']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_skills']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_skills']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['field_api_classes'] = 0;
  /* Campo: Utente: Interessi */
  $handler->display->display_options['fields']['field_user_interest']['id'] = 'field_user_interest';
  $handler->display->display_options['fields']['field_user_interest']['table'] = 'field_data_field_user_interest';
  $handler->display->display_options['fields']['field_user_interest']['field'] = 'field_user_interest';
  $handler->display->display_options['fields']['field_user_interest']['label'] = 'my interests';
  $handler->display->display_options['fields']['field_user_interest']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_interest']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_interest']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['field_api_classes'] = 0;
  /* Campo: Utente: Bio */
  $handler->display->display_options['fields']['field_user_bio']['id'] = 'field_user_bio';
  $handler->display->display_options['fields']['field_user_bio']['table'] = 'field_data_field_user_bio';
  $handler->display->display_options['fields']['field_user_bio']['field'] = 'field_user_bio';
  $handler->display->display_options['fields']['field_user_bio']['label'] = '';
  $handler->display->display_options['fields']['field_user_bio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_bio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_bio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_bio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_bio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Utente: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $handler->display->display_options['path'] = 'attendees/%';

  /* Display: Attendees details attachment */
  $handler = $view->new_display('attachment', 'Attendees details attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Il mio programma';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Utente: Sessioni Drupal Day 2011 di interesse (field_session_attendee) */
  $handler->display->display_options['relationships']['field_session_attendee_nid']['id'] = 'field_session_attendee_nid';
  $handler->display->display_options['relationships']['field_session_attendee_nid']['table'] = 'field_data_field_session_attendee';
  $handler->display->display_options['relationships']['field_session_attendee_nid']['field'] = 'field_session_attendee_nid';
  $handler->display->display_options['relationships']['field_session_attendee_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_session_attendee_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Date and Time */
  $handler->display->display_options['fields']['field_slot_date']['id'] = 'field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['table'] = 'field_data_field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['field'] = 'field_slot_date';
  $handler->display->display_options['fields']['field_slot_date']['relationship'] = 'field_session_attendee_nid';
  $handler->display->display_options['fields']['field_slot_date']['label'] = '';
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
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['title']['relationship'] = 'field_session_attendee_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
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
  $handler->display->display_options['fields']['field_session_presenters']['relationship'] = 'field_session_attendee_nid';
  $handler->display->display_options['fields']['field_session_presenters']['label'] = 'di';
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
  $handler->display->display_options['fields']['field_session_presenters']['type'] = 'user_reference_plain';
  $handler->display->display_options['fields']['field_session_presenters']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_session_presenters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_presenters']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_session_presenters']['field_api_classes'] = 0;
  /* Campo: Contenuto: Traccia */
  $handler->display->display_options['fields']['field_session_track']['id'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['table'] = 'field_data_field_session_track';
  $handler->display->display_options['fields']['field_session_track']['field'] = 'field_session_track';
  $handler->display->display_options['fields']['field_session_track']['relationship'] = 'field_session_attendee_nid';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['attendees'] = array(
    t('Master'),
    t('Attendees'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('field_session_attendee'),
    t('Ritratto'),
    t('Twitter'),
    t('Bio'),
    t('Tutti'),
    t('Partecipanti'),
    t('attendees/[uid]'),
    t('my skills'),
    t('my interests'),
    t('Attendees Block Home'),
    t('<front>'),
    t('Attendees details'),
    t('[field_user_firstname] [field_user_lastname]'),
    t('Attendees details attachment'),
    t('Il mio programma'),
    t('di'),
  );
  $export['attendees'] = $view;

  $view = new view;
  $view->name = 'user_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Profile';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'field_user_twitter' => 'field_user_twitter',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<h1> [name] </h1>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Campo: Utente: Twitter */
  $handler->display->display_options['fields']['field_user_twitter']['id'] = 'field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['table'] = 'field_data_field_user_twitter';
  $handler->display->display_options['fields']['field_user_twitter']['field'] = 'field_user_twitter';
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
  $handler->display->display_options['fields']['field_user_twitter']['element_class'] = 'twitter';
  $handler->display->display_options['fields']['field_user_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_twitter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_twitter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_user_twitter']['field_api_classes'] = 0;
  /* Campo: Utente: Skills */
  $handler->display->display_options['fields']['field_user_skills']['id'] = 'field_user_skills';
  $handler->display->display_options['fields']['field_user_skills']['table'] = 'field_data_field_user_skills';
  $handler->display->display_options['fields']['field_user_skills']['field'] = 'field_user_skills';
  $handler->display->display_options['fields']['field_user_skills']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_user_skills']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_skills']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_user_skills']['field_api_classes'] = 0;
  /* Campo: Utente: Interessi */
  $handler->display->display_options['fields']['field_user_interest']['id'] = 'field_user_interest';
  $handler->display->display_options['fields']['field_user_interest']['table'] = 'field_data_field_user_interest';
  $handler->display->display_options['fields']['field_user_interest']['field'] = 'field_user_interest';
  $handler->display->display_options['fields']['field_user_interest']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_user_interest']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_interest']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_user_interest']['field_api_classes'] = 0;
  /* Campo: Utente: Bio */
  $handler->display->display_options['fields']['field_user_bio']['id'] = 'field_user_bio';
  $handler->display->display_options['fields']['field_user_bio']['table'] = 'field_data_field_user_bio';
  $handler->display->display_options['fields']['field_user_bio']['field'] = 'field_user_bio';
  $handler->display->display_options['fields']['field_user_bio']['label'] = '';
  $handler->display->display_options['fields']['field_user_bio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_bio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_bio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_bio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_bio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_bio']['field_api_classes'] = 0;
  /* Campo: Utente: Azienda */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_company']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_company']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_company']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_company']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_company']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_company']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_company']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_company']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_company']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_company']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_company']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_company']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_company']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_company']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_company']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_company']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_company']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_user_company']['field_api_classes'] = 0;
  /* Criterio di ordinamento: Utente: Data creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contestuale: Utente: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['restrict_roles'] = 0;
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: User Meta */
  $handler = $view->new_display('block', 'User Meta', 'block_1');

  /* Display: Avatar */
  $handler = $view->new_display('block', 'Avatar', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Utente: Ritratto */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
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
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'avatar_profile_page';
  $translatables['user_profile'] = array(
    t('Master'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('<h1> [name] </h1>'),
    t('Skills'),
    t('Interessi'),
    t('Azienda'),
    t('Tutti'),
    t('User Meta'),
    t('Avatar'),
  );
  $export['user_profile'] = $view;

  return $export;
}
