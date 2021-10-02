Below are the assignment instructions:
1-OOP = Exercise #1
1-OOP-dailytemps = Exercise #2

The goal of this assignment is to reinforce the concept of Object-Oriented Programming and
implement classes in C++.
Note: Below, (…) means the methods take parameters. () means the method takes no parameters.
Exercise #1 (50 points): Design and implement class Rectangle. The class defines the following
data fields and functions:
1. Private double data field named width to store the rectangle width (default value is 1.00).
2. Private double data field named height to store the rectangle height (default value is 1.00).
3. Non-argument constructor function that creates a default rectangle (with default values).
4. Constructor function that creates a rectangle with specified width and height values from the
user.
5. Get functions for the data fields width and height.
6. Function named getArea() that returns the area of the rectangle.
7. Function named getPerimeter() that returns the perimeter of the rectangle.
8. Function pritnRectangle(String objectName)to printout a meaningful description of a
rectangle object. Assuming rectangle ABC is15.00 units wide and 20.00 units high, calling
pritnRectangle(“ABC”)would display the following output:
Rectangle ABC is 15.0 units wide and 20.0 units high.
Write a test program, named TestRectangle, to create 2 rectangle objects named myRctangle
and herRectangle as follows:
- myRectangle is a default object. (i.e., uses default width and height)
- herRectangle has width and height values specified by the user.
Using proper class function, display the width, height, area, and perimeter for each object following
these examples:
Test data: myRectangle:
------------
Width: 1.00
Height: 1.00
Area: 1.00
Perimeter: 4.00
Page 2
Rectangle myRectangle is 1.0 unit wide and 1.0 unit high.
herRectangle:
------------
Width: 3.00
Height: 4.00
Area: 12.00
Perimeter: 14.00
Rectangle herRectangle is 3.0 units wide and 4.0 units high.
Allow the user to enter the object values. Test all class functions on at least one object in a logical
order and display meaningful information about the object after each function call.
Exercise #2 (50 points): Design and implement class DailyTemps, that implements the concept
of daily temperatures for a week. You have the option to use separate variables or onedimensional array (of size 7 elements) to hold daily temperatures. If you use an array, the
assumption is that array index 0 represents Monday’s temperature; array index 1 represents
Tuesday’s temperature; etc.
The class defines the following functions:
- Constructor function that reads user input for daily temperature values for the week. Use
proper prompts for reading the inputs.
- Function setTemp(…) that allows re-setting the temperature for one day. The day is specified
by name (or by the array index of its position in the array). Use proper prompts for reading the
inputs.
- Function Freezing() that returns the number of days with temperature below freezing
(under 32F) for the week. Use proper output label, such as “Number of freezing days
is …”.
- Function Warmest() that returns the warmest day in the week. Use proper output label, such
as “The warmest day of the week is …”.
- Function printTemps() to print out the temperatures for the week as follows (this is sample
output for illustration purpose only):
Monday 57
Tuesday 76
Wednesday 81
Thursday 65
...
Write a test program, named TestTemps to test all class functions on at least one object in a
logical order and display meaningful information about the object after each function call.
Submission:
Please submit your header and cpp files named as indicated above to the assignment submission
folder in D2L by the due date posted in D2L. No late submissions are accepted. Once again,
please include author header block in each file - no headers, no points.
Important Note: The code must be correctly running right before being uploaded.