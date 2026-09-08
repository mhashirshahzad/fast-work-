#include <iostream>

using namespace std;

int main() {
  
  cout << "Enter a number: ";
  int num = 0;
  cin >> num;  
  int rev_num = 0;

  while(num != 0)
  {
    int d = num % 10; // get last digit
    rev_num = rev_num * 10 + d; // multiply it by 10 and increment w/ digit
    num /= 10; // remove last digit of num
  }

  cout << "Reversed num: " << rev_num << endl;

  if (num == rev_num) {
    cout << "both are equal: " << endl;
  }

  return 0;
}
