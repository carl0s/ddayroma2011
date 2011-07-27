<?php
/**
 * @file
 * drupalday_system.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function drupalday_system_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: devel
  $roles['devel'] = array(
    'name' => 'devel',
    'weight' => '3',
  );

  return $roles;
}
