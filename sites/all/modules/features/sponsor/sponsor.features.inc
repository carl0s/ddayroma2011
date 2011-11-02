<?php
/**
 * @file
 * sponsor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sponsor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sponsor_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function sponsor_image_default_styles() {
  $styles = array();

  // Exported image style: sponsor_bronze
  $styles['sponsor_bronze'] = array(
    'name' => 'sponsor_bronze',
    'effects' => array(
      15 => array(
        'label' => 'Scala',
        'help' => 'La trasformazione in scala mantiene il rapporto delle dimensioni dell\'immagine originale. Se viene impostata una sola dimensione, l\'altra sarà calcolata di conseguenza.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '90',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      16 => array(
        'label' => 'Ritaglia',
        'help' => 'Il ritaglio rimuove porzioni dell\'immagine in modo da portarla alle dimensioni desiderate.',
        'effect callback' => 'image_crop_effect',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '90',
          'height' => '60',
          'anchor' => 'left-top',
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: sponsor_gold
  $styles['sponsor_gold'] = array(
    'name' => 'sponsor_gold',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '140',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      4 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '140',
          'height' => '80',
          'anchor' => 'left-top',
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: sponsor_platinum
  $styles['sponsor_platinum'] = array(
    'name' => 'sponsor_platinum',
    'effects' => array(
      12 => array(
        'label' => 'Ridimensiona',
        'help' => 'Il ridimensionamento forza le dimensioni dell\'immagine secondo i valori impostati. Questo può causare restringimento o allungamento sproporzionato delle immagini.',
        'effect callback' => 'image_resize_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '200',
          'height' => '120',
        ),
        'weight' => '3',
      ),
    ),
  );

  // Exported image style: sponsor_silver
  $styles['sponsor_silver'] = array(
    'name' => 'sponsor_silver',
    'effects' => array(
      13 => array(
        'label' => 'Scala',
        'help' => 'La trasformazione in scala mantiene il rapporto delle dimensioni dell\'immagine originale. Se viene impostata una sola dimensione, l\'altra sarà calcolata di conseguenza.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '130',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      14 => array(
        'label' => 'Ritaglia',
        'help' => 'Il ritaglio rimuove porzioni dell\'immagine in modo da portarla alle dimensioni desiderate.',
        'effect callback' => 'image_crop_effect',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '130',
          'height' => '70',
          'anchor' => 'center-center',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function sponsor_node_info() {
  $items = array(
    'media_partner' => array(
      'name' => t('Media partner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Sponsor'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  return $items;
}
