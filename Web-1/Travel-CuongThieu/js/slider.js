
const swiper1 = new Swiper(".slider-1", {
    autoplay: {
        delay: 3500,
        disableOnInteraction: false,

    },
    loop: true,
    navigation: {
        nextEl: ".swiper-next",
        prevEl: ".swiper-prev",
    },
});

const swiper2 = new Swiper(".slider-2", {
    autoHeight: true,
    
    navigation: {
        nextEl: ".swiper-button-next",
        prevEl: ".swiper-button-prev",
    },
});