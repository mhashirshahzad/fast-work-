#include <iostream>

using namespace std;

int main()
{
  int yr;
  cout << "Enter year: ";
  cin >> yr;

  if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0)
    cout << "Leap year" << endl;
  else
    cout << "Not a leap year" << endl;

  int prch_amnt;
  bool mem_sts;

  cout << "Enter purchase amount: ";
  cin >> prch_amnt;

  cout << "Membership status: ";
  cin >> mem_sts;

  if(mem_sts)
  {
    if (prch_amnt >= 100)
      cout << "20% dsc";
    else if (prch_amnt >= 50)
      cout << "10% dsc";
    else
      cout << "0% dsc";
  }
  else {
    if (prch_amnt >= 150)
      cout << "20% dsc";
    else
      cout << "0% dsc";
  }
  cout << endl;

  int d1,d2,d3,d4;
  cout << "Enter pin: ";

  if (d1 == d2 == d3 == d4)
    cout << "Weak pin";
  else if (d1 == d2 + 1 == d3 + 1 == d4 + 1)
    cout << "Weak pin";
  else if(d1== d2-1 == d3-1 == d4-1)
    cout << "Weak pin";
  else
    cout << "Strong pin :)";
    
  
  
  return 0;
}
