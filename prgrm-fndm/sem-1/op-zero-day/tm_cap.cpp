#include <iostream>

using namespace std;


int main()
{
  long long int t_s ;
  cout << "Enter total sec: ";
  cin >> t_s;
  int w, d, h, m, s;
  
  w = (t_s / 604800);
  t_s = (t_s % 604800);
  
  d = (t_s / 86400);
  t_s = (t_s % 86400);
  
  h = (t_s / 3600);
  t_s = t_s % 3600;

  m = (t_s / 60); 
  t_s = t_s % 60;
  
  s = t_s; 

  cout << "Weeks: " << w << endl;  
  cout << "Days: " << d << endl;  
  cout << "Hours: " << h << endl;  
  cout << "Minutes: " << m << endl;  
  cout << "Seconds: " << s << endl;  
  
  return 0;
}
