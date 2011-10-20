<?php
/**
 * @file
 * context_and_delta.box.inc
 */

/**
 * Implementation of hook_default_box().
 */
function context_and_delta_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'call_for_paper';
  $box->plugin_key = 'simple';
  $box->title = 'Call for paper';
  $box->description = 'Call for paper';
  $box->options = array(
    'body' => array(
      'value' => 'Nunc pretium hendrerit neque, ac ornare urna faucibus et! Proin at odio vitae nisi rutrum bibendum. Vivamus eu quam metus, vitae euismod mauris! Quisque sollicitudin lectus eu justo rhoncus ac cursus augue rutrum? Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam dapibus lectus arcu. Praesent feugiat iaculis eros a fringilla.',
      'format' => 'filtered_html',
    ),
  );
  $export['call_for_paper'] = $box;

  return $export;
}
