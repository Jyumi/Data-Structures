#include "rectangle.h"
#include <iostream>

using namespace std;

int main()
{
	double width = 1;
	double height = 1;

	Rectangle myRectangle(height, width);
	cout << "myRectangle:" << endl;
	cout << "------------" << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;
	cout << "Area: " << myRectangle.getArea() << endl;
	cout << "Perimeter: " << myRectangle.getPerimeter() << endl;
	cout << endl;
	myRectangle.printRectangle("myRectangle");

	do
	{
		cout << "------------" << endl;
		cout << "Please enter width" << endl;
		cin >> width;
		cout << "Please enter height" << endl;
		cin >> height;

		Rectangle herRectangle(height, width);
		cout << endl;
		cout << "herRectangle:" << endl;
		cout << "------------" << endl;
		cout << "Width: " << width << endl;
		cout << "Height: " << height << endl;
		cout << "Area: " << herRectangle.getArea() << endl;
		cout << "Perimeter: " << herRectangle.getPerimeter() << endl;
		cout << endl;
		herRectangle.printRectangle("herRectangle");
		exit(EXIT_SUCCESS);

	} while (height > 0 && width > 0);
	return 0;
}
