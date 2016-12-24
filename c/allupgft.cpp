//LIBRARY DECLARATION

#include <iostream>
#include <time.h> //Used in year() @ line XX 
#include <stdlib.h>
	using namespace std;




//	******** SPEC HOMEWORK ********
	
int ex1_1()
{
//decleared the variable, x to be printed out to the user.
	int x;
	//forloop that repeats the same expression 10 times.
	for(int i = 1; i <= 10; i++){
		cout << endl;
		cin >> x;
		//uses i to show how many times it's been printed.
		cout <<"nr " << i << ": " << x << endl;
	
	}

	return 31;}
int ex1_2(){

	int sum = 0;
	for(int i = 0; i <= 100; i++)
	{
		// set sum to i, plus the previous iteration of i addition
		sum += i;
		cout << "number " << i << ": " << sum << endl;
	}
	//print out the last sum of all the numbers
	cout <<"Sum of all the numbers: " << sum << endl;

	return 32;}
int ex1_3(){

	int sum = 1;
		//Factorials between 1, and 10, exception on !0, as it is 1.
		cout << "Factorial 0!: " << sum << endl; 
		for(int i = 10; i >= 1; i--)
		{
			// Contiunes, from 1!, to 10!. 
			sum *= i;	
			cout << "Factorial "<< i << "!: " << sum << endl;
		}
		//print the total at the end e.g. 10!
	cout <<"Product of all the numbers: " << sum << endl;

	return 33;}
int ex1_4(){
	for(int i = 1; i <= 200; i++)
		//prints out the 	
		if(i%3 == 0 || i%5 == 0)
			cout << "Number \% 3 = " << i%3 << " Number \% 5 = " << i%5 << " Number: " << i << endl;
	return 34;}
int ex1_5(){return 35;}
//	******** SPEC HOMEWORK ******** END


//	******** HOMEWORK *********

//	----- FIRST HOMEWORK -------
// 		a function that returns the current year.
int year_hmw1_1() 
{
	//a function that returns the current year.
			
	return year;}
//		checks eligablility for car insurance, a car bougth for
//		more than 25 years ago, for more than 5 years and less than 5 years
int hmw1_1()
{
	
	//declares variables, to be used in the program. 
	//the fiveYearPeriod, and the modelYear of the car.
	const int fiveYearPeriod = 5;
	int manafacYear;
	//inputs manafacturing year for the car.
	cout << "Enter your cars manafacturing year: ";
	cin >> manafacYear;
	if((manafacYear + 1) > (year() + 1))
	{
		cout << "Your car doesn't exsist yet!\n";	
		return 0;
	}
	else
	{
	//checks if the difference between the current year and the manfc. year
	//is more than the FiveYearPeriod
	if(((year() - manafacYear) > fiveYearPeriod) && (year() - manafacYear) < (fiveYearPeriod * fiveYearPeriod))
		cout << "You're car is eligable for a half insurance plan\n";
	//Checks if the car is eleigable for a veteran insurance pMåste lämna in för betyglan, ergo that it is older than 25 years.
	else if((year() - manafacYear) > (fiveYearPeriod * fiveYearPeriod))
		cout << "Your car is eligable for a veteran insurance plan\n";
	else
		//Your car was bought in the last 5 years, ergo:
		cout << "Your car is eligable for a full insurance\n Would you like to buy insurance for your car?\n";
		cin >> 
	}
}

//	----- FIRST HOMEWORK ------- END


int hmw1_2() {return 22;}
int hmw1_3() {return 23;}
int hmw1_4() {return 24;}
int hmw1_5() {return 25;}

//	******** REFERENCE LIB ********

	//Looper variable
	bool loop = 0;



//	the function that refers to homework

	int choice;

	
	return 30;
}





int OwnIdeas(){return 31;}


int indexing(int& choice)
{	 

	do {
		cin >> choice;

		switch(choice)
		{
		case 1: 
			cout << homework() << "\n";
		break;

		case 2:
			cout << specHomework() << "\n";
		break;

		case 3:
			cout << OwnIdeas() << "\n";
		break;

		default:
			cout << "Please pick a valid option\n";
			loop = 1;
		}
	} while(loop == 1);
	return 10;
}

//	******** REFERENCE LIB ******** END


int main()
{
	int choice = 0;
	cin >> choice;
	


		case 1: 
			cout << hmw1_1() << "\n";
		break;

		case 2:
			cout << hmw1_2() << "\n";
		break;

		case 3:
			cout << hmw1_3() << "\n";
		break;

		case 4:
			cout << hmw1_4() << "\n";
		break;

		case 5:
			cout << hmw1_5() << "\n";
		break;

		case 6: 
			cout << ex1_1() << "\n";
		break;

		case 7:
			cout << ex1_2() << "\n";
		break;

		case 8:
			cout << ex1_3() << "\n";
		break;

		case 9:
			cout << ex1_4() << "\n";
		break;

		case 10:
			cout << ex1_5() << "\n";
		break;

		default:
			cout << "Please pick a valid option\n";
			loop = 1;
		}
	} while(loop == 1);


	return 0;

}