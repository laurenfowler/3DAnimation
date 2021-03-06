#ifndef MAIN
#define MAIN

#include "includes.h"
#include "constants.h"
#include "structs.h"
#include "prototypes.h"
#include "globals.h"

int main(int argc, char** argv)
{
   extern int menu, axis, fill, ortho, custom, perspect, sign;
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);
   glutInitWindowSize (WINDOW_HEIGHT, WINDOW_WIDTH);
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutMouseFunc(mouse);
   glutSpecialFunc(processSpecialKeys);
   glutKeyboardFunc(keyboard);
   glutDisplayFunc(display);
   glutIdleFunc(spin_house);
    
   axis = glutCreateMenu(onAxis);
   glutAddMenuEntry("On", 1);
   glutAddMenuEntry("Off", 2);

   fill = glutCreateMenu(onFill);
   glutAddMenuEntry("On", 1);
   glutAddMenuEntry("Off", 2);

   ortho = glutCreateMenu(onOrtho);
   glutAddMenuEntry("On", 1);
   glutAddMenuEntry("Off", 2);

   perspect = glutCreateMenu(onPer);
   glutAddMenuEntry("On", 1);
   glutAddMenuEntry("Off", 2);

   custom = glutCreateMenu(onCustom);
   glutAddMenuEntry("On", 1);
   glutAddMenuEntry("Off", 2);

   sign = glutCreateMenu(onSign);
   glutAddMenuEntry("On", 1);
   glutAddMenuEntry("Off", 2);

   menu = glutCreateMenu(doNothing);
   glutAddSubMenu("Axes", axis);
   glutAddSubMenu("Fill", fill);
   glutAddSubMenu("Orthographic", ortho);
   glutAddSubMenu("Perspective", perspect);
   glutAddSubMenu("Custom", custom);
   glutAddSubMenu("Sign", sign);
   glutAttachMenu(GLUT_MIDDLE_BUTTON); 

  glutMainLoop();
  return 0;
}

void init(void){
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}

void doNothing(int msg){

}

#endif
       
