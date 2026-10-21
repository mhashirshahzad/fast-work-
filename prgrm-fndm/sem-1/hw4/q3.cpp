#include <iostream>
using namespace std;
double calculateBill(double price, int quantity = 1, double discount = 0) {
  price = price - (price * (discount / 100));
  return price * quantity;
}
int main() {
  cout << calculateBill(500) << endl;
  cout << calculateBill(1000, 2, 10) << endl;
  cout <<calculateBill(500, 3) << endl;
  cout <<calculateBill(500, 3, 20) << endl;
  return 0;
}
// double calculateBill(double price = 100, int quantity, double discount = 0);
// is incorrect ... cuz  def values always strt frtom right to left... and there
// cant be gaps
