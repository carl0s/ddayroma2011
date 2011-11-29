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
  $vars['avatar'] = theme('user_picture', array('account' => $user));//theme('avatar', $object, 'avatar_big');
  
  drupal_add_js(drupal_get_path('module', 'drupalday_system_feature').'/theme/js/my_dday.js',array('scope' => 'footer', 'weight' => 500));
  drupal_add_css(drupal_get_path('module', 'drupalday_system_feature').'/theme/css/my_dday.css');
	
}