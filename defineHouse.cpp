#ifndef DEFINE_HOUSE
#define DEFINE_HOUSE	

#include "structs.h"

void defineHouse(struct house *side )
{
	side[0].point[0].x = -1.0;  // Bottom
    side[0].point[0].y = -1.0;
	side[0].point[0].z =  0.0;
	side[0].point[0].w =  1.0;
	side[0].point[1].x = -1.0;
    side[0].point[1].y =  1.0;
	side[0].point[1].z =  0.0;
	side[0].point[1].w =  1.0;
	side[0].point[2].x =  1.0;
    side[0].point[2].y =  1.0;
	side[0].point[2].z =  0.0;
	side[0].point[2].w =  1.0;
	side[0].point[3].x =  1.0;
    side[0].point[3].y = -1.0;
	side[0].point[3].z =  0.0;
	side[0].point[3].w =  1.0;
	side[0].point[4].x = -1.0;  // Bottom
    side[0].point[4].y = -1.0;
	side[0].point[4].z =  0.0;
	side[0].point[4].w =  1.0;

	side[1].point[0].x = -1.0;  // Left Side
    side[1].point[0].y = -1.0;
	side[1].point[0].z =  0.0;
	side[1].point[0].w =  1.0;
	side[1].point[1].x = -1.0;
    side[1].point[1].y = -1.0;
	side[1].point[1].z =  1.0;
	side[1].point[1].w =  1.0;
	side[1].point[2].x =  1.0;
    side[1].point[2].y = -1.0;
	side[1].point[2].z =  1.0;
	side[1].point[2].w =  1.0;
	side[1].point[3].x =  1.0;
    side[1].point[3].y = -1.0;
	side[1].point[3].z =  0.0;
	side[1].point[3].w =  1.0;
	side[1].point[4].x = -1.0;  // Left Side
    side[1].point[4].y = -1.0;
	side[1].point[4].z =  0.0;
	side[1].point[4].w =  1.0;

	side[2].point[0].x = -1.0;  // Right Side 
    side[2].point[0].y =  1.0;
	side[2].point[0].z =  0.0;
	side[2].point[0].w =  1.0;
	side[2].point[1].x = -1.0;
    side[2].point[1].y =  1.0;
	side[2].point[1].z =  1.0;
	side[2].point[1].w =  1.0;
	side[2].point[2].x =  1.0;
    side[2].point[2].y =  1.0;
	side[2].point[2].z =  1.0;
	side[2].point[2].w =  1.0;
	side[2].point[3].x =  1.0;
    side[2].point[3].y =  1.0;
	side[2].point[3].z =  0.0;
	side[2].point[3].w =  1.0;
	side[2].point[4].x = -1.0;  // Right Side 
    side[2].point[4].y =  1.0;
	side[2].point[4].z =  0.0;
	side[2].point[4].w =  1.0;
      	
	side[3].point[0].x = -1.0;  // Back Side 
    side[3].point[0].y = -1.0;
	side[3].point[0].z =  0.0;
	side[3].point[0].w =  1.0;
	side[3].point[1].x = -1.0;
    side[3].point[1].y = -1.0;
	side[3].point[1].z =  1.0;
	side[3].point[1].w =  1.0;
	side[3].point[2].x = -1.0;
	side[3].point[2].y =  0.0;
	side[3].point[2].z =  2.0;
	side[3].point[2].w =  1.0;
	side[3].point[3].x = -1.0;
    side[3].point[3].y =  1.0;
	side[3].point[3].z =  1.0;
	side[3].point[3].w =  1.0;
	side[3].point[4].x = -1.0;
    side[3].point[4].y =  1.0;
	side[3].point[4].z =  0.0;
	side[3].point[4].w =  1.0;

	side[4].point[0].x =  1.0;  // Front Side 
    side[4].point[0].y = -1.0;
	side[4].point[0].z =  0.0;
	side[4].point[0].w =  1.0;
	side[4].point[1].x =  1.0;
    side[4].point[1].y = -1.0;
	side[4].point[1].z =  1.0;
	side[4].point[1].w =  1.0;
	side[4].point[2].x =  1.0;
	side[4].point[2].y =  0.0;
	side[4].point[2].z =  2.0;
	side[4].point[2].w =  1.0;
	side[4].point[3].x =  1.0;
    side[4].point[3].y =  1.0;
	side[4].point[3].z =  1.0;
	side[4].point[3].w =  1.0;
	side[4].point[4].x =  1.0;
    side[4].point[4].y =  1.0;
	side[4].point[4].z =  0.0;
	side[4].point[4].w =  1.0;

	side[5].point[0].x = -1.0;  // Top left
    side[5].point[0].y = -1.0;
	side[5].point[0].z =  1.0;
	side[5].point[0].w =  1.0;
	side[5].point[1].x =  1.0;
    side[5].point[1].y = -1.0;
	side[5].point[1].z =  1.0;
	side[5].point[1].w =  1.0;
	side[5].point[2].x =  1.0;
    side[5].point[2].y =  0.0;
	side[5].point[2].z =  2.0;
	side[5].point[2].w =  1.0;
	side[5].point[3].x = -1.0;
    side[5].point[3].y =  0.0;
	side[5].point[3].z =  2.0;
	side[5].point[3].w =  1.0;
	side[5].point[4].x = -1.0;  // Top left
    side[5].point[4].y = -1.0;
	side[5].point[4].z =  1.0;
	side[5].point[4].w =  1.0;

	side[6].point[0].x = -1.0;  // Top right
    side[6].point[0].y =  1.0;
	side[6].point[0].z =  1.0;
	side[6].point[0].w =  1.0;
	side[6].point[1].x =  1.0;
    side[6].point[1].y =  1.0;
	side[6].point[1].z =  1.0;
	side[6].point[1].w =  1.0;
	side[6].point[2].x =  1.0;
    side[6].point[2].y =  0.0;
	side[6].point[2].z =  2.0;
	side[6].point[2].w =  1.0;
	side[6].point[3].x = -1.0;
    side[6].point[3].y =  0.0;
	side[6].point[3].z =  2.0;
	side[6].point[3].w =  1.0;
	side[6].point[4].x = -1.0;  // Top right
    side[6].point[4].y =  1.0;
	side[6].point[4].z =  1.0;
	side[6].point[4].w =  1.0;



// Define the colors
//
	side[0].color.red   = 1.0;
	side[0].color.green = 0.0;
	side[0].color.blue  = 0.0;
	
	side[1].color.red   = 0.0;
	side[1].color.green = 1.0;
	side[1].color.blue  = 0.0;
	
	side[2].color.red   = 0.0;
	side[2].color.green = 0.0;
	side[2].color.blue  = 1.0;

	side[3].color.red   = 1.0;
	side[3].color.green = 1.0;
	side[3].color.blue  = 0.0;

	side[4].color.red   = 1.0;
	side[4].color.green = 0.0;
	side[4].color.blue  = 1.0;

	side[5].color.red   = 0.0;
	side[5].color.green = 1.0;
	side[5].color.blue  = 1.0;

	side[6].color.red   = 1.0;
	side[6].color.green = 0.0;
	side[6].color.blue  = 0.0;
	
}

#endif
