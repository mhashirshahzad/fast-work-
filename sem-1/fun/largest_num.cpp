#include <iostream>

int main() {
  int count = 0;
  int largest = 0;
  int second_largest = 0;
  
  std::cout << "Enter no. of integers: ";
  std::cin >> count;
  
  int numbers[count];
  
  for(int i = 0; i < count; i++) {
    std::cout << "Enter a number: ";
    std::cin >> numbers[i];
    if (numbers[i] > largest) {
      second_largest = largest;
      largest = numbers[i];
    }
    else if (numbers[i] > second_largest) {
      second_largest = numbers[i];
    }
      
  }

  std::cout << "Largest number is: " << largest << "\n";
  std::cout << "2nd Largest number is: " << second_largest << "\n";
  
  return 0; 
}
