#include <iostream>
using namespace std;
int divideNumbers(int dividend, int divisior) {return dividend / divisior;}
int divideNumbers(int dividend, int divisior, int &quotient, int &remainder) {
  if (!divisior) return divisior;

  quotient = dividend / divisior;
  remainder = dividend % divisior;
  return 1;
}
int main() {
  return 0;
}
