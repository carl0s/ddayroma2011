<?php

class delta_injection_color extends delta_injection {
  /**
   * @todo
   */
  function variables_get() {
    return array(
      'color_' . $this->template->theme . '_files',
      'color_' . $this->template->theme . '_logo',
      'color_' . $this->template->theme . '_palette',
      'color_' . $this->template->theme . '_stylesheets',
      'color_' . $this->template->theme . '_screenshot',
    );
  }
  
  /**
   * @todo
   */
  function form_alter(&$form, &$form_state) {
    color_form_system_theme_settings_alter($form, $form_state);
  }
  
  /**
   * @todo
   */
  function form_validate(&$form, &$form_state) {
    parent::form_validate($form, $form_state);

    $files = $this->backup('color_' . $this->template->theme . '_files');
    
    if (!empty($files) && $directory = dirname(reset($files))) {
      @rename($directory, $directory . '-delta');
    }
  }
  
  /**
   * @todo
   */
  function form_submit(&$form, &$form_state) {
    // Delete old files.
    if (!empty($this->template->settings['color_' . $this->template->theme . '_files'])) {
      foreach ($this->template->settings['color_' . $this->template->theme . '_files'] as $file) {
        @drupal_unlink($file);
      }
      if (isset($file) && $file = dirname($file)) {
        @drupal_rmdir($file);
      }
    }
    
    parent::form_submit($form, $form_state);

    $files = $this->backup('color_' . $this->template->theme . '_files');

    if (!empty($files) && $directory = dirname(reset($files))) {
      @rename($directory . '-delta', $directory);
    }
  }  
}