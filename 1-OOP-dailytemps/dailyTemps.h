#ifndef DAILYTEMPS_H
#define DAILYTEMPS_H

#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

class DailyTemps {
private:
	int dailyTemp[6];
	int count;
public:
	DailyTemps() {
		cout << "\nEnter temperature for your 7-day week monday-sunday" << endl;
		for (int i = 0; i < 7; i++) {
			cout << "Temperature of the day - " << (i) << "\t";
			cin >> dailyTemp[i];
		}
	}

	void setTemp(int index, int temp) {
		if (index < 6)
			dailyTemp[index] = temp;
		else
		{
			cout << "invalid input";
			exit(EXIT_FAILURE);
		}
	}

	void printTemps() {
		cout << "\nTemperature of all 7-Days of Week: " << endl;
		cout << "Monday \t\t" << dailyTemp[0] << endl;
		cout << "Tuesday \t" << dailyTemp[1] << endl;
		cout << "Wednesday \t" << dailyTemp[2] << endl;
		cout << "Thursday \t" << dailyTemp[3] << endl;
		cout << "Friday \t\t" << dailyTemp[4] << endl;
		cout << "Saturday \t" << dailyTemp[5] << endl;
		cout << "Sunday \t\t" << dailyTemp[6] << endl;
	}

	void freezing()//number of days below freezing
	{
		int count = 0;
		for (int i = 0; i < 7; i++) {
			if (dailyTemp[i] < 32) {
				count++;
			}
		}
		cout << "Number of freezing days is " << count << endl;
	}

	void warmest() //warmest day of the week
	{
		int warmDay = dailyTemp[0];
		string warmestDay;
		for (int i = 0; i < 7; i++) {
			if (warmDay < dailyTemp[i]) {
				warmDay = dailyTemp[i];
			}

			if (warmDay = 0) {
				warmestDay = "Monday";
			}
			else if (warmDay = 1) {
				warmestDay = "Tuesday";
			}
			else if (warmDay = 2) {
				warmestDay = "Wednesday";
			}
			else if (warmDay = 3) {
				warmestDay = "Thursday";
			}
			else if (warmDay = 4) {
				warmestDay = "Friday";
			}
			else if (warmDay = 5) {
				warmestDay = "Saturday";
			}
			else if (warmDay = 6) {
				warmestDay = "Sunday";
			}
			else {
				warmestDay = "Invalid";
			}
		}

		cout << "The warmest day of the week is " << warmestDay << endl;
	}
};

#endif