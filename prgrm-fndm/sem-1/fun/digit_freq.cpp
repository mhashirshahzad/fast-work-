#include <iostream>
using namespace std;

int main()
{
  cout << "Enter a number: ";
  int n;
  cin >>n;
  int og_n = n;
  int req_digit;
  cout << "Enter digit to find: ";
  cin >> req_digit;

  int count = 0;
  while(n!=0)
  {
    int d = n % 10;
    if (d == req_digit)
    {
      count++;
    }
    n /= 10;
  }


   cout << "Digit " << req_digit << " is in number " << og_n << " = " << count << " times \n";
  return 0;
}

