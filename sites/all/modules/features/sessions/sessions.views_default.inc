<?php
/**
 * @file
 * sessions.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
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
  /* Relationship: Flags: sessions_schedule_approve */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'sessions_schedule_approve';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Content: Title */
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
  /* Field: Content: Status */
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
  /* Field: User: Name */
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
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Actions';
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
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
  /* Field: Content: Status */
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
  /* Field: User: Name */
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
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Actions';
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
  /* Field: Content: Post date */
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_slot_date';
  $handler->display->display_options['style_options']['row_class'] = 'session-block';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Below are all sessions that <a href="/frontpage">DrupalDay Rome 2011</a> offers. You can <a href="/user/register/">sign up </a>  to create your own sessions schedule.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no sessions available for your selection.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Time Slot (field_session_timeslot) */
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['id'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['table'] = 'field_data_field_session_timeslot';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['field'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['delta'] = '-1';
  /* Relationship: Flags: session_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'session_schedule';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Presenter(s) (field_session_presenters) */
  $handler->display->display_options['relationships']['field_session_presenters_uid']['id'] = 'field_session_presenters_uid';
  $handler->display->display_options['relationships']['field_session_presenters_uid']['table'] = 'field_data_field_session_presenters';
  $handler->display->display_options['relationships']['field_session_presenters_uid']['field'] = 'field_session_presenters_uid';
  /* Field: Content: Date and Time */
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
  /* Field: Content: Title */
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
  /* Field: Content: Presenter(s) */
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
  /* Field: Flags: Flag link */
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
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  /* Sort criterion: Content: Date and Time (field_slot_date) */
  $handler->display->display_options['sorts']['field_slot_date_value']['id'] = 'field_slot_date_value';
  $handler->display->display_options['sorts']['field_slot_date_value']['table'] = 'field_data_field_slot_date';
  $handler->display->display_options['sorts']['field_slot_date_value']['field'] = 'field_slot_date_value';
  $handler->display->display_options['sorts']['field_slot_date_value']['relationship'] = 'field_session_timeslot_nid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
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
  $handler->display->display_options['title'] = 'All Sessions Schedule';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
  /* Field: Content: Date and Time */
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
  /* Field: Content: Title */
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
  /* Field: Content: Presenter(s) */
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
  /* Field: Flags: Flag link */
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
  /* Field: Content: Room */
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
  /* Field: Content: Track */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Track (field_session_track) */
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
  /* Filter criterion: Content: Status (field_session_status) */
  $handler->display->display_options['filters']['field_session_status_value']['id'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['filters']['field_session_status_value']['field'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'conference/sessions';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'All Sessions';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Sessions';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: 2 Luglio */
  $handler = $view->new_display('page', '2 Luglio', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessioni Lunedi 2 Luglio';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
  /* Field: Content: Date and Time */
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
  /* Field: Content: Title */
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
  /* Field: Content: Presenter(s) */
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
  /* Field: Flags: Flag link */
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
  /* Field: Content: Room */
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
  /* Field: Content: Track */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Track (field_session_track) */
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
  /* Filter criterion: Content: Date and Time (field_slot_date) */
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
  /* Filter criterion: Content: Status (field_session_status) */
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
  $handler->display->display_options['title'] = 'Your schedule';
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No sessions scheduled for this user.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Time Slot (field_session_timeslot) */
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['id'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['table'] = 'field_data_field_session_timeslot';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['field'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['delta'] = '-1';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: session_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'session_schedule';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
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
  /* Field: Content: Date and Time */
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
  /* Field: Content: Presenter(s) */
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
  /* Field: Content: Room */
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
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Action';
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
  $handler->display->display_options['menu']['title'] = 'Schedule';
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No uploaded sessions for this user.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
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
  /* Field: Content: Status */
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['uid']['title'] = '%1 submitted sessions';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['path'] = 'user/%/sessions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Sessions';
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
  /* Relationship: Content: Time Slot (field_session_timeslot) */
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['id'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['table'] = 'field_data_field_session_timeslot';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['field'] = 'field_session_timeslot_nid';
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_session_timeslot_nid']['delta'] = '-1';
  /* Relationship: Flags: session_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'session_schedule';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Presenter(s) (field_session_presenters) */
  $handler->display->display_options['relationships']['field_session_presenters_uid']['id'] = 'field_session_presenters_uid';
  $handler->display->display_options['relationships']['field_session_presenters_uid']['table'] = 'field_data_field_session_presenters';
  $handler->display->display_options['relationships']['field_session_presenters_uid']['field'] = 'field_session_presenters_uid';
  $handler->display->display_options['relationships']['field_session_presenters_uid']['required'] = 0;
  $handler->display->display_options['relationships']['field_session_presenters_uid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
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
  /* Field: User: Picture */
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
  /* Field: User: Twitter */
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
  /* Field: Content: Body */
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';
  $export['sessions_schedule'] = $view;

  return $export;
}
