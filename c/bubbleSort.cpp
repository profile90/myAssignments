#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void bubbleSort()
{
	int i;
	int myArray[20];

		for(i = 0; i <= 20; i++)
		{
			myArray[i] = rand() % 100 + 1;
			printf("i: %d\t\tarray: %d\n", i, myArray[i]);
		}
cout << endl;
}
int main()
{
	bubbleSort();
	return 0;
}