<?php
/**
 * @file
 * Template file for the example display.
 *
 * Variables available:
 * - $plugin: The pager plugin object. This contains the view as well as a lot
 *
 * $nav_title
 *   The formatted title for this view. In the case of block
 *   views, it will be a link to the full view, otherwise it will 
 *   be the formatted name of the year, month, day, or week.
 * 
 * $prev_url
 * $next_url
 *   Urls for the previous and next calendar pages. The links are 
 *   composed in the template to make it easier to change the text,
 *   add images, etc.
 * 
 * $prev_options
 * $next_options
 *   Query strings and other options for the links that need to
 *   be used in the l() function, including rel=nofollow.
 * 
 * $block: 
 *   Whether or not this view is in a block.
 * 
 * $view
 *   The view object for this navigation.
 * 
 * $pager_prefix
 *   Additional information that might be added by overriding template_process_date_views_pager().
 * 
 */
?>
<div class="date-nav-wrapper clear-block">
  <?php if (!empty($pager_prefix)) print $pager_prefix; ?>
  <div class="date-nav">
    <div class="date-prev">
      <?php if (!empty($prev_url)) : ?>
      <span class="next">  <?php print l('&laquo;' . ($mini ? '' : t('Prev', array(), array('context' => 'date_nav'))), $prev_url, $prev_options); ?></span>
      <?php endif; ?>
    &nbsp;</div>
    <div class="date-heading">
      <h3><?php print $nav_title ?></h3>
    </div>
    <div class="date-next">&nbsp;
    <?php if (!empty($next_url)) : ?>
      <span class="next"> <?php print l(($mini ? '' : t('Next', array(), array('context' => 'date_nav'))) . ' &raquo;', $next_url, $next_options); ?> </span>
    <?php endif; ?>  
    </div>
  </div>
</div>