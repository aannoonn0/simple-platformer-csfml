// main.h

#ifndef MAIN_H
#define MAIN_H

#include <SFML/Graphics.h>

/*core data*/
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600


/*circle data*/
#define CIRCLE_RADIUS 30
#define SIN_AMPLITUDE 100
#define SIN_PERIOD 2

sfRenderWindow* MODcreateWindow();
sfCircleShape* MODcircleshape();

/*math calculations*/
double calculateSinPosition(sfClock* clock);

/*circle calculations*/
void updateCirclePosition(sfCircleShape* circle, sfClock* clock);
void updateCirclePosition(sfCircleShape* circle, sfClock* clock);

/*render*/
void render(sfRenderWindow* window, sfCircleShape* circle);
void destroyRender(sfRenderWindow* window, sfCircleShape* circle, sfClock* clock);

#endif 