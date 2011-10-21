<?php
/**
 * @file
 * sessions.box.inc
 */

/**
 * Implementation of hook_default_box().
 */
function sessions_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'sessions_info';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Blocco descrizioni sessioni';
  $box->options = array(
    'body' => array(
      'value' => 'L\'approccio preferito sarà business oriented per presentare nuove soluzioni a problemi comuni all\'interno dei 3 percorsi: Code, Business, PA.
Una commissione di esperti che vede coinvolta l’Associazione Drupal Italia sceglierà tra le proposte 12 talk - 4 per percorso tematico - che saranno presentati durante la giornata di sabato, 3 dicembre.
Ogni percorso tematico sarà inoltre inaugurato da un keynote tenuto da alcuni dei maggiori esponenti del settore.
	       
<p>Il Drupal Day Roma 2011 vuole dare spazio a proposte concrete che mirano al miglioramento delle pratiche lavorative di Imprese, Pubbliche Amministrazioni e Sviluppatori Informatici.

Sono aperte le iscrizioni per proporre argomenti dei paper legati allo sviluppo, al design, alla comunicazione, al project management e al business. 

<p>L\'approccio preferito sarà business oriented per presentare nuove soluzioni a problemi comuni all\'interno dei 3 percorsi: Code, Business, PA.
Una commissione di esperti che vede coinvolta l’Associazione Drupal Italia sceglierà tra le proposte 12 talk - 4 per percorso tematico - che saranno presentati durante la giornata di sabato, 3 dicembre.
Ogni percorso tematico sarà inoltre inaugurato da un keynote tenuto da alcuni dei maggiori esponenti del settore.<p>
',
      'format' => 'full_html',
    ),
  );
  $export['sessions_info'] = $box;

  return $export;
}
