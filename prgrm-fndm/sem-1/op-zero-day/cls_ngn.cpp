#include <iostream>

using namespace std;


int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  if (num % 2 == 0)
    cout << "Even" <<endl;
  else
    cout << "Odd" << endl;

  if (num <0)
    cout << "Negative" << endl;
  else if (num > 0)
    cout << "Positive" << endl;
  else
    cout << "ZERO" << endl;
    

  int d;
  cout << "Enter a day b/w 1 to 7: ";
  cin >> d;

  if (d == 1)
    cout << "Monday";
  else if (d == 2)
    cout << "Tuesday";
  else if (d == 3)
    cout << "Wednesday";
  else if (d == 4)
    cout << "Thurday";
  else if (d == 5)
    cout << "Friday";
  else if (d == 6)
    cout << "Saturday";
  else if (d == 7)
    cout << "Sunday";
  else
    cout << "Invalid number purrr :(";
    
  return 0;
}
