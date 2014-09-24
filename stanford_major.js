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

   Drupal.behaviors.cantflip = {
    attach: function (context, settings) {
      /**
       * IOS devices can not handle the flip
       */
      if(navigator.userAgent.match(/iPhone|iPad|iPod/i)) {
        jQuery('.card-flipper', context).click(function(e) {
          e.preventDefault();
          var loca = $(this).find(".card-learn-more a").attr('href');
          console.log(loca);
          window.location = loca;
        });
      }
    }
  };


})(jQuery);

jQuery(document).ready(function() {

  /**
   * IOS devices can not handle the flip
   */
  if(navigator.userAgent.match(/iPhone|iPad|iPod/i)) {
    jQuery('body').addClass('cantflip');
  }

});

