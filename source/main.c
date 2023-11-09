// main.c

#include <stdio.h>
#include "main.h"
#include <SFML/Graphics.h>

int main() 
{
    //core declarations
    sfRenderWindow* window = MODcreateWindow();
    sfEvent event;
    sfClock* clock = sfClock_create();

    //variable declarations
    sfCircleShape* circle = MODcircleshape();
    

    while (sfRenderWindow_isOpen(window)) 
    {
        while (sfRenderWindow_pollEvent(window, &event)) 
        {
            if (event.type == sfEvtClosed) 
            {
                sfRenderWindow_close(window);
            }
        }

        updateCirclePosition(circle, clock);

        render(window, circle);
    }

    destroyRender(window, circle, clock);

    return 0;
}
