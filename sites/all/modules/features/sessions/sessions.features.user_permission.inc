<?php
/**
 * @file
 * sessions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sessions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create room content
  $permissions['create room content'] = array(
    'name' => 'create room content',
    'roles' => array(),
  );

  // Exported permission: create session content
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create time_slot content
  $permissions['create time_slot content'] = array(
    'name' => 'create time_slot content',
    'roles' => array(),
  );

  // Exported permission: delete any room content
  $permissions['delete any room content'] = array(
    'name' => 'delete any room content',
    'roles' => array(),
  );

  // Exported permission: delete any session content
  $permissions['delete any session content'] = array(
    'name' => 'delete any session content',
    'roles' => array(),
  );

  // Exported permission: delete any time_slot content
  $permissions['delete any time_slot content'] = array(
    'name' => 'delete any time_slot content',
    'roles' => array(),
  );

  // Exported permission: delete own room content
  $permissions['delete own room content'] = array(
    'name' => 'delete own room content',
    'roles' => array(),
  );

  // Exported permission: delete own session content
  $permissions['delete own session content'] = array(
    'name' => 'delete own session content',
    'roles' => array(),
  );

  // Exported permission: delete own time_slot content
  $permissions['delete own time_slot content'] = array(
    'name' => 'delete own time_slot content',
    'roles' => array(),
  );

  // Exported permission: edit any room content
  $permissions['edit any room content'] = array(
    'name' => 'edit any room content',
    'roles' => array(),
  );

  // Exported permission: edit any session content
  $permissions['edit any session content'] = array(
    'name' => 'edit any session content',
    'roles' => array(),
  );

  // Exported permission: edit any time_slot content
  $permissions['edit any time_slot content'] = array(
    'name' => 'edit any time_slot content',
    'roles' => array(),
  );

  // Exported permission: edit own room content
  $permissions['edit own room content'] = array(
    'name' => 'edit own room content',
    'roles' => array(),
  );

  // Exported permission: edit own session content
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(),
  );

  // Exported permission: edit own time_slot content
  $permissions['edit own time_slot content'] = array(
    'name' => 'edit own time_slot content',
    'roles' => array(),
  );

  return $permissions;
}
