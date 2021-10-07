#pragma once
#include <string>

class Rectangle {
	private: 
		double height, width;
	public:
		Rectangle();
		Rectangle(double height, double width);//user defines h and w and we will assign it to our variables
		double getWidth() const { return width; }; //getters we want to preserve values and just get them so we use const
		double getHeight() const { return height; };//getters we want to preserve values and just get them so we use const
		double getArea();
		double getPerimeter();
		void setHeight(double);
		void setWidth(double);
		void printRectangle(std::string rectName);
};
