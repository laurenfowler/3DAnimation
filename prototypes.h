#ifndef PROTOTYPES
#define PROTOTYPES

#include "structs.h"

void drawHouse(struct house*);
void display(void);
void init(void);
void defineHouse(struct house*);
void drawHouse(struct house*, GLenum mode);
void reshape(int w, int h);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char key, int x, int y);
void spin_house();
void pipeline(struct house*);
void drawAxes(int length);
void doNothing(int msg);
void onAxis(int msg);
void onFill(int msg);
void onOrtho(int msg);
void onPer(int msg);
void onCustom(int msg);
void onSign(int msg);
void processSpecialKeys(int key, int x, int y);
#endif
