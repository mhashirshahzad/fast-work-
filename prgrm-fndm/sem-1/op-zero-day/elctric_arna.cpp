#include <iostream>
using namespace std;

int main()
{
  double q1, q2, d, f, k;
  k = 8.99e9;
  cout << "Enter 2 coulumb charges: ";
  cin >> q1 >> q2;

  cout << "Enter the distance b/w themP: ";
  cin >> d;

  f = (k * (q1 * q2) )/ (d * d);

  cout << "F = " << f << " Newton";
  return 0;
}
