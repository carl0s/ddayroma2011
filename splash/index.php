<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="it" lang="it" dir="ltr"> 
<head> 
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="description" content="Drupalday Roma 2011" />
<meta http-equiv="keywords" content="drupal drupalday drupaldayroma drupaldayroma2011" />
<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.3.2/jquery.min.js" type="text/javascript"></script>
<title>Drupal Day Roma 2011</title> 
<link rel="shortcut icon" href="favicon.ico" type="image/x-icon" /> 
<link type="text/css" rel="stylesheet" media="all" href="css/reset.css" />
<link type="text/css" rel="stylesheet" media="all" href="css/style.css" />
<!--[if IE 7]>
<link type="text/css" rel="stylesheet" media="all" href="css/ie7.css" />
<![endif]-->
</head>
<body>

<div id="container">

<h2>Coming soon...</h2>
<div id="content">
    <h1 class="quotes">Che cosa hanno in comune <span class="yellow">Imprese</span>,<br/>
    <span class="red">Pubbliche Amministrazioni</span> e <span class="blue">Web Developers</span>?</h1>
    <p class="logo"><img src="img/logo.png" alt="" /></p>
</div>
<div id="footer">
    <div>
        <p style="font-size:16px;">DRUPALDAY ROMA 2011 brought you by <a href="http://www.wellnet.it/">Wellnet</a>, <a href="http://www.twinbit.it/">Twinbit</a>, <a href="http://www.bonsaimeme.com/" alt="bmeme">bmeme</a> & <a href="http://www.nois3lab.it/">nois3lab</a></p>
    </div>
    <div id="mailinglist">
        <?php include_once('includes/mailchimp-form.inc'); ?>
    </div>
    <div id="info">
        <p>INFO:&nbsp;<a href="mailto:info@drupalday.it">info@drupalday.it</a></p>
    </div>
</div>

</div>

<script type="text/javascript">
		<!--
		function getWindowHeight() {
			var windowHeight = 0;
			if (typeof(window.innerHeight) == 'number') {
				windowHeight = window.innerHeight;
			}
			else {
				if (document.documentElement && document.documentElement.clientHeight) {
					windowHeight = document.documentElement.clientHeight;
				}
				else {
					if (document.body && document.body.clientHeight) {
						windowHeight = document.body.clientHeight;
					}
				}
			}
			return windowHeight;
		}
		function setContent() {
			if (document.getElementById) {
				var windowHeight = getWindowHeight();
				if (windowHeight > 0) {
					var contentElement = document.getElementById('container');
					var contentHeight = contentElement.offsetHeight;
					if (windowHeight - contentHeight > 0) {
						contentElement.style.position = 'relative';
						contentElement.style.top = ((windowHeight / 2) - (contentHeight / 2)) + 'px';
					}
					else {
						contentElement.style.position = 'static';
					}
				}
			}
		}
		window.onload = function() {
			setContent();
		}
		window.onresize = function() {
			setContent();
		}
		//-->
</script>

<script type="text/javascript">
 $(document).ready(function() {
   $("input#mce-EMAIL").focus(function() {
 		  $(this).val("");
 	 });
   $("input#mce-EMAIL").blur(function() {
     if ($this.val() == '') {
       $(this).val("your@email"); 
     }
 	 });
  });
</script>

</body>
</html>