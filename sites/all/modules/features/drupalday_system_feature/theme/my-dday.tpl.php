<?php if ($user->uid >0): ?>
<div class="my-dday-container">

	<div class="my-dday-top">
	  <?php print $avatar; ?>
	  
	  <div id="my-dday-user-name">
	    <?php print $username; ?>
	  </div>
	  
	</div>
	
	<hr class="my-dday-separator" />
	
	<div class="my-dday-bottom">
		<ul class="my-dday-menu">
			<li><a href="/user">Il Tuo Profilo</a></li>
			<li><a href="/node/add/session">Proponi un talk</a></li>
		</ul>
	
	
	</div>
</div>
<?php endif; ?>