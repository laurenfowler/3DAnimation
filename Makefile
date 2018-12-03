CC = g++
CFLAGS = -g
GLUT = -lglut -lGL -lGLU 
OBJS = display.o defineHouse.o drawHouse.o reshape.o keyboard_mouse.o pipeline.o

run: main.o $(OBJS)
	$(CC) $(CLFAGS) main.o $(OBJS) $(GLUT) 

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

display.o: display.cpp
	$(CC) $(CFLAGS) -c display.cpp

defineHouse.o: defineHouse.cpp
	$(CC) $(CFLAGS) -c defineHouse.cpp

drawHouse.o: drawHouse.cpp
	$(CC) $(CLFAGS) -c drawHouse.cpp

reshape.o: reshape.cpp
	$(CC) $(CFLAGS) -c reshape.cpp

keyboard_mouse.o: keyboard_mouse.cpp
	$(CC) $(CFLAGS) -c keyboard_mouse.cpp

pipeline.o: pipeline.cpp
	$(CC) $(CFLAGS) -c pipeline.cpp

clean: 
	rm *.o
	rm a.out
