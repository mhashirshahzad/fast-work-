#include <iostream>
using namespace std;

int getSquare(int n);
double getAverage(int a, int b);
char getGrade(int marks);
bool isEven(int n);
int getSquare(int n);
void displayResult(int result);

int main() {
  displayResult(100);
  return 0;
}

int getSquare(int n) {
  return n * n;
}
double getAverage(int a, int b) {
  return (double)(a + b) / 2;
}

char getGrade(int marks) {
  if (marks >= 80) return 'A';
  else if (marks >= 70) return 'B';
  else if (marks >= 60) return 'C';
  else return 'F';
}

bool isEven(int n) {
  return !(n % 2);
}

void displayResult(int result) {
  cout << "Marks: " << result << endl;
  cout << "Grade: " << getGrade(result)<< endl;
}
