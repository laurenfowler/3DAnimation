#include "includes.h"
#include "constants.h"
#include "prototypes.h"

void mouse(int button, int state, int x, int y){
	extern double dx, dy, dz;
	
	int new_y = WINDOW_HEIGHT - y;

	switch(button){
		case GLUT_LEFT_BUTTON:
			if(state == GLUT_DOWN){
				if(x < 250.0 && new_y > x){
					dy = dy + 1.0;
					spin_house();
				}
				else if(x>250 && new_y>500-x){
					dx = dx + 1.0;
					spin_house();
				}
				else{
					dz = dz + 1.0;
					spin_house();
				}
			}
			break;
		case GLUT_RIGHT_BUTTON:
			if(state == GLUT_DOWN){
				if(x < 250.0 && new_y > x){
					dy = dy - 1.0;
					spin_house();
				}
				else if(x>250 && new_y>500-x){
					dx = dx - 1.0;
					spin_house();
				}
				else{
					dz = dz - 1.0;
					spin_house();
				}
			}
			break;
		default:
			break;

	}


}

void processSpecialKeys(int key, int x, int y){
    extern double cam_x, cam_y, near_val, far_val;
    switch(key){
        case GLUT_KEY_PAGE_UP:
            cam_x = cam_x - 1.0;
            break;
        case GLUT_KEY_PAGE_DOWN:
            cam_x = cam_x + 1.0;
            break;
    }
    //reshape(1, 1);
    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y){
   extern double dx, dy, dz;
   extern double x_spin, y_spin, z_spin;   
   extern double cam_x, cam_y;
   extern int DRAWFILL;
    if(key == 's' || key=='S' ){
        dx = 0.0;
        dy = 0.0;
        dz = 0.0;
    }
    if(key == 'q' || key == 'Q'){
        exit(0);
    }
    if(key == 'r'){
        dx = 0.0;
        dy = 0.0;
        dz = 0.0;
        x_spin = 0.0;
        y_spin = 0.0;  
        z_spin = 0.0;
    }
    if(key == 'R'){
        cam_x = 5.0;
        cam_y = 2.0;
        x_spin = 0.0;
        y_spin = 0.0;
        z_spin = 0.0;
		dx = 0.0;
		dy = 0.0;
		dz = 0.0;
		DRAWFILL = 0;
    }
        


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

void onAxis(int msg){
    extern int DRAWAXIS;
    switch(msg){
        case 1:
            DRAWAXIS = 1;
            break;
        case 2:
            DRAWAXIS = 0;
            break;
    }
    glutPostRedisplay();
}

void onFill(int msg){
	extern int DRAWFILL;
	switch(msg){
		case 1:
			DRAWFILL = 1;
			break;
		case 2:
			DRAWFILL = 0;
			break;
	}
	glutPostRedisplay();	
}

