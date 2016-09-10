// JavaScript Document
(function($) {
  $(document).ready(function() {
    $('#drop-down-login-wrapper.enable-dd .button span span').append('<i aria-hidden="true" class="fa fa-user"></i>');
    $('.sf-main-menu ul').addClass('menu-dropdown').attr('style', 'margin-top: -4px');
    $('.owl-next').append('<i aria-hidden="true" class="fa fa-angle-right"></i>');
    $('.owl-prev').append('<i aria-hidden="true" class="fa fa-angle-left"></i>');
    $('.views-content-title, .views-field-created').wrap('<div class="wrap-me">');
    // Used for Auto Scrolling of All News Page
    $('.page-home .views-field-field-news-image').click(function() {
      var thumb = $(this).siblings('.views-field.views-field-nid').text();
      $.session.set('thumbs', thumb);
    });
    // views_slideshow_jcarousel_pager_item
    if($.session.get('thumbs')) {
      var clicked = parseInt($.session.get('thumbs'));
      $('.page-all-news .views_slideshow_jcarousel_pager_item')
      .each(function(){
        var current = parseInt($(this).text());
        if(clicked == current) {
          $(this).trigger('click');
          // $(this).addClass('active');
          // $(this).not($(this)).hide();
          // $(this).siblings().hide();
          $.session.remove('thumbs');
          // $(this).delegate('click');
        }
      });
    }
    // $.session.remove('thumbs');
  });
})(jQuery);
