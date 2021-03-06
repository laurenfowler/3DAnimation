#ifndef STRUCTS
#define STRUCTS

typedef struct vertex{
	float x;
	float y;
	float z;
	float w;
}vertex;

typedef struct colortype{
	float red;
	float green;
	float blue;
}colortype;

typedef struct house{
	vertex point[5];
	colortype color;
}house;

#endif
