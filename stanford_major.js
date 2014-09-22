 (function($) {

  Drupal.behaviors.flipper = {
    attach: function (context, settings) {
     $(".flip-container").click(function () {
          $(this).toggleClass("focus");
      });
     }
   };

   Drupal.behaviors.flipper_link = {
    attach: function (context, settings) {
      $(".flip-container a").click(function(e) {
        e.stopPropagation();
      });
     }
   };


})(jQuery);