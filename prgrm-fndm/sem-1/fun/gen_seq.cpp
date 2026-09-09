#include <algorithm>
#include <iostream>
using namespace std;

int n;

void fib();
void trib();
void collatz();
void triangular();
void pentagonal();
void pronic();
void powers2();
void alt_powers2();

int main()
{
  cout << "Enter n: ";
  cin >> n;
  
  fib();
  trib();
  triangular();
  pentagonal();
  pronic();
  powers2();
  alt_powers2();
  
  collatz();
  return 0;
}
void alt_powers2()
{
  
  cout << endl << endl;
  cout << "Alt Powers 2 seq is: \n ";

  int c = 1;
  long long int s = 0;
  long long int d = 1;
  bool isNegative = false;
  
  while(c <= n)
  {
    if (!isNegative)
      cout << d << ", ";
    else
      cout << -d << ", ";
    d = 1;
    for(int i = 0; i < c; i++)
    {
      d*=2;
    }
    
    isNegative = !isNegative;
    s+=d;
    c++;
  }

  cout << endl << "Sum: " << s << endl;
}
void powers2()
{
  cout << endl << endl;
  cout << "Powers 2 seq is: \n ";

  int c = 1;
  long long int s = 0;
  long long int d = 1;

  while(c <= n)
  {
    cout << d << ", ";
    d = 1;
    for(int i = 0; i < c; i++)
    {
      d*=2;
    }
    s+=d;
    c++;
  }

  cout << endl << "Sum: " << s << endl;
}

void pronic() {
  cout << endl << endl;
  cout << "Pronic seq is: \n ";

  int c = 1; // count
  int s = 0; // sum
  int d = 0; // curr digit

  while(c <= n)
  {
    cout << d << ", ";
    d = c * (c+1);
    s+=d;
    c++;
  }

  cout << endl << "Sum: " << s << endl;
}
void pentagonal() {
  cout << endl << endl;
  cout << "Pentagonal seq is: \n ";

  int c = 1; // count
  int s = 0; // sum
  int d = 1; // curr digit

  while(c <= n)
  {
    cout << d << ", ";
    d = ( (3*(c*c) ) - c )/ 2;
    s+=d;
    c++;
  }

  cout << endl << "Sum: " << s << endl;
}

void triangular() {
  cout << endl << endl;
  cout << "Triangular seq is: \n ";
  int c = 1; // count
  int s = 0; // sum
  int d = 1; // curr digit

  while(c <= n)
  {
    d = c * ( c + 1 ) / 2;
    cout << d << ", ";
    s+=d;
    c++;
  }

  cout << endl << "Sum: " << s << endl;
}

void collatz() {
  cout << endl << endl;
  cout << "Collatz seq is: \n ";
  int s = 0; // sum
  int a;
  cout << "Enter a number a: ";
  cin >> a;

  while(a != 1){
    cout << a << " -> ";
    // even
    if ( a % 2 == 0 )
    {
      a = a / 2;
    }
    // odd
    else {
      a = 3 * a + 1;
    }
    s += a;
  }
  cout << a;
  cout << endl << "Sum: " << s << endl;
}

void trib() {
  cout << endl << endl;
  cout << "Tribonnaci seq is: \n ";
  int c = 0; // count
  int s = 0; // sum
  int d = 0; // curr digit
  int p1 = 0; // prev 1st digit
  int p2 = 0; // prev 2nd digit
  int p3 = 0; // prev 3rd digit

  while(c < n)
  {
    cout << d << ", ";

    if(c == 0)
    {
      d = 0;
    }
    else if (c == 1)
    {
      d = 1;
    }
    else {
      d = p1 + p2 + p3;
    }
    p3 = p2;
    p2 = p1;
    p1 = d;
    s += d;
    c++;
  }


  cout << endl << "Sum: " << s << endl;
}

void fib() {
  cout << endl << endl;
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


  cout << endl << "Sum: " << s << endl;
}

