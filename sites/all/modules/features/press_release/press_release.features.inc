<?php
/**
 * @file
 * press_release.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function press_release_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function press_release_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function press_release_node_info() {
  $items = array(
    'press_releases' => array(
      'name' => t('Press Releases'),
      'base' => 'node_content',
      'description' => t('Gestisce attività di CRUD sulle Press Releases legate al Drupal Day 2011'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  return $items;
}
