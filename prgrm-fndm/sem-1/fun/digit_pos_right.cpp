#include <iostream>

using namespace std;
int main()
{

  int n;
  cout << "Enter a number: ";
  cin >> n;

  int req_dig;
  cout << "Enter digit to find? ";
  cin >> req_dig;
  
  int pos = 1;

  bool is_found = false;
  
  while(n!=0)
  {
    if (n%10 == req_dig)
    {
      is_found = true;
      break;
    }
    pos += 1;
    n/= 10;
  }
  if (is_found)
    cout << "Digit is at " << pos << " from right side";
  else
    cout << " Not found :(";
  return 0;
}
