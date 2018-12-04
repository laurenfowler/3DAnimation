#ifndef RESHAPE
#define RESHAPE

#include "includes.h"

void reshape (int w, int h)
{
   extern double near_val, far_val;
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   glFrustum (-1.0, 1.0, -1.0, 1.0, near_val, far_val);
   //glOrtho   (-10.0, 10.0, -10.0, 10.0, 1.0, 20.0);
   
   glMatrixMode (GL_MODELVIEW);
   }

#endif
