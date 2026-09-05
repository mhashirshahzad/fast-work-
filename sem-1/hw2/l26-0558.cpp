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
    // also printing values :>
    cout << "Confimed -> Roll: " << roll << " | Age: " << age << " | CGPA " << cgpa << endl;
  }

  {
    cout << endl << "- Question 4 -" << endl << endl;

    int a, b;
    cout << "Enter a,b: ";
    cin >> a >> b;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    // a = 10, b = 5
    // a = a + b = 15
    // b = a - b = 10
    // a = a - b = 5
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swap: a = " << a << ", b = " << b << endl;
  }

  {
    cout << endl << "- Question 5 -" << endl << endl;
    int m1,m2,m3,m4,m5;
    cout << "Enter 5 marks: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    // avg and total ig don't need comments
    int t = m1 + m2 + m3 + m4 + m5;
    cout << "Total: " << t << " | Average: " << t / 5; 
  }

  {
    cout << endl << "- Question 6 -" << endl << endl;
    int num, h, t, u;
    cout << "Enter a 3-digit number: ";
    // solving in comments
    cin >> num; // eg: num = 123
    
    u = num % 10; // num % 10 = 3
    num = num - u; // num - 3 = 120
    num = num / 10; // num / 10 = 12
    t = num % 10; // num % 10 = 2
    num = num - t; // num - 2 = 10
    num = num / 10; // num / 10 = 1
    h = num % 10; // num % 10 = 1

    cout << "Digits: Hundreds = " << h << ", Tens = " << t << ", Units = " << u << endl;
    // u * 100 = 300
    // t * 10 20
    // u + t + h = 321
    cout << "Reversed Number is " << (u * 100) + (t * 10) + h << endl;
    cout << "Sum of Digits = " << h + t + u << endl; 
  }

  {
    cout << endl << "- Question 7 -" << endl << endl;
    int t, h, m, s;
    cout << "Enter total seconds: ";
    cin >> t; // eg: t = 9450
    h = (t / 60) / 60; // ( 9450 / 60 ) / 60 = 2.625 or 2 (int) --- Could aslo be written as 9450 / 3600 but this looks cool :P
    m = (t / 60) % 60; // ( 9450 / 60 ) = 157.5 or 157 (int) ---> 157 % 60 = 37
    s = (t % 60) % 60; // ( 9450 % 60 ) = 30 ---> 30 % 60 = 30
    cout << "Deconstructed Time: " << h << " Hours, " << m << " Minutes, " << s << " Seconds" << endl;    
  }

  {
    cout << endl << "- Question 8 -" << endl << endl;

    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    char c;
    bool b;

    cout << "Size of short = " << sizeof(s) << endl;
    cout << "Size of int = " << sizeof(i) << endl;
    cout << "Size of long = " << sizeof(l) << endl;
    cout << "Size of long long = " << sizeof(ll) << endl;
    cout << "Size of float = " << sizeof(f) << endl;
    cout << "Size of double = " << sizeof(d) << endl;
    cout << "Size of char = " << sizeof(c) << endl;
    cout << "Size of bool = " << sizeof(b) << endl;
  }

  {
    cout << endl << "- Question 9 -" << endl << endl;

    int p1,p2,p3;
    cout << "Enter 3 prices of objects: ";
    cin >> p1 >> p2 >> p3;
    /*
      10 + 15 + 22 = 47
      47 / 3 = 15.666667 or 15 (cause of int)
    */ 
    cout << "Average (as int, truncated) = " << ( p1 + p2 + p3 ) / 3 << endl;
    /*
      idk should have declared above variables as float but then would have to type cast the 1st statement
      either way have to edo type casting
    */
    float fp1, fp2, fp3; // my debugger was saying that int will lead to loss of precision smth smth use float 
    fp1 = p1;
    fp2 = p2;
    fp3 = p3;  
    /*
      10.0 + 15.0 + 22.0 = 47.0
      47.0 / 3 = 15.666667 or 15.6667 (cause of float)
    */
    cout << "Average (as double, precise) = " << static_cast<double>((fp1 + fp2 + fp3) / 3) << endl;
  }

  {
    cout << endl << "- Question 10 -" << endl << endl;
    int x = 2000000;
    int y = 2000000;

    // i don't remember the values so had to copy paste 'em
    /*
      x and y are int both of 4 bytes
      when we multiply both we get 4,000,000,000,000
      but "The signed int data type ranges between -2,147,483,648 to 2,147,483,647"
      so it causes overflow and it produces a overflow value (or garbage)
    */
    
    long long badProduct = x * y;

    /*
      x and y are int both of 4 bytes
      when we multiply both we get 4,000,000,000,000
      but if we cast x as long long it becomes 8 bytes
      which "The long long data type ranges between -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807"
      in front of which our 4,000,000,000,000 is a smol no. :o so we can store it in there :P
    */ 
    long long goodProduct = static_cast<long long>(x) * y;

    cout << "Direct Product (badProduct) = " << badProduct << endl;
    cout << "Casted Prodcut (goodProduct) = " << goodProduct << endl;
    
  }

  {
    cout << endl << "- Question 11 -" << endl << endl;
    char c;
    cout << "Enter a lower case character: ";
    cin >> c;
    cout << "ASCII code of " << c << " is: " << (int) c << endl;
    cout << "3 letters later: " << (char)(c+3) <<endl;
    cout << "Uppercase version: " << (char)(c - 32)<< endl;
  }
  return 0;
}

