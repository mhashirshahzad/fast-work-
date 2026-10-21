#include <cstdlib>
#include <iostream>
using namespace std;

double calculateTotal(double price, int quantity) {return price * quantity;}
int convertToInteger(double value) {return value;}
char convertToCharacter(int code) {return code;}

int main() {
  cout << calculateTotal(99, 3.8)<< endl;
  cout << convertToInteger(45.9)<< endl;
  cout << convertToCharacter(65.7)<< endl;
  return 0;
}
