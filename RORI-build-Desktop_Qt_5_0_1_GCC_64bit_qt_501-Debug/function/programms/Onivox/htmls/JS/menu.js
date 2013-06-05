$(document).ready(function() {
  $('#tab-nav-1 > ul > li > p').click(function() {
    var $parentItem = $(this).parent(),
        slideAmt = $(this).next().width(),
        direction;

    if (parseInt($parentItem.css('marginLeft'), 10) < 0) {
      direction = '+=';
      $(this).removeClass('expanded');
    } else {
      $(this).addClass('expanded');
      direction = '-=';
    }
    $parentItem
      .animate({marginLeft: direction + slideAmt}, 400);
    return false;
  });
 
});

$(document).ready(function() {
  var $topLinks2 = $('#tab-nav-2 > ul > li > p');
  $topLinks2.click(function() {
    var $parentItem = $(this).parent(),
        slideAmt = $(this).next().width(),
        direction;
    $topLinks2.removeClass('expanded');
    if (parseInt($parentItem.css('marginLeft'), 10) < 0) {
      direction = '+=';
    } else {
      $(this).addClass('expanded');
      direction = '-=';
    }
    $parentItem
      .animate({marginLeft: direction + slideAmt}, 400)
        .siblings()
        .animate({marginLeft: '0'}, 150);
    return false;
  });
});


$(document).ready(function() {
  var closeAll,
      $topLinks3 = $('#tab-nav-3 > ul > li > p');

  $('#tab-nav-3 ul ul').css('opacity', '0.5');
  
  setTabIndex();
  
  $topLinks3.click(function() {
    var $parentItem = $(this).parent(),
        slideAmt = $(this).next().width(),
        direction;
    $topLinks3.removeClass('expanded');
    if (parseInt($parentItem.css('marginLeft'), 10) < 0) {
      direction = '+=';
    } else {
      $(this).addClass('expanded');
      direction = '-=';
    }
    $parentItem
    .animate({marginLeft: direction + slideAmt}, 400)
      .siblings()
      .animate({marginLeft: '0'}, 150);
        
    setTabIndex();
    
    return false;
  });
  
  $('#tab-nav-3')
  .mouseleave(function() {
    closeAll = setTimeout(function() {
      $topLinks3.removeClass('expanded').parent().animate({marginLeft: '0'}, 150);
    }, 1000);
  }).mouseenter(function() {
    clearTimeout(closeAll);
  });

  function setTabIndex() {
    $topLinks3.each(function(index) {
      if ($(this).is('.expanded')) {
        $(this).next().find('p').removeAttr('tabIndex');
      } else {
        $(this).next().find('p').attr({tabIndex: '-1'});
      }
    });
  }

  
});
