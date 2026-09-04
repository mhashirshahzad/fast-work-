#include <iostream>

using namespace std;

int main() {
  cout << "--- Homework 2 ---" << endl << endl << endl;
     {
    cout << "- Question 1 -" << endl << endl;

    // PRINTING STUFF :P
    cout << "Name: Hashir" << endl;
    cout << "RollNo: L26-0558" << endl;
    cout << "Section: 1B" << endl;   
  }


  {
    cout << endl << "- Question 2 -" << endl << endl;
    // idk it says to only do 1, 4 and 6th row, but then why the table :(E)
    /*
      int 2ndAttempt    -> has 2 at start, numbers can't be at start - Compiles? (No) - Good Style? (No)
      float Total_Fee   -> works fine                                - Compiles? (Yes)- Good Stlye? (No)
      double x          -> works fine                                - Compiles? (Yes)- Good Style? (Yes)
      int class         -> uses keyword class i guess                - Compiles? (No) - Good Style? (No)
      bool isRegistered -> works                                     - Compiles? (Yes)- Good Style? (Yes)
      int student age   -> has a white space, this isn't allowed     - Compiles? (No) - Good Stlye? (No)
      long roll_No_2026 -> works                                     - Compiles? (Yes)- Good Style? (No) 
    */

    // declaring variables with totally sane gpa
    int studentRollNo = 558;
    double gpa = 1.6;
    char studentName = 'H';
    int enrollmentYear = 2026;
    bool deanListStatus = false; // no idea what this means but it false
    int totalCreditHoursCompleted = 3;

    // printing the values :P
    cout << "Student Name: " << studentName << endl;
    cout << "Student Roll No: " << studentRollNo << endl;
    cout << "Student GPA: " << gpa << endl;
    cout << "Student Enrollment Year: " << enrollmentYear << endl;
    cout << "Dean List Status: " << deanListStatus << endl;
    cout << "Total Completed Credit Hours: " << totalCreditHoursCompleted << endl;
  }


  {
    cout << endl << "- Question 3 -" << endl << endl;

    int roll, age, cgpa; // what is cgpa :o

    cout << "Enter your RollNo, Age and CGPA in the given order: ";
    cin >> roll >> age >> cgpa;
    cout << "Confimed -> Roll: " << roll << " | Age: " << age << " | CGPA " << cgpa << endl;
  }
}
