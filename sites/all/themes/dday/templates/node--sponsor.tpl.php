<article id="sponsor" class="clearfix">
  <aside class="grid-8 alpha">
    <figure>
      <?php print drupal_render($content['field_sponsor_logo']); ?>
    </figure>
    <?php print drupal_render($content['field_sponsor_session']); ?>
  </aside>
  <section id="content" class="grid-8 omega">
    <?php print drupal_render($content['field_sponsor_website']); ?>
    <?php print drupal_render($content['body']); ?>
    <div class="tweets"><?php print drupal_render($content['field_sponsor_twitter']); ?></div>
    <div class="fb_small"><?php print drupal_render($content['field_sponsor_facebook']); ?></div>
  </section>
</article>