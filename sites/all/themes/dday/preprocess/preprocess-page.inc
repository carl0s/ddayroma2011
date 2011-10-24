<?php

function dday_alpha_preprocess_page(&$vars) {
  $node = &$vars['node'];
  $item = menu_get_item($_GET['q']);
  // this is really bad....
  if ($vars['is_front'] || ($node && $node->type == 'session') || ($node && $node->type == 'page') || ($item['path'] == 'user/%')) {
       $vars['title_hidden'] = true;
  }
}