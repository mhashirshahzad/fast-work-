#include <iostream>
using namespace std;
int main() {
  int d1 = 0;
  int d2 = 1;
  int sum = 0;
  int k;
  cout << "Enter count (k, +ve only and greater than 1): ";
  cin >> k;

  if (k < 1){
    cout << "Wrong k entered using k = 1 instead! \n";
    k = 1;
  }
  cout << d1 << ", " << d2;

  for(int i = 2; i < k; i++) {
    sum = d1 + d2;
    d1 = d2;
    d2 = sum;
    cout << ", " << sum;
  }
}
