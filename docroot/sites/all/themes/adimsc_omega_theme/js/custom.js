// JavaScript Document
(function($) {
  $(document).ready(function() {
    $('#drop-down-login-wrapper.enable-dd .button span span').append('<i aria-hidden="true" class="fa fa-user"></i>');
    $('.sf-main-menu ul').addClass('menu-dropdown').attr('style', 'margin-top: -4px');
    $('.owl-next').append('<i aria-hidden="true" class="fa fa-angle-right"></i>');
    $('.owl-prev').append('<i aria-hidden="true" class="fa fa-angle-left"></i>');
    $('.views-content-title, .views-field-created').wrap('<div class="wrap-me">');
    $('#block-views-cea8a95ddf9c6643ab310ee465277b95 div[id^="field-countdown-timer-note"]').remove();
    $('#block-views-cea8a95ddf9c6643ab310ee465277b95 .countDays').append('<span class="counter-text count-days">Days</span>');
    $('#block-views-cea8a95ddf9c6643ab310ee465277b95 .countHours').append('<span class="counter-text count-hours">Hours</span>');
    $('#block-views-cea8a95ddf9c6643ab310ee465277b95 .countMinutes').append('<span class="counter-text count-minutes">Minutes</span>');
    $('#block-views-cea8a95ddf9c6643ab310ee465277b95 .countSeconds').append('<span class="counter-text count-seconds`">Seconds</span>');
  });
})(jQuery);
