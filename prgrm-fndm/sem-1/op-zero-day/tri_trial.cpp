#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  cout << "Enter 3 sides: ";
  cin >> a >> b >> c;

  if (a + b > c)
    cout << "Valid Triangle";
  else if (a + c > b)
    cout << "Valid Triangle";
  else if (b + c > a)
    cout << "Valid Triangle";
  else
    cout << "Not valid triangle";

  cout << endl;

  if (a == b == c)
    cout << "Equilateral triangle";
  else if (a == b || a == c || b == c)
    cout << "Isoceles triangle";
  else
    cout << "Scalene triangle";

  cout << endl;

  if (c*c == a*a + b*b)
    cout << "Pythagorean triple";
  else if (b*b == a*a + c*c)
    cout << "Pythagorean triple";
  else if (a*a == b*b + c*c)
    cout << "Pythagorean triple";
  else
    cout << "not pythagorean triple";
    

  return 0;
}
