#include <iostream>


using namespace std;

int takeInput(int leapYearList[])
{
	while(i < 10)
	{
		cin >> leapYearList[i];
		cout << "year [" << i + 1 <<"]: " << leapYearList[i] <<"\n";
		if(i == 9)
		break;
		else
			cout << "The next year: ";
		i++;
	} 
}

int main()
{

	int leapYearList[10];
	int i = 0;
	cout << "Enter your list of years: ";
	
	takeInput(leapYearList[10]);

}