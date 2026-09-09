#include <iostream>

using namespace std;

int main()
{
  int num;
  cout << "Enter a 7-digit number: ";
  cin >> num;

  int d1,d2,d3,d4,d5,d6,d7,d8,d9;
  int sum, prd;

  d1 = num % 10;
  num /= 10;
  d2 = num % 10;
  num /= 10;
  d3 = num % 10;
  num /= 10;
  d4 = num % 10;
  num /= 10;
  d5 = num % 10;
  num /= 10;
  d6 = num % 10;
  num /= 10;
  d7 = num % 10;
  num /= 10;
  d8 = num % 10;
  num /= 10;
  d9 = num % 10;
  num /= 10;
  cout << "Reversed: " << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << " " << d6 << " " << d7 << " " << d8 << " " << d9;
  cout << endl;
  
  if(d1 == 0 || d2 == 0 || d3 == 0 || d4 == 0 || d5 == 0 || d6 == 0 || d7 == 0 || d8 == 0 || d9 == 0)
  {
    cout <<"[WARN!] " << "Product will be 0 cause a digit is 0" << endl;
  }
  
  sum = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9;
  prd = d1 * d2 * d3 * d4 * d5 * d6 * d7 * d8 * d9;

  cout << "Sum: " << sum << endl;
  cout << "Product: " << prd << endl;  
}
