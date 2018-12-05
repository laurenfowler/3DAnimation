#ifndef RESHAPE
#define RESHAPE

#include "includes.h"
#include "constants.h"

void reshape (int w, int h)
{
   extern double near_val, far_val, top, bottom, left, right;
   extern int PERSPECTIVE, ORTHOGRAPHIC, CUSTOM;


   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();

   if(PERSPECTIVE){
		GLdouble fovy= 2.0 * atan(top/abs(near_val));
		fovy = fovy * (180/3.14);
		GLdouble aspect = (right-left)/(top-bottom);
		gluPerspective(	fovy, aspect, near_val, far_val);
   }
   else if(ORTHOGRAPHIC){
		glOrtho(left, right, bottom, top, near_val, far_val);
   }
   else if(CUSTOM){
		glFrustum(left, right, bottom, top, near_val, far_val);
   }
   else{
		glFrustum(left, right, bottom, top, near_val, far_val);
   }

   glMatrixMode (GL_MODELVIEW);
   }

#endif
