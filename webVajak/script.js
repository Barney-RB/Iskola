/* Egyszerű scroll animáció az oldal szekciói között
document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function(e) {
        e.preventDefault();
        document.querySelector(this.getAttribute('href')).scrollIntoView({
            behavior: 'smooth'
        });
    });
});*/
import ScrollMagic from 'scrollmagic';

const controller = new ScrollMagic.Controller();

// Select all elements you want to animate
const animatedElements = document.querySelectorAll('.animate-on-scroll');

animatedElements.forEach((element) => {
  const scene = new ScrollMagic.Scene({
    triggerElement: element,
    triggerHook: 0.5, // animate when element is 50% in view
  })
  .setClassToggle(element, 'animate') // add class "animate" to element when in view
  .addTo(controller);
});
