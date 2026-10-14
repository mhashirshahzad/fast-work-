#include <iostream>
using namespace std;
int main() {
  char a[100] = "Thishasduplicates";
  cout << "OG Array: " << a << endl;
  char b[100];
  int rIndex = 0, wIndex = 0; // read n write indexes
  while (a[rIndex] != '\0') {
    rIndex++;
  }
  cout << "\n\nWithout duplicates the array is: " << b << endl;
  return 0;
}
/*
  rIndex     a[rIndex]
    0            T
    1            h
    2            i
    3            s
    4            h
    5            a
    6            s
    7            d
    .            .
    .            .
    .            .
*/
