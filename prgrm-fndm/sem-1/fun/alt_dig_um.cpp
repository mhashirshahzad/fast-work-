#include <iostream>

using namespace std;
int main()
{
  int n;

  cout << "Enter a no: ";
  cin >> n;

  int sum = 0;
  bool should_be_negative = false;
  
  while(n!=0)
  {
    if(should_be_negative)
      sum -= n % 10;
    else
      sum += n % 10;

    should_be_negative = !should_be_negative;
    
    n /= 10;
  }

  cout << "Sum w/ alt sign: " << sum << endl;
  
  return 0;
}
