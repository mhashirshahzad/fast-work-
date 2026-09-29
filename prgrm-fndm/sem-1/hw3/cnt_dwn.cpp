#include <iostream>
using namespace std;
int main() {
  int s;
  bool isPostive = true;

  cout << "Enter s (starting integer, it must be +ve): ";
  cin >> s;

  if (s <= 0) {
    cout << "Invalid starting number :(";
    isPostive = false;
  }

  while(s >= 1) {
    cout << s << endl;
    s--;
  }

  if (isPostive)
    cout << "BLAST OFF!";

  return 0;
}
