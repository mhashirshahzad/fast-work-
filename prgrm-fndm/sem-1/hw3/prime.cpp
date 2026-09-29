#include <iostream>
using namespace std;
int main() {
  cout << "Enter a number greater than 2 to check if its prime or nah: ";
  int n;
  cin >> n;

  if (n < 2) {
    cout << "Error: Use a number >2";
    return -1;
  }
  bool isPrime = true;
  
  int i = 2;
  while (i * i <= n && isPrime) {
    if (n % i == 0)
      isPrime = false;

    i++;
  }
  if (isPrime) {
    cout << n << " is Prime";
  } else {
    cout << n << " is not prime";
  }

  return 0;
}
