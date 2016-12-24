#include <iostream>
using namespace std;
int main()
{
  int n;
  int x = 0;
  string s;
  s[0]='*';
  cin >> n;
  for(int i = 0; i < n; i++)
    {
      for(x = 0; x <= i; x++) {
      cout << s[x];
      }
      s[i+1]=s[i];
      cout << endl;
    }

}
