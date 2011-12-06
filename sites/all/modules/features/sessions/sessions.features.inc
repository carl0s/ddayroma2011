<?php
/**
 * @file
 * sessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sessions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sessions_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function sessions_flag_default_flags() {
  $flags = array();
  // Exported flag: "Schedule".
  $flags['session_schedule'] = array(
    'content_type' => 'node',
    'title' => 'Schedule',
    'global' => '0',
    'types' => array(
      0 => 'session',
    ),
    'flag_short' => 'Add to your schedule',
    'flag_long' => 'Add this session to your personal session attendance.',
    'flag_message' => 'This session has been added to your personal session attendance.',
    'unflag_short' => 'Remove from your schedule',
    'unflag_long' => 'Remove this session from your personal session attendance.',
    'unflag_message' => 'This session has been removed from your personal session attendance.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '3',
        2 => '4',
      ),
      'unflag' => array(
        0 => '2',
        1 => '3',
        2 => '4',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'sessions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Approve Session".
  $flags['sessions_schedule_approve'] = array(
    'content_type' => 'node',
    'title' => 'Approve Session',
    'global' => '0',
    'types' => array(
      0 => 'session',
    ),
    'flag_short' => 'Approve',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Defer ',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'sessions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}

/**
 * Implements hook_node_info().
 */
function sessions_node_info() {
  $items = array(
    'room' => array(
      'name' => t('Room'),
      'base' => 'node_content',
      'description' => t('Conference Room'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
    'session' => array(
      'name' => t('Sessione'),
      'base' => 'node_content',
      'description' => t('Sessione'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
    'time_slot' => array(
      'name' => t('Time Slot'),
      'base' => 'node_content',
      'description' => t('Time Slot for Sessions'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  return $items;
}
