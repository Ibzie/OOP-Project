#pragma once
#include<iostream>
#include<cmath>
#include"util.h"
#include"CImg.h"
#include "Entities.h"
class Window
{
protected:
	int l;
	int w;
	int x, y;
public:
	Window();
	Window(int, int);
	void setWindowLength(int);
	void setWindowWidth(int);
};



class Exit : public Window
{
public:
	Exit(int, int);
};

