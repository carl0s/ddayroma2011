<article class="news">
  <h2><a href="<?php $node_url ?>" title="<?php print $title?>"><?php print $title; ?></a></h2>
  <h3><?php print format_date($created, $type = 'medium', $format = '', $timezone = NULL, $langcode = NULL); ?></h3>
  <?php print render($content['body']); ?>
</article>