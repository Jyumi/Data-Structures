Below are the assignment instructions:
1-OOP-testrectangle

The goal of this assignment is to reinforce the concept of Object-Oriented Programming and
implement classes in C++.

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
folder.

Important Note: The code must be correctly running right before being uploaded.