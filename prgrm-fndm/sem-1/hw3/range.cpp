#include <iostream>
using namespace std;
int main() {

  int sum = 0;
  int  n = -1;

  cout << "Keep entering numbers to calculate their sum b/w 1 and 50 (enter 0 to end the loop)" << endl;
  do {
    cin >> n;

    if (! (n < 1 || n > 50)) {
      sum += n;
    } else {
      cout << "(Ignored outside of range 1 - 50)" << endl;
    }
  } while (n != 0);

  cout << "Sum = " << sum << endl;
  return 0;
}
