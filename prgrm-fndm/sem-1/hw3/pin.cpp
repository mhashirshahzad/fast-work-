#include <iostream>
using namespace std;
int main() {
  unsigned long long int pin = 0;
  do {
    cout << "Enter pin: ";
    cin >> pin;
    if (pin != 4321)
      cout << "Invalid pin (try again) \n";
  } while (pin != 4321);

  cout << "Access granted!";
  return 0;
}
