#include <iostream>
#define MAX 50

//Declaring the reference array, the largest stack in the group, and the counter variables.
int amountsOfStack, stackValue, counter = 0;
int ref[50];



 
int main()
{
  //Goto Start:, if the amount of stacks is over 50
 start:
       //Request input from the user
     std::cout << "Enter the largest stack, it can be no larger than 50: ";
     std::cin >> amountsOfStack;

     //Check if usr-input is over MAX value
  if(amountsOfStack > MAX)
  {
    std::cout << "Try again, the number is too big\n";
      goto start;
  }
      //takes the biggest stack number, 
  for(int index = 0; index < amountsOfStack; index++)
  {
      stackValue = ((index * index)+index) / 2;
      ref[index] = stackValue;
  }
  
    for(int mainCounter = 0; mainCounter < 2550; mainCounter++)
    {
      
    	if(ref[counter] == 0 && mainCounter > 10)
	  break;

	if(mainCounter == ref[counter])
	  {
	    std::cout << "\n";
	    counter++;
	  } 
	  
	std::cout << "*";

    }

    return 0;
}
