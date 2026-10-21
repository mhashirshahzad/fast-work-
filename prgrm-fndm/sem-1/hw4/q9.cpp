#include <iostream>
using namespace std;

int calculate(int a, int b) {
  return a + b;
}
double calculate(double a, double b) {
  return a + b;
}

int calculate(int a,int b, int c) {
  return a + b + c;
}
int main() {
  cout << calculate(4.0, 4.5);
  return 0;
}
