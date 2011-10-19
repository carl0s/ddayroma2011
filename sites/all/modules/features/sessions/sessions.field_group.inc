<?php
/**
 * @file
 * sessions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sessions_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_schedule_info|node|session|form';
  $field_group->group_name = 'group_session_schedule_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Schedule Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_session_room',
      1 => 'field_session_timeslot',
      2 => 'field_session_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_session_schedule_info|node|session|form'] = $field_group;

  return $export;
}
