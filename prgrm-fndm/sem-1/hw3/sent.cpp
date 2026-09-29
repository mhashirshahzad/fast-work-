#include <climits>
#include <iostream>
using namespace std;

int main() {
  int c = 0, sum = 0, hgh = 0, low = INT_MAX;
  float avg;
  cout << "Enter  +ve numbers indefinitely (enter -1 to end loop)";
  int n;
  
  do {
    cin >> n;
    if (n != -1) {
      c += 1;
      sum += n;
      if (n > hgh) hgh = n;
      if (n < low) low = n;
    }
  } while (n != -1);

  if (c >= 1) {
    avg = (float)sum / c;
    cout << "Count: " << c << endl;
    cout << "Average: " << avg << endl;
    cout << "Highest: " << hgh << endl;
    cout << "Lowest: " << low << endl;
  } else {
    cout << "No scores recorded :<";
  }
  return 0;
}
