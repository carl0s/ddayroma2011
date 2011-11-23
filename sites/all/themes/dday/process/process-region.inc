<?php


function dday_alpha_process_region(&$vars) {
  $node = ($vars['node'] ? $vars['node'] : menu_get_object());
  if (in_array($vars['elements']['#region'], array('content', 'menu', 'branding')) && module_exists('sessions')) {
    if ($filter = _session_conditional_check($node)) {
      switch ($vars['elements']['#region']) {
        case 'branding': 
          $vars['linked_logo_img'] = $vars['logo'] ? l($vars['logo_img'], 'sessioni/'.($filter ? $filter : arg(1)), array('rel' => 'home', 'title' => t($vars['site_name']), 'html' => TRUE)) : '';
          break;      
      }
    }
  }
}