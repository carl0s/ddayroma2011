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
      })
    }
  };
})(jQuery);
