// render.c

#include "main.h"

void render(
    sfRenderWindow* window,
    sfCircleShape* circle,
    sfRectangleShape* line) 
{
    sfRenderWindow_clear(window, sfWhite);
    sfRenderWindow_drawCircleShape(window, circle, NULL);
    sfRenderWindow_drawRectangleShape(window, line, NULL);
    sfRenderWindow_display(window);
}

void destroyRender(
    sfRenderWindow* window,
    sfCircleShape* circle,
    sfClock* clock,
    sfRectangleShape* line)
{
    sfRectangleShape_destroy(line);
    sfCircleShape_destroy(circle);
    sfRenderWindow_destroy(window);
    sfClock_destroy(clock);
}