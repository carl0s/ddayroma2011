(function ($) {
  Drupal.behaviors.customOmegaSubthemeJS = {
    attach: function(context, settings) {
      // you can implement your custom javascript/jquery here,
      // and also create other attached behaviors
      
      $('#edit-track-wrapper input:checked').parent().addClass('selected')
      
    }
  };
})(jQuery);
