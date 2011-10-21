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
  $box->delta = 'call_for_paper';
  $box->plugin_key = 'simple';
  $box->title = 'Call for paper';
  $box->description = 'Call for paper';
  $box->options = array(
    'body' => array(
      'value' => '<div class="cfp">
<a href="sessioni" class="button" title="inviaci la tua proposta di talk">fai una proposta</a>
<div class="inner">
Il Drupal Day Roma 2011 vuole dare spazio a proposte concrete che mirano al miglioramento delle pratiche lavorative di Imprese, Pubbliche Amministrazioni, Istituzioni e Web Developer.
L\'approccio preferito per i paper è business oriented per dare spazio a nuove soluzioni a problemi comuni all\'interno dei 3 percorsi: Code, Business, PA.
</div>
</div>',
      'format' => 'full_html',
    ),
  );
  $export['call_for_paper'] = $box;

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
      'value' => 'Percorso di strategic analysis per illustrare le opportunità che Drupal rappresenta per  fondazioni, enti ed organizzazione governative e non.

<a href="sessioni/pa" class="circle" title="vai alla sezione PA"></a>',
      'format' => 'filtered_html',
    ),
  );
  $export['pa'] = $box;

  return $export;
}
