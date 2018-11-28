#ifndef DRAWHOUSE
#define DRAWHOUSE

#include "includes.h"
#include "structs.h"

void drawHouse( house *side){

	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);

	for (int j=0; j<7; j++){
		glColor3f(side[j].color.red, side[j].color.green, side[j].color.blue);
	
		glBegin(GL_POLYGON);
		for(int i=0; i<5; i++){
			glVertex3f(side[j].point[i].x, side[j].point[i].y, side[j].point[i].z);
		}
		glEnd();
	}
}
#endif
