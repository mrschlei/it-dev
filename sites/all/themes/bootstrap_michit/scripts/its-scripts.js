(function ($) {
$(document).ready(function() {
	transitionBox(null, $("div#um-it-logos").children("div").first());
	
	$(".showhidetech").click(function() {
		$(this).next(".terms").slideToggle();
		//$(this).toggleClass("open");
		if ($(this).text() == "Show Details") {
			$(this).text("Hide Details");
		}
		else {$(this).text("Show Details");}
	});
	
	$(".mobilebutton").click(function(){
		$(".region-header .globalnav ul").slideToggle("");
		$(".mobilebutton").attr("aria-expanded",$(this).attr("aria-expanded")==="true"?"false":"true");
	});
	$(window).resize(function(){
	//	location.reload();
	});
	$(".region-header .globalnav").accessibleDropDown();

	$('div.region.region-sidebar-first .block-title').html($('div.region.region-sidebar-first .block-title').text().replace($('div.region.region-sidebar-first .block-title').text(), '<a href="javascript:link()">'+$('div.region.region-sidebar-first .block-title').text()+'</a>'));
	$("div.region.region-sidebar-first .block-title").attr("aria-expanded", false).attr("role", "button");
	$("div.region.region-sidebar-first .block-title").click(function(){
		$("div.region.region-sidebar-first ul.menu.nav").slideToggle("");
		$("div.region.region-sidebar-first .block-title").toggleClass('open');
		$("div.region.region-sidebar-first .block-title").attr("aria-expanded",$(this).attr("aria-expanded")==="true"?"false":"true");
	});
	$(window).resize(function(){
		$("div.region.region-sidebar-first ul.menu.nav").removeAttr("style");
	});

	$('a.dropdown-toggle').removeAttr('data-toggle');
	$('a.dropdown-toggle').removeAttr('data-target');

	$(".image-zoom").fancybox({
		'autoScale'	: true,
		'titleShow' : false,
		'onClosed': function() {
			$("#fancy-content").empty();
		}
	});
	$(".image-zoom-link").fancybox({
		'autoScale'	: true,
		'titleShow' : false,
		'onClosed'	: function() {
			$("#fancy-content").empty();
		}
	});
	$(".modal-info").fancybox({
		'type'		: 'iframe',
		'autoDimensions': false,
		'autoScale'	: false,
		'width'		: 840,
		'height'	: 640,
		'padding'	: 0,
		'scrolling'	: 'auto',
		'titleShow'     : false,
		'onClosed'	: function() {
			$("#fancy-content").empty();
		}
	});

	$("a[rel=gallery]").fancybox({
		'autoScale'	: true,
		'titleShow' : true,
		'titlePosition'	: 'inside',
		'onClosed': function() {
			$("#fancy-content").empty();
		}
	});
		
	//TABLE FILTERS
	$('.view-umtv-channel-lineup table').filterTable({ // apply filterTable to all tables on this page
		inputSelector: '#umtv-channel-input-filter'
		});		

});
$.fn.accessibleDropDown = function ()
{
	var el = $(this);
	$("a", el).focus(function() {
		$(this).parents("li").addClass("hover");
		$(this).parents("li").setAttribute("aria-expanded", true);
	}).blur(function() {
		$(this).parents("li").removeClass("hover");
		$(this).parents("li").setAttribute("aria-expanded", false);
	});
}

console.log('%c Go Blue! ', 'background: #00274c; color: #ffcb05');

})(jQuery);

function transitionBox(from, to) {
    function next() {
        var nextTo;
        if (to.is(":last-child")) {
            nextTo = to.closest("#um-it-logos").children("div").first();
        } else {
            nextTo = to.next();
        }
        to.fadeIn(1000, function () {
            setTimeout(function () {
                transitionBox(to, nextTo);
            }, 2000);
        });
    }
    if (from) {
        from.fadeOut(1000, next);
    } else {
        next();
    }
}

function link() {}

setTimeout(function(){var a=document.createElement("script");
var b=document.getElementsByTagName("script")[0];
a.src=document.location.protocol+"//script.crazyegg.com/pages/scripts/0054/2162.js?"+Math.floor(new Date().getTime()/3600000);
a.async=true;a.type="text/javascript";b.parentNode.insertBefore(a,b)}, 1);
