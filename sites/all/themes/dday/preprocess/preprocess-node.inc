<?php

function dday_alpha_preprocess_node_session(&$vars) {
  $node = &$vars['node'];
  $content = &$vars['content'];
  if (isset($content['field_session_experience_level'][0]['#markup'])) {
    $vars['experience_class'] = drupal_html_id($content['field_session_experience_level'][0]['#markup']);
  }
}

function dday_alpha_preprocess_node(&$vars) {
  $functions = array(__FUNCTION__ . '_' . $vars['node']->type, ($vars['teaser'] ? __FUNCTION__ . '_' . 'teaser' : ''));
  foreach ($functions as $function) {
     if (function_exists($function)) {
       $function($vars);
     }
  }
}