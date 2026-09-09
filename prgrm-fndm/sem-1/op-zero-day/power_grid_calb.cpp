#include <iostream>

using namespace std;
int main()
{
  cout << "Integer\tSquare\tCube\tFourth" << endl;
  int i = -6;
  while (i <= 6)
  {
    cout << " " << i;
    cout << "\t " << i*i;
    cout << "\t " << i*i*i;
    cout << "\t " << i*i*i*i;
    cout << endl; 
    i++;
  } 
}
