<?php krp($block); ?>
<div id="block-<?php print $block->module .'-'. $block->delta; ?>" class="clear-block user-count-block block block-<?php print $block->module ?>">
  <?php print theme('render_drupalday_system_feature_user_count'); ?>
  <div class="content"><?php print $content ?></div>
</div>