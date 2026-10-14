#include <iostream>
using namespace std;

void printMenu();
void palindromeCheck();
void moveZeros();
void binarySearch();
void mergeArrays();
void longestSubarray();

int main() {
  printMenu();
}

void printMenu() {
  cout << "====================== Arrays Assignment ======================\n";
  cout << "|           1. Palindrome Check in Character Array            |\n";
  cout << "|                  2. Move zeros to the end                   |\n";
  cout << "|                      3. Binary Search                       |\n";
  cout << "|                  4. Merge two sorted arrays                 |\n";
  cout << "|           5. Longest subarray with sum at most 5            |\n";
  cout << "|-------------------------------------------------------------|\n";
  cout << "|                          0. Exit                            |\n";
  cout << "===============================================================\n";
  cout << "Enter your choice: ";

  int c;
  cin >> c;
  switch (c) {
    case 1:
      palindromeCheck();
      break;
    case 2:
      moveZeros();
      break;
    case 3:
      binarySearch();
      break;
    case 4:
      mergeArrays();
      break;
    case 5:
      longestSubarray();
      break;
    case 0:
      cout << "Exiting...... \n";
      break;
    default:
      cout << "Invalid input!! \n";
      printMenu();
      break;
  }
}

void palindromeCheck() {
  cout << "\n";
  char word[100];
  cout << "> Enter a word: ";
  cin >> word;
  bool isPalindrome = true;
  
  int i = 0;
  int size = 0;

  while (word[size] != '\0') size++;
  int j = size - 1;

  while (i < j && isPalindrome) {
    if (word[i] != word[j])
      isPalindrome = false;
    i++;
    j--;
  }

  if (isPalindrome) {
    cout  << "> " << word <<  " is palindrome";
  } else {    
    cout  << "> "<< word <<  " is not palindrome";
  }
  

  cout << "\n";

  printMenu();
}

void moveZeros() {
  int size;
  int array[1000] = {0};

  bool wrongInput = false;

  cout << "> Enter size of array (1 till 1000): ";
  cin >> size;
  

  if (size < 1 || size > 1000) {
    cout << "Error! Size is too small or too big...\n";
    wrongInput = true;
  }

  if (!wrongInput)
    cout << "> Enter n elements: ";

  for (int i = 0; i < size && !wrongInput; i++) {
    cin >> array[i];
  }

  int rIndex = 0, wIndex = 0;

  while (rIndex <= size && wIndex <= size && !wrongInput) {

    // we can swap if wIndex is not zero
    if (array[rIndex] == 0 && (array[wIndex] != 0)) {
      int t = array[rIndex];
      array[rIndex] = array[wIndex];
      array[wIndex] = t;
      rIndex++;
      wIndex++;
    // if we can't write get the 2nd position we can write
    } else if (array[rIndex] == 0) {
      wIndex++;
    // is not 0 we move to next element
    } else {
      rIndex++;
    }
  }

  if (!wrongInput) {
    cout << "> New array is: { ";
    for (int i = 0; i < size; i++)
      cout << array[i] << " ";

    cout << "} \n";
  }
  printMenu();
}
void binarySearch() {
  return;
}
void mergeArrays(){
  return;
}
void longestSubarray() {
  return;
}
