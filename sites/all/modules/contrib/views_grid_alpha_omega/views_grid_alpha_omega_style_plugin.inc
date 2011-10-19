<?php
/**
 * @file
 * Provide an grid_alpha_omega style plugin for Views. This file is autoloaded by views.
 */

/**
  * Implementation of views_plugin_style().
  */
class views_grid_alpha_omega_style_plugin extends views_plugin_style {
  /**
   * Set default options
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['total_columns'] = array('default' => '');
    $options['grid_width'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    
    $form['total_columns'] = array(
      '#type' => 'textfield',
      '#title' => t('Total columns'),
      '#default_value' => $this->options['total_columns'],
      '#description' => t("The total number of columns."),
    );
    $form['grid_width'] = array(
      '#type' => 'textfield',
      '#title' => t('Grid width'),
      '#default_value' => $this->options['grid_width'],
      '#description' => t("The widht of base module in columns."),
    );
  }

  /**
   * Render the display in this style.
   */
  function render() {
    $output = parent::render();
    return $output;
  }
}
