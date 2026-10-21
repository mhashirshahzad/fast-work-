#include <iostream>
using namespace std;
double calculatePercentage(const double obtained, const double total) {
  return obtained / total;
}
int calculateDifference(const int a, const int b) {return a - b;}

int main() {

  double o = 100.0;
  double t = 500.0;
  int a = 2, b = 5;
  cout << calculatePercentage(o, t) << endl;
  cout << calculateDifference(a, b) << endl;
  return 0;
}
