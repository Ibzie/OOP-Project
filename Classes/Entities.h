#pragma once
#include<iostream>
#include<cmath>
#include"util.h"
#include"CImg.h"
#include"Shape.h"

class Entity
{
public:
	int x, y;
	float* col;
	Entity();
	Entity(int, int);
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	~Entity();
};