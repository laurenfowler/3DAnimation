#include "includes.h"
#include "constants.h"
#include "prototypes.h"

void mouse(int button, int state, int x, int y){
	extern double dx, dy, dz;
	
	int new_y = WINDOW_MAX - y;

	switch(button){
		case GLUT_LEFT_BUTTON:
			if(state == GLUT_DOWN){
				if(x < 250.0 && y > x){
					dy = dy - 1.0;
					spin_house();
				}
				else if(x>250 && y>500-x){
					dx = dx - 1.0;
					spin_house();
				}
				else{
					dz = dz - 1.0;
					spin_house();
				}
			}
			break;
		case GLUT_RIGHT_BUTTON:
			if(state == GLUT_DOWN){
				if(x < 250.0 && y > x){
					dy = dy + 1.0;
					spin_house();
				}
				else if(x>250 && y>500-x){
					dx = dx + 1.0;
					spin_house();
				}
				else{
					dz = dz + 1.0;
					spin_house();
				}
			}
			break;
		default:
			break;

	}


}

void keyboard(unsigned char key, int x, int y){

}

void spin_house(){
	extern double x_spin;
	extern double y_spin;
	extern double z_spin;
	extern double dx, dy, dz;

	x_spin = x_spin + dx;
	if(x_spin > 360.0){
		x_spin = x_spin - 360.0;
	}

	y_spin = y_spin + dy;
	if(y_spin > 360.0){
		y_spin = y_spin - 360.0;
	}
	z_spin = z_spin + dz;
	if(z_spin > 360.0){
		z_spin = z_spin - 360.0;
	}
	glutPostRedisplay();


}
