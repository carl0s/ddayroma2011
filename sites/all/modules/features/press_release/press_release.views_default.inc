<?php
/**
 * @file
 * press_release.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function press_release_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'press_releases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press Releases';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press Releases';
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
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
  /* Campo: Contenuto: Attachment Press Release */
  $handler->display->display_options['fields']['field_press_release_attachment']['id'] = 'field_press_release_attachment';
  $handler->display->display_options['fields']['field_press_release_attachment']['table'] = 'field_data_field_press_release_attachment';
  $handler->display->display_options['fields']['field_press_release_attachment']['field'] = 'field_press_release_attachment';
  /* Criterio di ordinamento: Contenuto: Data Press Release (field_press_release_date) */
  $handler->display->display_options['sorts']['field_press_release_date_value']['id'] = 'field_press_release_date_value';
  $handler->display->display_options['sorts']['field_press_release_date_value']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['sorts']['field_press_release_date_value']['field'] = 'field_press_release_date_value';
  $handler->display->display_options['sorts']['field_press_release_date_value']['order'] = 'DESC';
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

  /* Display: Press Releases Block */
  $handler = $view->new_display('block', 'Press Releases Block', 'press_release');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No-results';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Non ci sono documenti di Rassegna Stampa al momento.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Attachment Press Release */
  $handler->display->display_options['fields']['field_press_release_attachment']['id'] = 'field_press_release_attachment';
  $handler->display->display_options['fields']['field_press_release_attachment']['table'] = 'field_data_field_press_release_attachment';
  $handler->display->display_options['fields']['field_press_release_attachment']['field'] = 'field_press_release_attachment';
  $handler->display->display_options['fields']['field_press_release_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_attachment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_attachment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_press_release_attachment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_press_release_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_press_release_attachment']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_press_release_attachment']['field_api_classes'] = 0;
  /* Campo: Contenuto: Data Press Release */
  $handler->display->display_options['fields']['field_press_release_date']['id'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['field'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_press_release_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_press_release_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_press_release_date']['field_api_classes'] = 0;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_press_release_date] - [title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_press_release_attachment]';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
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
    'press_releases' => 'press_releases',
  );
  $handler->display->display_options['block_description'] = 'Press Releases';
  $translatables['press_releases'] = array(
    t('Master'),
    t('Press Releases'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('Attachment Press Release'),
    t('Press Releases Block'),
    t('No-results'),
    t('Non ci sono documenti di Rassegna Stampa al momento.'),
    t('[field_press_release_date] - [title]'),
    t('[field_press_release_attachment]'),
  );
  $export['press_releases'] = $view;

  return $export;
}
