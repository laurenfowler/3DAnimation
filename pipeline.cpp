#include "includes.h"
#include "constants.h"
#include "prototypes.h"

void pipeline(struct house *side){
	extern double x_spin;
	extern double y_spin;
	extern double z_spin;

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glRotated(x_spin, 1, 0, 0);
	glRotated(y_spin, 0, 1, 0);
	glRotated(z_spin, 0, 0, 1);

}
