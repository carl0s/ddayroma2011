<?php
/**
 * @file
 * Provide an grid_alpha_omega style plugin for Views. This file is autoloaded by views.
 */

/**
  * Implementation of hook_views_plugin().
  */
function views_grid_alpha_omega_views_plugins() {
  return array(
    'style' => array(
      'views_grid_alpha_omega' => array(
        'title' => t('Views Grid Alpha Omega'),
        'theme' => 'views_view_grid_alpha_omega',
        'handler' => 'views_grid_alpha_omega_style_plugin',
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses options' => TRUE,
        'uses fields' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}

