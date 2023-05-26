#pragma once
#include"CImg.h"
#include"util.h"
#include<iostream>
using namespace std;

class Shape
{
	int x, y;
	float* color;
public:
	Shape();
	Shape(float*);
	Shape(const Shape&);
	virtual void drawShape();
	int getX();
	int getY();
	float* getColor();
	void setX(int);
	void setY(int);
	void setColor(float*);

};

class Cir : public Shape
{
	int radius;
public:
	Cir();
	Cir(int);
	void drawShape(int, int, float*);
	void setRad(int);
};

class Rec : public Shape
{
	int height, width;
public:
	Rec();
	Rec(int, int);
	void drawShape(int, int);
};

class Tri : public Shape
{
	int x1, y1;
	int x2, y2;
	//x and y of base class is P vertix
	//x1, y1 is Q and x2, y2 is R vertix
public:
	Tri();
	Tri(int, int, int, int, int, int);
	void drawShape(float*);
};
