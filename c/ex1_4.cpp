#include <iostream>

using namespace std;

int main()
{
	for(int i = 1; i <= 200; i++)
		if(i%3 == 0 || i%5 == 0)
			cout << "Number \% 3 = " << i%3 << " Number \% 5 = " << i%5 << " Number: " << i << endl;
	return 0;
}