﻿$(function () {
    var defaultSliderOptions = {
        mode: 'fade',
        speed: 3000,
        pause: 7000,
        preloadImages: 'all',
        touchEnabled: false,
        pager: false,
        controls: false,
        auto: true
    };

    $(".main-page-banner .banner-slider").bxSlider(jQuery.extend(defaultSliderOptions, {          
        })
    );
    
    $(".page-banner .left .banner-slider").bxSlider( jQuery.extend(defaultSliderOptions, {
        pause: 7000
        })
    );
    
    $(".page-banner .right .banner-slider").bxSlider(jQuery.extend(defaultSliderOptions, {
        pause: 14000
        })
    );

    $(".catalogue-item").click(function() {
        document.location = $(this).attr("href");
    });

    $(".photo-gallery img").each(function () {
        var href = $(this).attr("src").replace("photo-s", "photo-l");
        $(this).wrap("<a href='" + href + "'></a>");
    });
    
    $(".panoramas img").each(function () {
        var cfg = $(this).attr("src").replace("preview.jpg", "config.xml");
        var name = $(this).attr("title");
        var href = $(this).attr("href");
        $(this).before("<a target='blanc' class='title' href='" + href + "'>" + name + "</a>");
        $(this).wrap("<a target='blanc' href='/photo/panorama.asp?name=" + name + "&cfg=" + cfg + "'></a>");
    });

    $(".photo-gallery").photobox('a', {
        time: 0,
        zoomable: false
    });

    //Set top menu selection
    var location = document.location.pathname.split("/")[1];
    $(".page-menu a").each(function () {
        var href = $(this).attr("href").split("/")[1];
        if (location == href)
            $(this).addClass("selected");
    });
    
    //Back button
    var back = $(".back");
    if (document.referrer == "" || history.length <= 1)
        back.hide();
    else {
        back.css("opacity", 0.6);
        back.click(function() {
            history.back();
        });
    }
});