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
      
      $('#mydrupalday').click(function() {
        $('.my-dday-container').css('display','block');
        return false;
      })
      
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

    }
  };
})(jQuery);
