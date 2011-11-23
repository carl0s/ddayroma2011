<?php

function dday_alpha_preprocess_node_session(&$vars) {
  $node = &$vars['node'];
  $content = &$vars['content'];
  $page = $vars['page'];
  
  if (isset($content['field_session_experience_level'][0]['#markup'])) {
    $vars['experience_class'] = drupal_html_id($content['field_session_experience_level'][0]['#markup']);
  }
  if ($page) {
    if (isset($content['field_session_sponsor'])) {
      $langcode = $GLOBALS['language_content']->language;
      $sponsor = node_load($content['field_session_sponsor']['#items'][0]['nid']);
      node_build_content($sponsor, 'full',  $langcode);
      $vars['sponsor_logo'] = $sponsor->content['field_sponsor_logo'];
    }
  }
  $vars['account'] = user_load($node->uid);
}

function dday_alpha_preprocess_node(&$vars) {
  $functions = array(__FUNCTION__ . '_' . $vars['node']->type, ($vars['teaser'] ? __FUNCTION__ . '_' . 'teaser' : ''));
  foreach ($functions as $function) {
     if (function_exists($function)) {
       $function($vars);
     }
  }
}