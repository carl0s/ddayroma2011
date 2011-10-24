<?php
/**
 * @file
 * drupalday_system_feature.box.inc
 */

/**
 * Implementation of hook_default_box().
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

<a href="sessioni?track=biz" class="circle" title="vai alla sezione BIZ"></a>',
      'format' => 'filtered_html',
    ),
  );
  $export['biz'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'biz_block';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
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
  $box->delta = 'code';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Code';
  $box->options = array(
    'body' => array(
      'value' => 'Percorso di alto profilo tecnico per confrontarsi su righe di codice e best practice d’implementazione.

<a href="sessioni?track=code" class="circle" title="vai alla sezione CODE"></a>',
      'format' => 'filtered_html',
    ),
  );
  $export['code'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'code_block';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
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
  $box->delta = 'pa';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'pa';
  $box->options = array(
    'body' => array(
      'value' => 'Percorso di strategic analysis per illustrare le opportunità che Drupal rappresenta per  fondazioni, enti ed organizzazione governative e non.

<a href="sessioni?track=pa" class="circle" title="vai alla sezione PA"></a>',
      'format' => 'filtered_html',
    ),
  );
  $export['pa'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'pa_block';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Blocco pagina pa';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/sites/all/themes/dday/images/pa.png" title="pa" />',
      'format' => 'filtered_html',
    ),
  );
  $export['pa_block'] = $box;

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
  <li class="flickr"><a href="#" title="Flickr page"></a></li>
  <li class="youtube"><a href="#" title="YouTube channel"></a></li>
  <li class="slideshare"><a href="#" title="Slideshare account"></a></li>
</ul>',
      'format' => 'filtered_html',
    ),
  );
  $export['social_block'] = $box;

  return $export;
}
