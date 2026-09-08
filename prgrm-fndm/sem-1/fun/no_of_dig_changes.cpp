#include <iostream>

using namespace std;
int main()
{
  int n;
  cout << "Enter a no: ";
  cin >> n;

  int c = -1;

  int prev = 0;
  int curr = 0;

  while(n!=0)
  {
    curr = n % 10;

    if (prev != curr)
      c += 1;

    prev = curr;
    n /= 10; 
  }
  cout << "No of changes " << c << endl;
  return 0;
}
