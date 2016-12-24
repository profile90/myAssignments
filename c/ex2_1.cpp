#include <iostream>
using namespace std;

int main()
{
	int stuff[8];
	int number = 2;
	for(int i = 1; i <= 9; i++)
	{
		stuff[i] = number * i;
		cout << stuff[i] << "\n";
	}
	return 0;
}