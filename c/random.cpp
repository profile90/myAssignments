#include <iostream>

using std::cin; using std::cout; using std::endl;

int twice(int *t){

  cout << t << endl;
  cout << &t << endl;
  cout << *t << endl;
  
}


int main() {

  int f = 123;
  cout << &f << endl;
  int * r = &f;
  twice(r);
  return 0;

}
