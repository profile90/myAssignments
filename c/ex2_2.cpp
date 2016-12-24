#include <iostream>

using namespace d std;

int main()
{	
		int x;
		cout << "Enter the size of your list of numbers: ";
		cin >> x;
		float * decimaler = new float[x];
		cout << "\nEnter your decimal numbers:\n";
		
		float sum = 0;
		int i;
		for(i = 0; i < x; i++)
		{
			cout << " [" << i+1 << "]: ";
			cin >> decimaler[i];
			sum+=decimaler[i];
		}

		cout << "The average: " << sum/i

		 << "\nThe sum: " << sum << "\n";
		delete [] decimaler;
	return 0;
}