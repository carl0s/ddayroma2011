<?php
/**
 * @file
 * context_and_delta.box.inc
 */

/**
 * Implements hook_default_box().
 */
function context_and_delta_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'call_for_paper';
  $box->plugin_key = 'simple';
  $box->title = 'DrupalDay 2011: Seminario formativo';
  $box->description = 'DrupalDay 2011: Seminario formativo';
  $box->options = array(
    'body' => array(
      'value' => '<div class="cfp">
<a href="/seminario-formativo" class="button" title="Iscriviti al Seminario formativo su Drupal">Iscriviti</a>
<div class="inner">
Il <span class="fancy uppercase">DrupalDay</span> organizza un Seminario formativo su Drupal per il giorno 2 dicembre, il giorno prima dell\'evento! E\' un momento importante per tutti quelli che vogliono conoscere meglio il CMS Drupal e acquisire know-how sul prodotto. <br />
Tecnici e formatori delle aziende organizzatrici del Drupal Day aspettano tutti coloro i quali saranno interessati, dalle ore 14.00 alle ore 18.00 nell\'Aula 1 del Dipartimento di Scienze Odontostomatologiche dell\'Università La Sapienza, situato in via Caserta 6.<br />
Iscritivi, i posti sono limitati!
</div>
</div>',
      'format' => 'full_html',
    ),
  );
  $export['call_for_paper'] = $box;

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
  $box->delta = 'mydrupalday';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'my drupal day block';
  $box->options = array(
    'body' => array(
      'value' => '',
      'format' => 'filtered_html',
    ),
  );
  $export['mydrupalday'] = $box;

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
