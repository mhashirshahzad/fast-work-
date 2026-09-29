#include <iostream>
using namespace std;
int main() {
  int b_n = 0;
  int ml = 1;
  cout << "Enter a binary number: ";
  cin >> b_n;
  
  bool isBinary = true;
  int d_n = 0;

  while (b_n != 0 && isBinary) {
    int d = b_n % 10;
    if (d != 0 && d != 1) {
      cout << "Error, nonBinary no entered";
      isBinary = false;
    }
    d_n = d_n + (d*ml);
    ml *= 2;
    b_n /= 10;
  }

  if (isBinary)
    cout << "Decimal eqv. : " << d_n;

  return 0;
}
