#include <iostream>
using namespace std;

int main() {
  char a[10] = "OogaBooga";
  cout << "My array is: " << a << endl;
  int k = 2;
  char b[10];
  for(int i = 0; i < 9; i++) {
    b[i] = a[(i + k) % 9];
  }
  b[9] = '\0';
  cout << "\n\nNow My array is: " << b << endl;
  return 0;
}


/*

Index |0  1  2  3  4  5  6  7  8
---------------------------------------------
Char  |O  o  g  a  B  o  o  g  a

----------------------------------------------
  i          (i + k) % 9      a[(i+k) % 10]
----------------------------------------------
  0               2                 g
  1               3                 a
  2               4                 B
  3               5                 o
  4               6                 o
  5               7                 g
  6               8                 a
  7               0                 O                 
  8               1                 o

*/ 
