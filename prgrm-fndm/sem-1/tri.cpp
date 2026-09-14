#include <iostream>

using namespace std;

int main() {
  int n, i;
  cout << "Enter no of rows: ";
  cin >> n;
  


  cout << "Student's way: " << endl; 

  i = 0;
  while (i < n * n)
  {

    // n * n = 16
    // i % n = x
    // i / n = y
    if (i % n <= i / n) cout << "*";
    else cout << "_";
    if (i % n == n - 1) cout << "\n";

    i++;
  }
  return 0;
}
