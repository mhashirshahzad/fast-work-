#include <iostream>

using namespace std;


int main()
{
  int m, n5k, n1k, n5h;

  cout << "Enter money as multiples of 500: ";
  cin >> m;

  n5k = m / 5000;
  m = m % 5000;

  n1k = m / 1000;
  m = m % 1000;

  n5h = m / 500;
  m = m % 500;

  cout << "5k rps: " << n5k << endl;
  cout << "1k rps: " << n1k << endl;
  cout << "5h rps: " << n5h << endl;

  return 0;
}
