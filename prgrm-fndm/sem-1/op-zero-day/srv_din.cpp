#include <iostream>

using namespace std;
int main()
{
  double meal_cost, state_tax, city_tax, tip, service_charge, grand_total, each_person;
  int peeps;

  cout << "Enter total meal cost: ";
  cin >> meal_cost;

  cout << "Enter no of peeps: ";
  cin >> peeps;

  state_tax = meal_cost * 0.05;
  city_tax = meal_cost * 0.02;
  tip = meal_cost * 0.18;
  grand_total = state_tax + city_tax + tip + meal_cost;

  service_charge = grand_total * 0.03;
  grand_total += service_charge;

  each_person = grand_total / peeps;

  cout << "State Tax: " << state_tax << endl;
  cout << "City Tax: " << city_tax << endl;
  cout << "Tip : " << tip << endl;
  cout << "Service Charge: " << service_charge << endl;
  cout << "Grand Total: " << grand_total << endl;
  cout << "Each Person: " << each_person << endl;


  return 0;
}
