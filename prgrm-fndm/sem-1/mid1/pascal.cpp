#include <iostream>
using namespace std;

int main() {
  int r = 10;

  for (int i = 0; i < r; i++) {
    // Print leading spaces
    for (int sp = 0; sp < r - i - 1; sp++) 
      cout << " ";

    int coef = 1;
    // Print coefficients for current row
    for (int j = 0; j <= i; j++) {
      if (j == 0 || i == 0) 
        coef = 1;
      else 
        coef = coef * (i - j + 1) / j;

      cout << coef << " ";
    }
    cout << endl;
  }

  return 0;
}
