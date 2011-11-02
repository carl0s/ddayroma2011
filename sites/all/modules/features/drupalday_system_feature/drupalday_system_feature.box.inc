<?php
/**
 * @file
 * drupalday_system_feature.box.inc
 */

/**
 * Implements hook_default_box().
 */
function drupalday_system_feature_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'biz';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Biz';
  $box->options = array(
    'body' => array(
      'value' => 'Percorso di marketing e comunicazione per chiarire le potenzialità di business che Drupal offre a imprenditori, manager & decision maker.

<a href="sessioni/biz" class="circle" title="vai alla sezione BIZ"></a>',
      'format' => 'filtered_html',
    ),
  );
  $export['biz'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'code';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Code';
  $box->options = array(
    'body' => array(
      'value' => 'Percorso di alto profilo tecnico per confrontarsi su righe di codice e best practice d’implementazione.

<a href="sessioni/code" class="circle" title="vai alla sezione CODE"></a>',
      'format' => 'filtered_html',
    ),
  );
  $export['code'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'pa';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'pa';
  $box->options = array(
    'body' => array(
      'value' => 'Percorso di strategic analysis per illustrare le opportunità che Drupal rappresenta per  fondazioni, enti ed organizzazioni 
governative e non.

<a href="sessioni/pa" class="circle" title="vai alla sezione PA"></a>',
      'format' => 'filtered_html',
    ),
  );
  $export['pa'] = $box;

  return $export;
}
