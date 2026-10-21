#include <iostream>
using namespace std;
void increaseByCopy(int n) {n++;}
void increaseByReference(int &n) {n++;}
void swapValues( int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}
int main() {
  int n = 0, m = 20;
  increaseByCopy(n);
  cout << n << endl;
  increaseByReference(n);
  cout << n << endl;
  swapValues(n, m);
  
  cout << n << m;
  return 0;
}
