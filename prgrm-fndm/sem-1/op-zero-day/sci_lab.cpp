#include <iostream>

using namespace std;

int main()
{
  double a, b, c;
  cout << "Enter quadric eq (a, b, c): ";
  cin >> a >> b >> c;
  
  if (a == 0)
  {
    cout << "Not quadratic";
    return 1;
  }

  int disc = (b*b) - (4*a*c);
  
  if (disc > 0)
    cout << "Two distinct real roots";
  else if (disc == 0)
    cout << "One repeated real root";
  else if (disc < 0)
    cout << "Complex roots";

  float w, h, bmi;

  cout << "Enter w, h: ";
  cin >> w >> h;
  bmi = w / (h*h);
  
  if (bmi < 18.5)  
    cout << "Underweight";
  else if (bmi < 25)
    cout << "Normal";
  else if (bmi < 30)
    cout << "Overweight";
  else
    cout << "OBESE!";

  cout << endl;
  return 0;
}
