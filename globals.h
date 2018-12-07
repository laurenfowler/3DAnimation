#ifndef GLOBALS
#define GLOBALS

	extern const int WINDOW_HEIGHT;
	extern const int WINDOW_WIDTH;

	double x_spin = 0.0;
	double y_spin = 0.0;
	double z_spin = 0.0;
	double dx, dy, dz;
    int menu, axis, fill, ortho, custom, perspect, sign;
    int DRAWAXIS, DRAWFILL, ORTHOGRAPHIC, CUSTOM, PERSPECTIVE, DRAWSIGN;

    //camera globals
    double cam_x = 5.0;
    double cam_y = 2.0;

    double near_val = 1.5;
    double far_val = 20.0;
	double top = 1.0;
	double bottom = -1.0;
	double left = -1.0;
	double right = 1.0;

#endif
