<?php

function dday_alpha_preprocess_page(&$vars) {
  $node = &$vars['node'];
  if ($vars['is_front'] || ($node && $node->type == 'session')) {
    $vars['title_hidden'] = true;
  }
}