// math.c

#include "main.h"
#include <math.h>

double calculateSinPosition(sfClock* clock) 
{
    sfTime t = sfClock_getElapsedTime(clock);
    double x = sfTime_asSeconds(t);

    return SIN_AMPLITUDE * sin(x * SIN_PERIOD);
}
