#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{

	int numberList[10];

	for(int i = 0; i < 10; i++)
	{
		numberList[i] = rand() % 100 +1;
		cout << 
	}
	for(int i = 1; i < 10; i++)
	{
	if(numberList[i] < numberList[i-1]) 
		{
			cout << "tis: " << i << ": tis " << numberList[i] << "\n";
		}
	}
}