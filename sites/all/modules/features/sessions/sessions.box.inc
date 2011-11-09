<?php
/**
 * @file
 * sessions.box.inc
 */

/**
 * Implements hook_default_box().
 */
function sessions_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'biz_block';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Blocco pagina biz';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/sites/all/themes/dday/images/biz.png" title="biz" />',
      'format' => 'full_html',
    ),
  );
  $export['biz_block'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'biz_description';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Biz description';
  $box->options = array(
    'body' => array(
      'value' => 'Quanto influisce una buona progettazione web sui ROI e come bisogna progettare la strategia di comunicazione per affrontare l’internauta sempre più formato ed esigente?
La scelta del Content Management System, la sua configurazione e temizzazione sono aspetti fondamentali per offrire risposte concrete ad esigenze di business. 
Il Drupal Day vi presenterà alcuni casi concreti e vi aiuterà ad individuare la giusta combinazione tra tecnologia, content creation e strategie di comunicazione per raggiungere il vostro target.
',
      'format' => 'filtered_html',
    ),
  );
  $export['biz_description'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'code_block';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Blocco pagina code';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/sites/all/themes/dday/images/code.png" title="code" />',
      'format' => 'full_html',
    ),
  );
  $export['code_block'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'code_description';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Code description';
  $box->options = array(
    'body' => array(
      'value' => 'Il Code ha un linguaggio tutto suo; Ajax, node.js, context VS panels, SQL, JSON, Omega3 & Delta.
Il confronto tra i sviluppatori è fondamentale per poter offrire applicativi potenti e strumenti capaci di comunicare a target specifici e variabili.
La community Drupal è grande e unita, non soltanto all’estero, ma anche in Italia.
È grazie all’Associazione Drupal Italia e grazie a ogni singolo drupalista se oggi possiamo offrirvi un percorso tematico per discutere soluzioni tecniche da proporre',
      'format' => 'full_html',
    ),
  );
  $export['code_description'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'join_button';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Big join button';
  $box->options = array(
    'body' => array(
      'value' => '<a class="button bigjoin red" href="/user/register">PARTECIPA</a>',
      'format' => 'filtered_html',
    ),
  );
  $export['join_button'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'pa_block';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Blocco pagina pa';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/sites/all/themes/dday/images/pa.png" title="pa" />',
      'format' => 'full_html',
    ),
  );
  $export['pa_block'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'pa_description';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'PA Description';
  $box->options = array(
    'body' => array(
      'value' => 'La Pubblica Amministrazione, le Istituzioni e le Fondazioni spesso si devono confrontare con realtà articolate fatte di utenze multiple ed eterogenei, reti interne e la necessità di tracciare informazioni e flussi di navigazione.
Drupal è uno strumento efficace e scalabile per offrire soluzioni a problemi gestionali per migliorare il lavoro quotidiano dei impiegati.
',
      'format' => 'filtered_html',
    ),
  );
  $export['pa_description'] = $box;

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

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_block';
  $box->plugin_key = 'simple';
  $box->title = 'Seguici';
  $box->description = 'Seguici sui social network';
  $box->options = array(
    'body' => array(
      'value' => '<ul class="social-icons">
  <li class="facebook"><a href="http://www.facebook.com/drupalday" title="Facebook page"></a></li>
  <li class="twitter"><a href="http://www.twitter.com/drupalday" title="Twitter handle"></a></li>
  <li class="flickr"><a href="http://www.flickr.com/photos/drupalday" title="Flickr page"></a></li>
  <li class="youtube"><a href="http://www.youtube.com/user/DrupalDay" title="YouTube channel"></a></li>
</ul>',
      'format' => 'filtered_html',
    ),
  );
  $export['social_block'] = $box;

  return $export;
}
