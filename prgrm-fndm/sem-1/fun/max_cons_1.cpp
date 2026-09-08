#include <iostream>

int main() {
  int counter = 0;
  int prev_counter = 0;
  
  char str[1024] = {0};
  
  std::cout << "Enter a string of binary: ";

  std::cin >> str;
  int i = 0;
  
  while(str[i] != '\0')
  {
    if(str[i] == '1')
    {
      counter += 1;
    }
    else {
      if(counter > prev_counter)
      {
        prev_counter = counter;
        counter = 0;
      }
    }
    i++;
  }
  if (prev_counter > counter)
  {
    counter = prev_counter;
  }
  
  std::cout << "\n Highest no of consecutive 1s: " << counter << "\n";
  return 0;
}
