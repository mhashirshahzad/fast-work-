#include <iostream>
#include <climits>
#include <iomanip>

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

  {
    cout << endl << "- Question 12 -" <<endl << endl;
    char dc;
    cout << "Enter a digit: ";
    cin >> dc;
    cout << "Char entered: " << dc << endl;
    cout << "ASCII code: " << (int)dc << endl;
    cout << "True numeric value: " << dc - '0' << endl;
  }

  {
    cout << endl << "- Question 13 -" <<endl << endl;
    cout << "Enter a letter and a shift: ";
    char l;
    int s;

    cin >> l >> s;
    cout << "OG letter: " << l <<endl;
    cout << "Shift amount: " << s <<endl;

    /*
      l = 'x'
      l - 'a' = 23  // 120 - 97 = 23
      s = 5
      23 + s = 28
      28 % 26 = 2
      'a' + 2 = 97 + 2 = 99 = 'c'

      so it shifts the character while keeping it btwn 'a' to 'z' or 97 to 122
    */
    char w = 'a' + ((l - 'a' + s) %26); // yanked from the pdf ;p
    cout << "Result after wrapped: " << w << endl;
    
  }

  {
    cout << endl << "- Question 14 -" << endl << endl;
    char c1,c2;
    int gap = ('a' - 'A');
    cout << "Enter 2 uppercase characters: ";
    cin >> c1 >> c2;
    cout << "Lowercase c1: " << (char)(c1 + gap) << endl;
    cout << "Lowercase c2: " << (char)(c2 + gap) << endl;
    cout << "Alphabetical distance: " << c2 - c1 << " letters apart" << endl;
  } 

  {
    
    cout << endl << "- Question 15 -" <<endl <<endl;
    int maxVal = INT_MAX;
    
    /*
      let's assume that int ranges from -8 to 8
      when int is 8 and we add one instead of becoming 9
      it circles to the lowest possible value which is -8
      and adding one then decreases it :p
    */
    cout << "INT_MAX: " << maxVal << endl;
    cout << "INT_MAX + 1: " << maxVal + 1 << endl;
    cout << "INT_MAX + 2: " << maxVal + 2 << endl;
  }

  {
    cout << endl << "- Question 16 -" << endl << endl;
    int signedZero = 0;
    unsigned int unsignedZero = 0;
    int a = -1;
    unsigned int b = 1;

    /*
      for signed int 0 - 1 becocmes -1 cuz it can store -ve numbers
      for unSigned int 0 - 1 becomes a huge number cuz 0 is the smallest number and decreasing it
      makes it circle to the highest number

      the binary value of  -1 (int) assume it to be 1000
      then binary value of 1 (unsigned int) will be 0001
      1000 < 0001  is false so we get 0

      these values aren't real values or taken from ascii table i js made them up bcz @sir said that 1st bit is used for sign
      and i also assumed them to be 4bit :P 

    */
    cout << "signedZero - 1 = " << signedZero - 1 << endl;
    cout << "unsignedZero - 1 = " << unsignedZero - 1 << endl;

    // this line gives warning to me -_- not my fault tho
    /*
      clang++ -std=c++23 -Wall -Wextra -g l26-0558.cpp -o bin.out
      l26-0558.cpp:281:55: warning: comparison of integers of
            different signs: 'int' and 'unsigned int'
            [-Wsign-compare]
        281 |   ...as int = " << static_cast<int>(a < b) <<endl;
            |                           
    */
    cout << "(a < b) as int = " << static_cast<int>(a < b) <<endl;
  }

  {
    cout << endl << "- Question 17 -" <<endl << endl;
    float bigFloat = 100000000.0f;
    cout << "bigFloat = " << fixed << bigFloat << endl;
    cout << "bigFloat + 0.0001f = " << fixed << bigFloat + 0.0001f << endl;
    cout << "Difference (float) = " << fixed << (bigFloat + 0.0001f) - bigFloat << endl;

    /*
      float is less precise than double
      float precision is ~6
      double precision is ~15

      float can't handle really small decimal numbers like 0.0001f
      while double can :o
    */
    double bigDouble = 100000000.0f;
    cout << "bigDouble = " << fixed << bigDouble << endl;
    cout << "bigDouble + 0.0001f = " << fixed << bigDouble + 0.0001f << endl;
    cout << "Difference (double) = " << fixed << (bigDouble + 0.0001f) - bigDouble << endl;
  }

  {
    cout << endl << "- Question 18 -" << endl << endl;
    unsigned char counter = 255;
    cout << "Initial Counter (255) = " << static_cast<int>(counter) << endl;
    /*
      uhm so idk about cars so i think odometer (told by google) is the circular meter on top
      unsigned char ranges from 0 to 255
      when we add 1 it becomes 255 + 1 but 256 cant be stored in char so it becomes 0
      then add 1 it becomes 1

      for odometer analogy
      odometer can range from 0 to X and when it crosses the limit it resets
    */
    counter++;
    cout << "Counter after + 1 (wrap) = " << static_cast<int>(counter)<< endl;
    counter++;
    cout << "Counter after + 2 = " << static_cast<int>( counter) << endl;
  }
  return 0;
}

