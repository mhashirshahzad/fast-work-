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
    cout  << "\n> " << word <<  " is palindrome";
  } else {    
    cout  << "\n> "<< word <<  " is not palindrome";
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
    cout << "> Error! Size is too small or too big...\n";
    wrongInput = true;
  }

  if (!wrongInput)
    cout << "> Enter " << size << " elements: ";

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
    cout << "\n> New array is: { ";
    for (int i = 0; i < size; i++)
      cout << array[i] << " ";

    cout << "} \n";
  }
  printMenu();
}

void binarySearch() {

  int size;
  int k;
  int array[1000] = {0};

  bool wrongInput = false;
  int indexOfK = -1;

  cout << "> Enter size of array (1 till 1000): ";
  cin >> size;
  
  if (size < 1 || size > 1000) {
    cout << "> Error! Size is too small or too big...\n";
    wrongInput = true;
  }

  if (!wrongInput)
    cout << "> Enter " << size <<" elements: ";

  for (int i = 0; i < size && !wrongInput; i++) {
    cin >> array[i];
  }

  if (!wrongInput) {
    cout << "> Enter k (the value to find): ";
    cin >> k;
  }
  int lowrLim = 0;
  int hghrLim = size - 1;

  while (lowrLim <= hghrLim && indexOfK == -1 && !wrongInput ) {
    int mid = (lowrLim + hghrLim) / 2;
    if (array[lowrLim] == k) {
      indexOfK = lowrLim;
    } else if (array[hghrLim] == k) {
      indexOfK = hghrLim;
    } else if (array[mid] == k) {
      indexOfK = mid;
    } else if (array[mid] > k) {
      hghrLim = mid - 1;
      lowrLim++;
    } else if (array[mid] < k) {
      lowrLim = mid + 1;
      hghrLim--;
    }
  }

  if (wrongInput) {
    cout << ":( \n";
  }else if (indexOfK == -1) {
    cout << "> Couldn't find '" << k << "' in the array :(\n";
  } else {
    cout << "\n> Found '" << k << "' at index " << indexOfK + 1 << "'th :)\n";
  }
  printMenu();
}

void mergeArrays(){


  int size1;
  int a1[500] = {0};

  int size2;
  int a2[500] = {0};

  int size3;
  int a3[1000] = {0};
  
  bool wrongInput = false;
  int indexOfK = -1;

  cout << "> Enter size of 1st array (1 till 1000): ";
  cin >> size1;

  if (size1 < 1 || size1 > 500) {
    cout << "> Error! Size is too small or too big...\n";
    wrongInput = true;
  }

  if (!wrongInput)
    cout << "> Enter " << size1 <<" elements: ";

  for (int i = 0; i < size1 && !wrongInput; i++) {
    cin >> a1[i];
  }

  cout << "> Enter size of 2nd array (1 till 1000): ";
  cin >> size2;

  if (size2 < 1 || size2 > 500) {
    cout << "> Error! Size is too small or too big...\n";
    wrongInput = true;
  }

  if (!wrongInput)
    cout << "> Enter " << size2 <<" elements: ";

  for (int i = 0; i < size2 && !wrongInput; i++) {
    cin >> a2[i];
  }
  
  int i = 0, j = 0, k = 0;

  size3 = size1 + size2;

  while (i < size1 && j < size2 && k < size3 && !wrongInput) {
    if (a1[i] == a2[j]) {
      a3[k++] = a1[i++];
      a3[k++] = a2[j++];
    } else if (a1[i] < a2[j])
      a3[k++] = a1[i++];
    else if (a1[i] > a2[j]) 
      a3[k++] = a2[j++];
  }

  // copyin rem elements ya know :O
  while (i < size1) {
    a3[k++] = a1[i++];
  }
  while (j < size2) {
    a3[k++] = a2[j++];
  }
  
  if (!wrongInput) {
    cout << "\n> New array is: { ";
    for (int i = 0; i < size3; i++)
      cout << a3[i] << " ";
    cout << "} \n";
  }

  printMenu();
}

void longestSubarray() {
  int size;
  int s;
  int array[1000] = {0};

  bool wrongInput = false;
  int indexOfK = -1;

  cout << "> Enter size of array (1 till 1000): ";
  cin >> size;
  
  if (size < 1 || size > 1000) {
    cout << "> Error! Size is too small or too big...\n";
    wrongInput = true;
  }

  if (!wrongInput)
    cout << "> Enter " << size <<" elements: ";

  for (int i = 0; i < size && !wrongInput; i++) {
    cin >> array[i];
    if (array[i] < 0 ) {
      wrongInput = true;
    }
  }

  if (!wrongInput) {
    cout << "> Enter the maximum possible sum: ";
    cin >> s;
  }

  if (size < 1) {
    cout << "> Error! Max sum is too small :(";
    wrongInput = true;
  }


  int newSubArrayIndex = 0;
  int newSubArrayLength = 0;

  int longestSubArrayIndex = 0;
  int longestSubArrayLength = 0;
  int longestClosestS = 0;

  int newClosestS = 0;

  for(int i = 0; i < size && !wrongInput; i++) {

    if (newClosestS + array[i] <= s) {
      newClosestS += array[i];
      newSubArrayLength++;
    } else {
      // get the 0th element of sub array and remove it
      newClosestS -= array[i - newSubArrayLength];
      // so we can redo the current iteration
      // didnt want to do nested, go one step behind and retry :o
      // wont get stuck for some reason :?
      i--;
      newSubArrayIndex++;
      newSubArrayLength--;
    }

    // if new one is better for us :o
    if (newClosestS >= longestClosestS && newSubArrayLength >= longestSubArrayLength) {
      longestClosestS = newClosestS;
      longestSubArrayIndex = newSubArrayIndex;
      longestSubArrayLength = newSubArrayLength;
    }
    
  }

  if (!wrongInput)
    cout << "\n> Length: " << longestSubArrayLength;

  if (longestSubArrayLength > 0 && !wrongInput)
    cout << ", starts at: " << longestSubArrayIndex;

  if (!wrongInput)
    cout << "\n> SubArray: { ";

  for (
      int i = longestSubArrayIndex;
      i < longestSubArrayIndex + longestSubArrayLength && !wrongInput;
      i++
     )
  
    cout << array[i] << " ";

  if (!wrongInput) {
    cout << "}";
    cout << " adds to  " << longestClosestS << "\n";
  }

  
  printMenu();
}
