#include <iostream>
using namespace std;

int n;

void fib() {
  cout << "Fibonnaci seq is: \n ";
  int c = 0; // count
  int s = 0; // sum
  int d = 0; // curr digit
  int p1 = 0; // prev 1st digit
  int p2 = 0; // prev 2nd digit

  while(c < n)
  {
    cout << d << ", ";

    if( c == 1 || c == 0)
    {
      d = 1;
    }
    else {
      d = p1 + p2;
    }
    p2 = p1;
    p1 = d;
    s += d;
    c++;
  }


  cout << "Sum: " << s;
}

int main()
{
  cout << "Enter n: ";
  cin >> n;
  
  fib();
  
  return 0;
}

