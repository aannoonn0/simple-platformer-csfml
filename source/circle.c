// circle.c

#include "main.h"
#include <stdio.h>

sfCircleShape* MODcircleshape()
{
    sfCircleShape* circle = sfCircleShape_create();
    sfCircleShape_setRadius(circle, CIRCLE_RADIUS);
    sfCircleShape_setOutlineThickness(circle, 5);
    sfCircleShape_setFillColor(circle, sfWhite);
    sfCircleShape_setOutlineColor(circle, sfBlack);
    return circle;
}

void updateCirclePosition(sfCircleShape* circle, sfClock* clock) 
{
    double sinpos = calculateSinPosition(clock);

    sfVector2f circlePos = { SCREEN_WIDTH / 2 - CIRCLE_RADIUS, (SCREEN_HEIGHT / 2 - CIRCLE_RADIUS) + sinpos };
    sfCircleShape_setPosition(circle, circlePos);

    printf("%f\n", sinpos);
}