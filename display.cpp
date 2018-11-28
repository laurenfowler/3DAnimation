#ifndef DISPLAY
#define DISPLAY

#include "includes.h"
#include "structs.h"
#include "prototypes.h"

void display(void){
	
	struct house sides[7];
	float *M;
	int i,j;

	defineHouse(&sides[0]);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glTranslatef(0.0, 0.0, -1.0);
	gluLookAt(3.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);

	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	drawHouse(&sides[0]);
	glFlush();


}

#endif
