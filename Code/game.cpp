//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "Shape.h"
#include "util.h"
#include "Window.h"
#include "Entities.h"
#include"Cannon.h"
#include"Player.h"
#include"Pellet.h"
#include"Level.h"
#include"Menu.h"
#include"enemy.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
template<class T>
bool collision(T x1, T y1, T x2, T y2)
{
	int col = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	if (col <= 5)
		return true;
	else
		return false;
}

void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}
//level 1
int x1 = GetRandInRange(0, 200);
int x2 = GetRandInRange(500, 800);



//level 2
int xx1 = GetRandInRange(0, 200);
int yy1 = GetRandInRange(0, 400);

int xx2 = GetRandInRange(250, 450);
int yy2 = GetRandInRange(0, 400);

int xx3 = GetRandInRange(500, 700);
int yy3 = GetRandInRange(0, 400);

//player
int xI = 400, yI = 400, P1, P2;
int xII = 10, yII = 10;

void drawCar() {
	DrawSquare(xI, yI, 20, colors[WHITE]);
	glutPostRedisplay();
}


bool flag = true;


void moveCar() {
	
	if (xI > 10 && flag) {
		xI -= 10;
		cout << "going left";
		if(xI < 100)
			
			flag = false;

	}
	else if (xI < 1010 && !flag) {
		cout << "go right";
		xI += 10;
		if (xI > 900)
			flag = true;
	}
}
Player Player1;
Player Player2;
/*
 * Main Canvas drawing function.
 * */
int opt = 0;
void MU()
{
	Menu M;
}

void level_call(int t, Player &p)
{
	if(opt-1==0)
	Level(t, &p, x1, x2, xx3, yy1, yy2, yy3);
	else if(opt-1==1)
		Level(t, &p, xx1, xx2, xx3, yy1, yy2, yy3);
	else if (opt - 1 == 2)
		Level(t, &p, xx1, xx2, xx3, yy1, yy2, yy3);
}


void PVP(int t, Player& p1, Player& p2)
{
	Level(t, &p1, &p2, x1, x2);
}
void GameDisplay()/**/
{
	// set the background color using function glClearColor.
// to change the background play with the red, green and blue values below.
// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.
	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
		0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear(GL_COLOR_BUFFER_BIT); //Update the colors
	


	Player P1(Player1);
	Player P2(Player2);
	if (opt == 0)
	{
		MU();
	}
	else if (opt == 1)
	{
		level_call(0, P1);
		P1.drawPlayer(xI, yI);
		enemy bot1(10, 10);
		
	}
	else if (opt == 2)
	{
		P1.drawPlayer(xI, yI);
		level_call(1, P1);
		enemy bot1(10, 10);
		enemy bot2(300, 600);
		//bot1.drawEnemy();
		//enemy bot2(100, 100);
		//bot1.drawEnemy();
	}
	else if (opt == 3)
	{
		P1.drawPlayer(xI, yI);
		level_call(2, P2);
	}
	else if (opt == 10) {
		PVP(opt, P1, P2);
		P1.drawPlayer(xI, yI);
		P2.drawPlayer(xII, yII);
	}
	glutSwapBuffers(); // do not modify this line..
}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {

	Pellet PP;
	if (key== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 10;
	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 10;
	
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
	
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
	
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;
	}

	if (key == 'p' || key == 'P')
	{
		opt = 1;
	}
	if (key == 'n' || key == 'N')
	{
		opt++;
	}
	if (key == 'o' || key == 'O')
	{
		opt = 10;
	}
	if (key == 'd' || key == 'D')
	{
		xII += 10;
	}
	if (key == 'a' || key == 'A')
	{
		xII -= 10;
	}
	if (key == 's' || key == 'S')
	{
		yII -= 10;
	}
	if (key == 'w' || key == 'W')
	{
		yII += 10;
	}
	glutPostRedisplay();
}



/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here
	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	int width = 1000, height = 600; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Atari Combat by Ibz"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* RushHour_CPP_ */
