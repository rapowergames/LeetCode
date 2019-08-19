#include "DisplayTime.h"
#include <iostream>

using namespace std;

const int NUMBER_OF_HOURS = 12;
const int NUMBER_OF_MINUTES = 60;
const int NUMBER_OF_SECONDS = 60;
const int DEGREES_PER_HOUR = 30;
const int DEGREES_PER_MINUTE = 6;
const int TOTAL_DEGREES = 360;

void displayClockTime::DisplayTime(int secondsAfterMidnight)
{
	int degrees, hours, minutes, secondsReaminder;

	secondsReaminder = secondsAfterMidnight % (NUMBER_OF_HOURS * NUMBER_OF_MINUTES * NUMBER_OF_SECONDS);
	minutes = secondsReaminder / NUMBER_OF_SECONDS;
	hours = minutes / NUMBER_OF_MINUTES;
	degrees = hours * DEGREES_PER_HOUR;
	degrees %= TOTAL_DEGREES;
	DsiplayHourHand(degrees);
	degrees = minutes * DEGREES_PER_MINUTE;
	DisplayMinuteHand(degrees);
}

void displayClockTime::DsiplayHourHand(int degrees)
{
	cout << "Number of Hours displayed in degrees: " << degrees << endl;
}

void displayClockTime::DisplayMinuteHand(int degrees)
{
	cout << "Number of Minutes displayed in degrees: " << degrees << endl;
}