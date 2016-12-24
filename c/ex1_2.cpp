
#include <iostream>

using namespace std;

int main(){
	int sum = 0;
	for(int i = 0; i <= 100; i++)
	{
		sum += i;
		cout << "number " << i << ": " << sum << endl;
	}
	cout <<"Sum of all the numbers: " << sum << endl;
	return 0;
}
