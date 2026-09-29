#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int m;
  float sum = 0;
  float smol = 1;
  cout << "Enter m (+ve number, 0 excluded): ";
  cin >> m;

  if (m < 1) {
    cout << "Error: m must be greater than 0, using m = 1 instead";
    m = 1;
  }

  for (int i = 1; i <= m; i++) {
    float r = (1 / (float)i);
    sum += r;

    if (r < smol) {
      smol = r;
    }
  }

  cout << fixed << setprecision(4) << "Sum = " << sum << endl;
  cout << "Smallest Term added: " << fixed << setprecision(4) << smol;
  return 0;
}
