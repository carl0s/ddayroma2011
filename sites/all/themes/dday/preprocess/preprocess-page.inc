<?php

function dday_alpha_preprocess_page(&$vars) {
  if ($vars['is_front']) {
    $vars['title_hidden'] = true;
  }
}