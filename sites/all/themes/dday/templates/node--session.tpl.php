<article class="session">
  <div class="grid-3 detail alpha">
    <span class="timeslot"> <?php print $content['field_session_timeslot'][0]['#title'] ?> </span>
    <h4>difficoltà</h4>
    <?php if ($content['field_session_experience_level']) : ?>
      <span class="difficulty<?php print ($experience_class ? $experience_class : '') ?> ">
        <?php print drupal_render($content['field_session_experience_level']); ?>
      </span>
    <?php endif; ?>
    <?php if ($content['field_session_to_know_tags']) : ?>
      <h4>da sapere</h4>
      <div class="helpful">
        <?php print drupal_render($content['field_session_to_know_tags']) ?>
      </div>
    <?php endif; ?>
  </div>
  <div class="grid-13 omega">
    <?php if ($page) :?>
      <h1 id="page-title"><?php print $title; ?></h1>    
    <?php else : ?>
      <h2 id='page-title'><?php print l($title, 'node/'.$node->nid) ?> </h2>
    <?php endif; ?>
    <span class="username"> di <?php print theme('username', array('account' => $account)) ?> </span>
    
    <?php if ($content['field_session_tags']) : ?>
      <div class="tags">
        <?php print drupal_render($content['field_session_tags']) ?>
      </div>
    <?php endif; ?>
    
    
    <?php print render($content['body']); ?>
  </div>
</article>