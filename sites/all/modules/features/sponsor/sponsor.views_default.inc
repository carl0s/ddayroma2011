<?php
/**
 * @file
 * sponsor.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function sponsor_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'sponsor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsor';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsor';
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
  /* Campo: Contenuto: Fake/Real */
  $handler->display->display_options['fields']['field_sponsor_fake_real']['id'] = 'field_sponsor_fake_real';
  $handler->display->display_options['fields']['field_sponsor_fake_real']['table'] = 'field_data_field_sponsor_fake_real';
  $handler->display->display_options['fields']['field_sponsor_fake_real']['field'] = 'field_sponsor_fake_real';
  /* Criterio di ordinamento: Globale: Casuale */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'sponsor' => 'sponsor',
  );
  /* Criterio del filtro: Contenuto: Sponsor Category (field_sponsor_category) */
  $handler->display->display_options['filters']['field_sponsor_category_value']['id'] = 'field_sponsor_category_value';
  $handler->display->display_options['filters']['field_sponsor_category_value']['table'] = 'field_data_field_sponsor_category';
  $handler->display->display_options['filters']['field_sponsor_category_value']['field'] = 'field_sponsor_category_value';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'sponsor';

  /* Display: Block Sponsor Platinum */
  $handler = $view->new_display('block', 'Block Sponsor Platinum', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sponsor Platinum';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_class'] = 'grid-4';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'platinum_header',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
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
    'sponsor' => 'sponsor',
  );
  /* Criterio del filtro: Contenuto: Sponsor Category (field_sponsor_category) */
  $handler->display->display_options['filters']['field_sponsor_category_value']['id'] = 'field_sponsor_category_value';
  $handler->display->display_options['filters']['field_sponsor_category_value']['table'] = 'field_data_field_sponsor_category';
  $handler->display->display_options['filters']['field_sponsor_category_value']['field'] = 'field_sponsor_category_value';
  $handler->display->display_options['filters']['field_sponsor_category_value']['value'] = array(
    'platinum' => 'platinum',
  );
  $handler->display->display_options['block_description'] = 'Sponsor Platinum';

  /* Display: Block Sponsor Gold */
  $handler = $view->new_display('block', 'Block Sponsor Gold', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sponsor Gold';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_class'] = 'grid-3';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'gold_preface',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
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
    'sponsor' => 'sponsor',
  );
  /* Criterio del filtro: Contenuto: Sponsor Category (field_sponsor_category) */
  $handler->display->display_options['filters']['field_sponsor_category_value']['id'] = 'field_sponsor_category_value';
  $handler->display->display_options['filters']['field_sponsor_category_value']['table'] = 'field_data_field_sponsor_category';
  $handler->display->display_options['filters']['field_sponsor_category_value']['field'] = 'field_sponsor_category_value';
  $handler->display->display_options['filters']['field_sponsor_category_value']['value'] = array(
    'gold' => 'gold',
  );
  $handler->display->display_options['block_description'] = 'Sponsor Gold';

  /* Display: Block Sponsor Silver */
  $handler = $view->new_display('block', 'Block Sponsor Silver', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sponsor Silver';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_class'] = 'grid-2';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'sponsor_silver',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
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
    'sponsor' => 'sponsor',
  );
  /* Criterio del filtro: Contenuto: Sponsor Category (field_sponsor_category) */
  $handler->display->display_options['filters']['field_sponsor_category_value']['id'] = 'field_sponsor_category_value';
  $handler->display->display_options['filters']['field_sponsor_category_value']['table'] = 'field_data_field_sponsor_category';
  $handler->display->display_options['filters']['field_sponsor_category_value']['field'] = 'field_sponsor_category_value';
  $handler->display->display_options['filters']['field_sponsor_category_value']['value'] = array(
    'silver' => 'silver',
  );
  $handler->display->display_options['block_description'] = 'Sponsor Silver';

  /* Display: Block Sponsor Bronze */
  $handler = $view->new_display('block', 'Block Sponsor Bronze', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sponsor Bronze';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '10';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'sponsor_bronze',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
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
    'sponsor' => 'sponsor',
  );
  /* Criterio del filtro: Contenuto: Sponsor Category (field_sponsor_category) */
  $handler->display->display_options['filters']['field_sponsor_category_value']['id'] = 'field_sponsor_category_value';
  $handler->display->display_options['filters']['field_sponsor_category_value']['table'] = 'field_data_field_sponsor_category';
  $handler->display->display_options['filters']['field_sponsor_category_value']['field'] = 'field_sponsor_category_value';
  $handler->display->display_options['filters']['field_sponsor_category_value']['value'] = array(
    'bronze' => 'bronze',
  );
  $handler->display->display_options['block_description'] = 'Sponsor Bronze';
  $translatables['sponsor'] = array(
    t('Master'),
    t('Sponsor'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Fake/Real'),
    t('Page'),
    t('Block Sponsor Platinum'),
    t('Sponsor Platinum'),
    t('Block Sponsor Gold'),
    t('Sponsor Gold'),
    t('Block Sponsor Silver'),
    t('Sponsor Silver'),
    t('Block Sponsor Bronze'),
    t('Sponsor Bronze'),
  );
  $export['sponsor'] = $view;

  return $export;
}