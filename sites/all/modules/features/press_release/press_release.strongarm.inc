<?php
/**
 * @file
 * press_release.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function press_release_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_press_releases';
  $strongarm->value = 0;
  $export['comment_anonymous_press_releases'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_press_releases';
  $strongarm->value = 1;
  $export['comment_default_mode_press_releases'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_press_releases';
  $strongarm->value = '50';
  $export['comment_default_per_page_press_releases'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_press_releases';
  $strongarm->value = 1;
  $export['comment_form_location_press_releases'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_press_releases';
  $strongarm->value = '2';
  $export['comment_press_releases'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_press_releases';
  $strongarm->value = '1';
  $export['comment_preview_press_releases'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_press_releases';
  $strongarm->value = 1;
  $export['comment_subject_field_press_releases'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_press_releases';
  $strongarm->value = '0';
  $export['language_content_type_press_releases'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_press_releases';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_press_releases'] = $strongarm;

  return $export;
}
