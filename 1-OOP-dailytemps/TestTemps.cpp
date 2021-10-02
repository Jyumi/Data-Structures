#include "dailyTemps.h"
#include <iostream>
using namespace std;

int main()
{
    DailyTemps dt;
    dt.printTemps();
    dt.freezing();
    dt.warmest();
    int index;
    int temp;

    do
    {
        cout << "Monday - 0, Tuesday - 1, Wednesday - 2, Thursday - 3, Friday - 4, Saturday - 5, Sunday - 6" << endl;
        cout << "Enter the index of Day and Temperature to be change: " << endl;
        cout << "Index of Day: ";
        cin >> index;
        cout << "Temperature: ";
        cin >> temp;
        dt.setTemp(index, temp);
        dt.printTemps();
    } while (index > 6 && temp > 0);
    return 0;
}