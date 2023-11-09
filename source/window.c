// window.c

#include "main.h"

sfRenderWindow* MODcreateWindow() 
{
    sfVideoMode mode = { SCREEN_WIDTH, SCREEN_HEIGHT, 32 };
    return sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
}
