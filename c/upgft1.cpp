#include <iostream>
#include <time.h>

using namespace std;
int insurance()
{
	//declares variables, to be used in the program. 
	//the fiveYearPeriod, and the modelYear of the car.
	const int fiveYearPeriod = 5;
	int manafacYear;
	//inputs manafacturing year for the car.
	cout << "Enter your cars manafacturing year: ";
	cin >> manafacYear;
	//checks if the difference between the current year and the manfc. year
	//is more than the FiveYearPeriod
	if(((year() - manafacYear) > fiveYearPeriod) && (year() - manafacYear) < (fiveYearPeriod * fiveYearPeriod))
		cout << "You're car is eligable for a half insurance plan\n";
	//Checks if the car is eleigable for a veteran insurance plan, ergo that it is older than 25 years.
	else if((year() - manafacYear) > (fiveYearPeriod * fiveYearPeriod))
		cout << "Your car is eligable for a veteran insurance plan\n";
	else
		//Your car was bought in the last 5 years, ergo:
		cout << "Your car is eligable for a full insurance\n";

}

int year() {
	//a function that returns the current year.
	time_t theTime = time(NULL);
	struct tm *aTime = localtime(&theTime);
	int year = aTime->tm_year + 1900;
	return year;
}

int main() 
{	
	insurance();
	return 0;	
}