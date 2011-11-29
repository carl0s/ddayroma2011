<?php 
  if ($user->uid >0):
  
  //kpr($user);
?>
<div id="my-dday-container" class="my-dday-container clearfix">
	<div class="my-dday-top clearfix">
		<div class="picture"><?php print $avatar;?></div>

		<div id="my-dday-user-name">
			<?php print $username;?>
			<div id="my-dday-logout">( <a href="/user/logout">Sign Out</a> )</div>
		</div>
    
	</div>
	<div class="my-dday-bottom">
		<ul class="my-dday-menu">
			<li>
				<a href="/user">Il Mio Profilo</a>
			</li>
			<li>
				<a href="/user/<?php print $user->uid; ?>/schedule">Le Mie Sessioni</a>
			</li>
		</ul>
	</div>
</div>
<?php endif;?>
