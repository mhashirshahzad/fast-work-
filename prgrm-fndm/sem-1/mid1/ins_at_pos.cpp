#include <iostream>

using namespace std;

int main() {
  int myArray[10] = {10, 20 ,30 ,40 ,50 ,60 ,70 ,80, 90, 100};

  cout << "My Array is: { ";
  for(int i = 0; i < 10; i++)
    cout << myArray[i] << ", ";
  cout << "} \n";

  int pos, val;
  cout << "Enter value and position to insert in array: ";
  cin >> val >> pos;


  pos--; // if user says 1 he means 0th item
  
  // don't replace anythinhg if invalid input
  if (pos > 9 || pos < 0) {
    cout << "\n INVALID position \n";
    pos = 9;
    val = myArray[pos];
  }
  
  int j = 9; // starting from end

  // shift the array 1 unit right
  while (j != pos) {
    myArray[j] = myArray[j-1];
    j--;
  }

  myArray[pos] = val;
  
  // now my array is
  cout << "Now my array is: { ";
  for(int i = 0; i < 10; i++)
    cout << myArray[i] << ", ";
  cout << "} \n";

  return 0;
}
