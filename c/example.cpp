#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(){
	
	int index;
	cout << "Enter the size of your array! Please, I'm begging you, it's urgent: ";
	cin >> index;
	int *mainList = new int[index];
	int *secList = new int[index/2];
	int *frstList = new int[index/2];
	int secListCounter = 0, firstListCounter = 0;
	for(int i = 1; i <= index; i++)
			{
			mainList[i] = i;
			secList[i] = 0;
			frstList[i] = 0;
			}
	cout << "\ti\tmainList\tfirstList\tsecList\n";

	for(int i = 0; i <= index; i++)
	{

			if(i <= index/2)
			{
				cout << "\t\t\t\tfirst\n";
				frstList[i] = mainList[i];		
			}
			else if(i > index/2)
			{
				cout <<"\t\t\t\t\t\tsecond"<<secListCounter <<"\n";
				secList[secListCounter] = mainList[i];
				secListCounter++;
			} 
				printf("\t%d: \t%d\t\t%d\t\t%d\n", i, mainList[i],frstList[i], secList[secListCounter]);		
	
		
	}
return 0;
}