(function ($) {
  Drupal.behaviors.customOmegaSubthemeJS = {
    attach: function(context, settings) {
      // you can implement your custom javascript/jquery here,
      // and also create other attached behaviors
      
      $('#edit-track-wrapper input:checked').parent().addClass('selected');
      $('.form-item-track').live('click',function() {
        $(this).find('input').attr('checked', true);
        $('.form-item-track').removeClass('selected');
        $(this).addClass('selected');
      });
      
     // $('.scrollable').scrollable({ circular:true, speed: 800 }).autoscroll(13000).navigator();
     $('#region-user-first ul.menu li a').hover(
        function() {
          $('#region-preface-first .region-inner').addClass('selected');
        },
        function() {
          $('#region-preface-first .region-inner').removeClass('selected');
        }
     )

     $('#region-user-second ul.menu li a').hover(
        function() {
          $('#region-preface-second .region-inner').addClass('selected');
        },
        function() {
          $('#region-preface-second .region-inner').removeClass('selected');
        }
     )
     
     $('#region-user-third ul.menu li a').hover(
        function() {
          $('#region-preface-third .region-inner').addClass('selected');
        },
        function() {
          $('#region-preface-third .region-inner').removeClass('selected');
        }
     )
     
     _submenu('#block-menu-block-2', '#eventomenu');
     _submenu('#block-menu-block-4', '#sessionimenu');
     _submenu('#block-menu-block-5', '#sponsormenu');
     _submenu('#block-menu-block-3', '#mydrupalday');
     _submenu('#block-menu-block-1', '#contattimenu');
     _submenu('#block-menu-block-6', '#partecipamenu');
     
	function _submenu(menu, parent) {
	     
		$(parent).attr('href', 'javascript:void(0)');
	     
		$(parent).click(function() {
			return false;
		});
	     
		$(parent).css('cursor', 'default');

		$(parent).hover(function() {
			$(menu).slideDown();
		}, function() {
			$(menu).hide();
		});

		$(menu).hover(function() {
			$(menu).show();
		}, function() {
			$(menu).hide();
		});
	}
     
     $(function(){
			$('#slides').slides({
				preload: true,
				preloadImage: 'images/slider/loading.gif',
				play: 5000,
				pause: 2500,
				hoverPause: true,
				animationStart: function(current){
					$('.caption').animate({
						bottom:-35
					},100);
					if (window.console && console.log) {
						// example return of current slide number
						console.log('animationStart on slide: ', current);
					};
				},
				animationComplete: function(current){
					$('.caption').animate({
						bottom:0
					},200);
					if (window.console && console.log) {
						// example return of current slide number
						console.log('animationComplete on slide: ', current);
					};
				},
				slidesLoaded: function() {
					$('.caption').animate({
						bottom:0
					},200);
				}
			});
		});

    }
  };
})(jQuery);
