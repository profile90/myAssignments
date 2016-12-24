
#include <iostream>
#include <cstdlib>
#include <iomanip>
using std::endl; using std::cin; using std::cout;


int main()
{

  int *ptal;
  ptal = new int[100];
  int *temp = ptal;
  cout << ptal << endl;
  
  for(int i = 0; i < 100; i++)
    {
      cout << ptal << endl;
      if(i == 99)
	cout << ptal - *temp << endl << endl;
    }
  
  return 0;
}

