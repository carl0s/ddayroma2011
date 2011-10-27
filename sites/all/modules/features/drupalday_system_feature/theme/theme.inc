<?php
// $Id: theme.inc,v 1.1.2.8 2010/10/08 14:02:37 pvhee Exp $

/**
 * @file
 * Theme and template preprocessing code
 *
 */

/**
 *
 * @param unknown_type $vars
 */
function template_preprocess_my_dday(&$vars) {
  global $user;
  $vars['username'] = $user->name;
  $object = new stdClass();
  $object->picture = $user->picture;
  $object->uid = $user->uid;
  $vars['avatar'] = theme('avatar', $object, 'avatar_big');
}

