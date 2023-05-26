#include "Shape.h"

Shape::Shape()
{
	x = 0;
	y = 0;
	color = colors[BLACK];
}
Shape::Shape(float* s)
{
	x = 0;
	y = 0;
	color = s;
}
Shape::Shape(const Shape& S)
{
	this->x = 0;
	this->y = 0;
	this->color = S.color;
}

float* Shape::getColor()
{
	return this->color;
	
}
int Shape::getX()
{
	return this->x;
}
int Shape::getY()
{
	return this->y;
}
void Shape::setX(int c)
{
	x = c;
}
void Shape::setY(int c)
{
	y = c;
}
void Shape::setColor(float* s)
{
	color = s;
}
void Shape::drawShape()
{
};
/////////////////////////////////////////////////////////////
//END OF SHAPE DEFINITION//
/////////////////////////////////////////////////////////////

Cir::Cir()
{
	radius = 0;
}
Cir::Cir(int r)
{
	radius = r;
}

void Cir::drawShape(int a, int b, float* s )
{
	setX(a);
	setY(b);
	DrawCircle(a, b, radius, colors[int(s)]);
}

void Cir::setRad(int r)
{
	radius = r;
}

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

Rec::Rec()
{
	height = 0;
	width = 0;
}
Rec::Rec(int h, int w)
{
	height - h;
	width = w;
}
void Rec::drawShape(int a, int b)
{ 
	setX(a);
	setY(b);
	DrawRectangle(a, b, width, height, colors[int(getColor())]);
}
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
Tri::Tri()
{
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;
}

Tri::Tri(int a1, int b1, int a2, int b2, int a3, int b3)
{
	setX(a1);
	setY(b1);
	x1 = a2;
	y1 = b2;
	x2 = a3;
	y2 = b3;
}

void Tri::drawShape(float* s)
{
	DrawTriangle(getX(), getY(), x1, y1, x2, y2, colors[int(s)]);
}