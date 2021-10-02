#ifndef RECTANGLE
#define RECTANGLE

#include <iostream>
#include <string>
using namespace std;

class Rectangle {
	private: 
		double height;
		double width;
	public:
		//Rectangle();
		//Rectangle(double height, double width);
		//void setHeight(double);
		//void setWidth(double);
		//void printRectangle(string rectName);

		Rectangle() {
			height = 1;
			width = 1;
		}

		Rectangle(double h, double w) //user defines h and w and we will assign it to our variables
		{
			setHeight(h);
			setWidth(w);
		}

		void setHeight(double h)
		{
			if (h > 0)
				height = h;
			else
			{
				cout << "invalid height";
				exit(EXIT_FAILURE);
			}
		}

		void setWidth(double w)
		{
			if (w > 0)
				width = w;
			else
			{
				cout << "invalid width";
				exit(EXIT_FAILURE);
			}
		}

		void printRectangle(string rectName)
		{
			cout << "Rectangle " << rectName << " is " << width << " units wide and " << height << " units high." << endl << endl;
		}


		//getter functions
		double getHeight() const //getters we want to preserve values and just get them so we use const
		{
			return height;
		}

		double getWidth() const //getters we want to preserve values and just get them so we use const
		{
			return width;
		}

		double getArea() const //getters we want to preserve values and just get them so we use const
		{
			return height * width;
		}

		double getPerimeter() const //getters we want to preserve values and just get them so we use const
		{
			return (height * 2) + (width * 2);
		}

};

#endif // !RECTANGLE
