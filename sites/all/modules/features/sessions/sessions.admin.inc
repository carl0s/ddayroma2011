<?php

function sessions_admin_form() {
  $form['sessions_status_access'] = array(
    '#type' => 'radios',
    '#title' => t('Let authenticated users to see session status.'),
    '#description' => t('Enabling this option you grant access to session status field to all users.'),
    '#default_value' => variable_get('sessions_status_access', 0),
    '#return_value' => 1,
  );
  return system_settings_form($form);
}