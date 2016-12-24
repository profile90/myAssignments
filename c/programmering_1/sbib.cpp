#include <iostream>
#include <cstdlib>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;

void terminal_print_yes_no(string question){
  cout << question << endl;
  cout << "[1] Yes\n\n[2] No\n\n";
  
}
void terminal_print_out_menu(string title, string information, int size) {
    //printing out the choice menu, with Week xx as prefix.
    cout << title <<": " << endl;
    
    for(int i = 1; i <= size; i++)
        cout << "\t" << information << "[" << i << "]\n";
    }

void terminal_print_out_menu(string* title, string* information, int size, int* halt) {
	//printing out the choice menu, with Week xx as prefix.
	cout << title[0] << ": " << endl;
	int j = 1;
	for (int i = 1; i <= size; i++)
	{
	    if(i == halt[j])
	    {
	      cout << title[j] << ": " << endl;
	      j++;
	    }
		cout << "\t" << information[i - 1] << "[" << i << "]\n";
	 }
  }
void terminal_print_out_menu(string title[], string information, int size, int  halt[]) {
	//printing out the choice menu, with Week xx as prefix.
	cout << title[0] << ": " << endl;
	int j = 1;
	for (int i = 1; i < size; i++)
	{
	    if(i == halt[j])
	    {
	      cout << title[j] << ": " << endl;
	      j++;
	    }
		cout << "\t" << information << "[" << i << "]\n";
	 }
  }

/********************************************/
/******** OVERLOADING randomizeArray ********/
/********************************************/

void randomizeArray(int * arr, int index){
	// loops through an array passed as arugment with size 'index'
	// generating a random number setting it to [i]
	for (int i = 0; i < index; i++)
	{
		 arr[i] = rand() % index; 
	}}

void randomizeArray(char * arr, int index){
	// loops through an array passed as arugment with size 'index'
	// generating a random number setting it to [i]
	for (int i = 0; i < index; i++)
	{
		 arr[i] = rand() % index;
	}}

void randomizeArray(bool * arr, int index){
	// loops through an array passed as arugment with size 'index'
	// generating a random bool value setting it to [i]
	for (int i = 0; i < index; i++)
	{
		 arr[i] = rand() % 2;
	}}

void randomizeArray(short * arr, int index){
	// loops through an array passed as arugment with size 'index'
	// generating a random number setting it to [i]

	for (int i = 0; i < index; i++)
	{
		 arr[i] = rand() % index;
	}}

/********************************************/
/******** OVERLOADING printOutDynArray ******/
/********************************************/

void terminal_printOutDynArray(char * arr, int index){
	//prints out a dynamic array, index as [i + 1], starting from 1 instead of 0.
	//									   [i + 2]
	//									   [i + 3]	
	for(int i = 0; i < index; i++)
    	cout << "["<<i<<"]:" << arr[i] << endl;
    }
void terminal_printOutDynArray(short * arr, int index){
	//prints out a dynamic array, index as [i + 1], starting from 1 instead of 0.
	//									   [i + 2]
	//									   [i + 3]	
	for(int i = 0; i < index; i++)
    	cout << "["<<i<<"]:" << arr[i] << endl;
    }
void terminal_printOutDynArray(int * arr, int index){
	//prints out a dynamic array, index as [i + 1], starting from 1 instead of 0.
	//									   [i + 2]
	//									   [i + 3]	
	for(int i = 0; i < index; i++)
    	cout << "["<<i<<"]:" << arr[i] << endl;
   }
void terminal_printOutDynArray(double * arr, int index){
	//prints out a dynamic array, index as [i + 1], starting from 1 instead of 0.
	//									   [i + 2]
	//									   [i + 3]	
	for(int i = 0; i < index; i++)
    	cout << "["<<i <<"]:" << arr[i] << endl;
    }
void terminal_printOutDynArray(float * arr, int index) {
	//prints out a dynamic array, index as [i + 1], starting from 1 instead of 0.
	//									   [i + 2]
	//									   [i + 3]	
	for (int i = 0; i < index; i++)
		cout << "[" << i << "]:" << arr[i] << endl;
}
void terminal_printOutDynArray(bool * arr, int index){
	//prints out a dynamic array, index as [i + 1], starting from 1 instead of 0.
	//									   [i + 2]
	//									   [i + 3]
	for(int i = 0; i < index; i++)
    	cout << "["<<i<<"]:" << arr[i] << endl;
}
