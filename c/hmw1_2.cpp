#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


int sort(int mainList[10])
{
	int h = 0, j = 0, i = 0;
	bool end = false;

	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
		{
			frstSplitList[i] = mainList[i];
			cout << i <<":\t" << mainList[i]<<"\t" << frstSplitList[i]<<"\t\n";
		} else {
			secSplitList[i-5] = mainList[i];
			cout << i << ":\t" << mainList[i] << "\t\t"<< secSplitList[i-5]<<"\n";
		}
	}
		while(end == false)
		{
			
			if(i >= 10 || h >= 5 || j >= 5)
			{
				end = true;
				break;
			}
				else if (frstSplitList[j] <= secSplitList[h])
			{

				cout << "\t sec \n";
				mainList[i] = frstSplitList[j];
				j++;
			} 
				else if(secSplitList[h] <= frstSplitList[j])
			{
				cout << "\t frst \n";
				mainList[i] = secSplitList[h];
				h++;
			}
			cout << i << " ";
			i++;
		}
}

int main()
{
	//create
	
	cout << "\ta\tb\tc\n";
	for(int i = 0; i < 10; i++){
		//cout << (i < 5) << endl;
	
	 	mainList[i] = rand() % 10 + 1;
		//cout << mainList[i] << "\n";
		if(i < 5)
		{
			frstSplitList[i] = mainList[i];
			cout << i <<":\t" << mainList[i]<<"\t" << frstSplitList[i]<<"\t\n";
		} else {
			secSplitList[i-5] = mainList[i];
			cout << i << ":\t" << mainList[i] << "\t\t"<< secSplitList[i-5]<<"\n";
		}
	}

		cout << " \nlist: ";
		for(int i = 0; i < 10; i++)
		{
			cout << " "<< mainList[i] << " ";
		}
		cout <<"\n";


	return 0;
}  