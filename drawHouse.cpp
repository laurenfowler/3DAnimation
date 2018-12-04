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

void drawAxes(int length)
{
    int i, len;

    // Set up some character arrays for axis labels
    char xaxis[] = "X";
    char yaxis[] = "Y";
    char zaxis[] = "Z";

    // Select the Stroke font we want to use
    void *font = GLUT_STROKE_ROMAN;

    // This provides a coordinate axis about the origin.
    glPointSize(1.0);
    glBegin(GL_LINES);
    glVertex3i(0,length,0);
    glVertex3i(0,-length,0);
    glEnd();
    glBegin(GL_LINES);
    glVertex3i(length,0,0);
    glVertex3i(-length,0,0);
    glEnd();
    glBegin(GL_LINES);
    glVertex3i(0,0,length);
    glVertex3i(0,0,-length);
    glEnd();

    // And now we  add some lettering.

    // Z - Label
    glPushMatrix();
    glTranslatef(-0.2, 0.2, 4);
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glScalef(0.002,0.002,0.002);
    len = (int) strlen(zaxis); //draw axis label
    for (i = 0; i < len; i++) {
        glutStrokeCharacter(font, zaxis[i]);
    }
    glPopMatrix();
// Y - Label
    glPushMatrix();
    glTranslatef(0.0, 4, -.4);
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glScalef(0.002,0.002,0.002);
    len = (int) strlen(yaxis);
    for (i = 0; i < len; i++) {
        glutStrokeCharacter(font, yaxis[i]);
    }
    glPopMatrix();

    // X - Label
    glPushMatrix();
    glTranslatef(4.0, 0.0, -.4);
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glScalef(0.002,0.002,0.002);
    len = (int) strlen(xaxis);
    for (i = 0; i < len; i++) {
        glutStrokeCharacter(font, xaxis[i]);
    }
    glPopMatrix();
}




#endif
