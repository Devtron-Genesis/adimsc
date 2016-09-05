(function($) {
  // SCRIPT FOR PUSH MENU
  $(document).ready(function() {
    $("#pushMenuBtn").click(function() {
      $(this).toggleClass("on");
      if ($(this).hasClass("on")) {
        $('.push-menu').animate({
          right: "0px"
        }, 400);
        $('body.push').animate({
          right: "250px"
        }, 400);
        $('#pushMenuBtn i').css({
          transform: "rotate(90deg)"
        }, 400);
      } else {
        $('.push-menu').animate({
          right: "-250px"
        }, 400);
        $('body.push').animate({
          right: "0px"
        }, 400);
        $('#pushMenuBtn i').css({
          transform: "rotate(0deg)"
        }, 400);
      }
    });
  });
  // SLIDER SPEED SCRIPTS
  $('#carousel-example-generic').carousel({
    interval: 3000000
  });
  $('#news-carousel').carousel({
    interval: 300000
  });
  $('#mobile-news-carousel').carousel({
    interval: 3000
  });
  $('#video-carousel').carousel({
    interval: 300000
  });
  // SCRIPT FOR PUSH MENU
  $(document).ready(function() {
    $(".resource-btn").click(function() {
      $('.resource-bar').animate({
        left: "0px"
      }, 400);
    });
    $(".resource-bar ul li").click(function() {
      $('.resource-bar').animate({
        left: "-330px"
      }, 400);
    });
    $(".close-btn").click(function() {
      $('.resource-bar').animate({
        left: "-330px"
      }, 400);
    });
  })
})(jQuery);
