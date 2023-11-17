//velocityVec.c

#include "main.h"

//line
sfRectangleShape* MODrectLine()
{
	sfRectangleShape* line = sfRectangleShape_create();
	sfVector2f lineSize = { 40, LINE_THICKNESS };
	sfRectangleShape_setSize(line, lineSize);
	sfRectangleShape_setFillColor(line, sfRed);
	//temp
	sfVector2f tpos = { SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 };
	sfRectangleShape_setPosition(line, tpos);
	return line;
}

void vectorUpdate(sfVector2f circlePos, )