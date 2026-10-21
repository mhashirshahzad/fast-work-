#include <iostream>
using namespace std;

void rectangleDetails(double length, double width, double &area, double &perimeter);

int main() {
  double l = 250.2, w =2.13, a = 0, p = 0;
  rectangleDetails(l, w, a, p);

  cout << l << w << a << p;
  return 0;
}

void rectangleDetails(double length, double width, double &area, double &perimeter) {
  area = length * width;
  perimeter = 2 * (length + width);  
}
