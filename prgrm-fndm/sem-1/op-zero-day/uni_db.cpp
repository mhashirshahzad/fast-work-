#include <iostream>

using namespace std;


int main()
{
  int stdnts = 8340;
  int lap_ownr, vs_pref, vsc_pref;

  lap_ownr = stdnts * 0.62;
  vs_pref = lap_ownr * 0.35;
  vsc_pref = vs_pref * 0.2;

  cout << "Students: " << stdnts << endl;
  cout << "Lap Owner: " << lap_ownr << endl;
  cout << "Visual Studio users: " << vs_pref << endl;
  cout << "Visual Studio Code users: " << vsc_pref << endl;
  

  return 0;
}
