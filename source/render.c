// render.c

#include "main.h"

void render(sfRenderWindow* window, sfCircleShape* circle) 
{
    sfRenderWindow_clear(window, sfWhite);
    sfRenderWindow_drawCircleShape(window, circle, NULL);
    sfRenderWindow_display(window);
}

void destroyRender(sfRenderWindow* window, sfCircleShape* circle, sfClock* clock)
{
    sfCircleShape_destroy(circle);
    sfRenderWindow_destroy(window);
    sfClock_destroy(clock);
}