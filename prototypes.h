#ifndef PROTOTYPES
#define PROTOTYPES

#include "structs.h"

void drawHouse(struct house*);
void display(void);
void init(void);
void defineHouse(struct house*);
void drawHouse(struct house*);
void reshape(int w, int h);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char key, int x, int y);
void spin_house();
void pipeline(struct house*);

#endif
