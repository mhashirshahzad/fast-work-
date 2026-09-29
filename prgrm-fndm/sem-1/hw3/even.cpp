#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a +ve number (unsigned): ";
  cin >> n;
  if (n < 0) {
    cout << "Error -ve number entered! \n";
  }
  int sum = 0;

  cout << "Adding ( ";
  for(int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      sum += i;
      cout << i << " ";
    }
  }
  cout << ")";

  cout << "\n Sum = " << sum;
  return 0;
}
