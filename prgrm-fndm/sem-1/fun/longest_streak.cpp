#include <iostream>


int main() {
  int prev = 0;
  int x = 0;
  int longest_seq = 0;
  int prev_longest_seq = 0;
  
  std::cout << "Enter a stream terminated w/ -1 \n";
  std::cout << "0\n";

  while(std::cin >> x && x != -1) {
    
    if (x == prev + 1) {
      longest_seq += 1;
    }
    else {
      // if new one is greater set it to prev
      // since it got terminated
      if (longest_seq > prev_longest_seq) {
        prev_longest_seq = longest_seq;
      }
      // reset count
      longest_seq = 0;
    }
    prev = x;
  }

  // if prev one was bigger set it to longest :3
  if (longest_seq < prev_longest_seq) {
    longest_seq = prev_longest_seq;
  }

  // adding 1 cuz it counts from 0
  std::cout << "Longest streak is: " << longest_seq + 1<< "\n";
  return 0;
}
