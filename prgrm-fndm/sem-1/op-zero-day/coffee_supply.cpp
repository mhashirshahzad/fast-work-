#include <iostream>
using namespace std;

int main()
{
  int kg = 0;
  cout << "Enter shipment weight (in kg): ";
  cin >> kg;

  float pounds = kg * 2.2;
  float ounces = pounds * 16;

  cout << "Pounds: " << pounds << endl;
  cout << "Ounces: " << ounces << endl;
  
  int ounce_bag = ounces / 12;
  int rem = (int)ounces % 12;

  cout << "Full 12-ounce bag: " << ounce_bag << endl;
  cout << "Remaining ounces: " << rem << endl;
  
}
