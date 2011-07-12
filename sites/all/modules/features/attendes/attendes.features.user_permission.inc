<?php
/**
 * @file
 * attendes.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function attendes_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer gravatar
  $permissions['administer gravatar'] = array(
    'name' => 'administer gravatar',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'gravatar',
  );

  // Exported permission: disable own gravatar
  $permissions['disable own gravatar'] = array(
    'name' => 'disable own gravatar',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'gravatar',
  );

  // Exported permission: use gravatar
  $permissions['use gravatar'] = array(
    'name' => 'use gravatar',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'gravatar',
  );

  return $permissions;
}
