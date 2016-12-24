#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n;
	cout << "This program tests if the integer n is a prime number if n <= 10 000" << endl;
	cin >> n;
	int h = 0;
	bool list[100];
	int a[6] = {0,2, 3, 5, 7, 11};
		//makes sure every 
	for(int i = 0; i <= 100; i++) {
		list[i] = true;
	}


	for(int j = 0; j <= 6; j++)
	{
		
		for(h = a[j]; h <= sqrt(n); h++)		
		{
			list[h] = false;
			h += a[j];
			cout << h << ":  :" << list[h] << endl;
		}	
	}
	/*
		if(list[n] == true)
		{
			cout << "This number: " << n << " is a prime number" << endl;
		} else {

			cout << "This number: " << n << " is not a prime number" << endl;
		}
*/

	
return 0;
}