#include"Window.h"

Window::Window()
{
	l = 0; w = 0; x = 0; y = 0;
}
Window::Window(int a, int b)
{
	x = a;
	y = b;
}

void Window::setWindowLength(int a)
{
	l = a;
}

void Window::setWindowWidth(int a)
{
	w = a;
}

