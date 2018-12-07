#ifndef DISPLAY
#define DISPLAY

#include "includes.h"
#include "structs.h"
#include "prototypes.h"

void display(void){
	extern double cam_x, cam_y;
	struct house sides[7];
	float *M;
	int i,j;
    extern int DRAWAXIS, DRAWFILL, DRAWSIGN;
	GLenum mode = GL_LINE_LOOP;

	defineHouse(&sides[0]);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glTranslatef(0.0, 0.0, -1.0);
	gluLookAt(cam_x, cam_y, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);

	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //wrap in glPush and glPop so axes do not spin with house
    glPushMatrix();
	pipeline(&sides[0]);

	//send proper draw mode
	if(DRAWFILL){
		mode = GL_POLYGON;
	}

	drawHouse(&sides[0], mode);
    glPopMatrix();
    
    if(DRAWAXIS){
        drawAxes(5);
    }   

    if(DRAWSIGN){
        string msg = "Hello World";
        glColor3f(1.0,1.0,1.0);
        glTranslated(1.0,1.0,1.0);
        for(int i=0; i<msg.size(); i++){
            glutStrokeCharacter(GLUT_STROKE_ROMAN, msg[i]);
        }
    }

	glFlush();
    glutSwapBuffers();

}



#endif
