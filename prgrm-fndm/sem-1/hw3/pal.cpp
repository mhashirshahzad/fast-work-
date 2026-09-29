#include <iostream>
using namespace std;
int main() {

  int n, rev_n = 0;
  cout << "Enter a +ve no: ";
  cin >> n;
  if (n < 0){
    cout << "ERROR: Using positive value: " << -n << endl;
    n = -n;
  }
  int og_n = n;
  while (n != 0) {
    int d = n % 10;
    rev_n = (rev_n * 10) + d;
    n/= 10;
  }

  if (rev_n == og_n) {
    cout << "Is palindrome :3";
  } else {
    cout << "Is not palindrome :<";
  }
  return 0;
}
