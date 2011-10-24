<?php
/**
 * @file
 * attendes.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function attendes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function attendes_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function attendes_image_default_styles() {
  $styles = array();

  // Exported image style: avatar_profile_page
  $styles['avatar_profile_page'] = array(
    'name' => 'avatar_profile_page',
    'effects' => array(
      10 => array(
        'label' => 'Scala',
        'help' => 'La trasformazione in scala mantiene il rapporto delle dimensioni dell\'immagine originale. Se viene impostata una sola dimensione, l\'altra sarà calcolata di conseguenza.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '120',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: thumb_resize
  $styles['thumb_resize'] = array(
    'name' => 'thumb_resize',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '80',
          'height' => '80',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
