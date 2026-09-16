#include <iostream>

using namespace std;

int main() {
  int n, i;
  cout << "Enter no of rows: ";
  cin >> n;
  


  i = 0;
  cout << "Student's way: " << endl; 
  while (i < n * n)
  {
    if (i % n <= i / n) cout << "*";
    else cout << "_";
    if (i % n == n - 1) cout << "\n";
    i++;
  }
  return 0;
}
