#include "Entities.h"


Entity::Entity()
{
	x = 0;
	y = 0;
}

Entity::Entity(int a, int b)
{
	x = a;
	y = b;
}


Entity::~Entity()
{
	cout << "Entity was destoryed";
}
void Entity::setX(int a)
{
	x = a;
}

void Entity::setY(int b)
{
	y = b;
}

int Entity::getX()
{
	return x;
}

int Entity::getY()
{
	return y;
}

//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////





