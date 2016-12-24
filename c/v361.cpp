#include <iostream>
#include <cmath>
int ex1()
{
  
  float x,y,z,w;
  std::cout << "Enter the four numbers: ";
  std::cin >> x >> y >> z >> w;
  std::cout << "Average of the four numbers: " << (x+y+z+w)/4 << " Sum : " << x+y+z+w <<std::endl;

  return 0;
}



int ex2()
{
  int x,y = 0;
  while(x == 0 || y == 0){
    std::cin >> x >> y;
    if((x <= 1 || x >= 5) || (y <= 1 || y >= 5))
    {
      
      std::cout << "One of your numbers does not meet the requirements, please try again." << std::endl;
      x, y = 0;
    }
  else
    {
      std::cout << std::endl << "The area of the figure: " << (x * y) << " The volume of the figure: " << pow(x,y) << std::endl;
    }
  }
  return 0;
}


int main()
{
  ex2();
  ex1();
}
    
