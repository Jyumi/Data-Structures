#include "rectangle.h";
#include <string>
#include <iostream>

Rectangle::Rectangle() :width(1.00), height(1.00) {};
Rectangle::Rectangle(double width, double height) :width(width), height(height) {};


void Rectangle::setHeight(double h)
{
	if (h > 0)
		height = h;
	else
	{
		std::cout << "invalid height";
		exit(EXIT_FAILURE);
	}
}

void Rectangle::setWidth(double w)
{
	if (w > 0)
		width = w;
	else
	{
		std::cout << "invalid width";
		exit(EXIT_FAILURE);
	}
}

double Rectangle::getArea(){
	return width * height;
}

double Rectangle::getPerimeter() {
	return (height * 2) + (width * 2);
}

void Rectangle::printRectangle(std::string rectName)
{
	std::cout << "Rectangle " << rectName << " is " << width << " units wide and " << height << " units high." << std::endl << std::endl;
}