#include <iostream>

using namespace std;

int main()
{
  int n,  p;
  cout << "Enter no of pages: ";
  cin >> n;
  cout << "Enter target page: ";
  cin >> p;

  int start_flips = p / 2;

  if (p %  2 != 0)
    p -= 1;

  int end_flips = (n - p) / 2;

  if (start_flips < end_flips)
    cout << "Min Flips: " << start_flips;
  else
    cout << "Min Flips: " << end_flips;

  return 0;
}
