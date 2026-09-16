// Task 1
/*
#include <iostream> 
using namespace std;

int main() {
	std::cout << "Hello World!" << endl;
	system("pause");
	return 0;

}
*/

// Task 2
/* 
#include <iostream>
using namespace std;


int main() {
	cout << "*****************************************************************************" << endl;
	cout << "                        Welcome to Programming Fundamentals                  " << endl;
	cout << "                                 Name: Hashir                                " << endl;
	cout << "                              Roll No.: L26-0558                             " << endl;
	cout << "                                Degree: BS (CS)                              " << endl;
	cout << "                               Section: BCS-1B                               " << endl;
	cout << "                                   Lab: 02                                   " << endl;

	system("pause");
	return 0;
}
*/

// Task 3
/*
#include <iostream>
using namespace std;

int main() {
	int i;
	short s;
	float f;
	char c;
	double d;
	long l;
	long long ll;

	cout << "==== Data Types and Their Sizes ====" << endl;
	cout << "Size of int: " << sizeof(i) << endl;
	cout << "Size of short: " << sizeof(s) << endl;
	cout << "Size of float: " << sizeof(f) << endl;
	cout << "Size of char: " << sizeof(c) << endl;
	cout << "Size of double: " << sizeof(d) << endl;
	cout << "Size of long: " << sizeof(l) << endl;
	cout << "Size of long long: " << sizeof(ll) << endl;

	system("pause");
	return 0;
}
*/

// Task 4
/*
#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	cout << "Enter third number: ";
	cin >> z;

	cout << endl << "===== Result =====" << endl;
	cout << "Sum: " << x + y + z << endl;
	cout << "Average: " << (x + y + z) / 3 << endl;

	system("pause");
	return 0;
}
*/

// Task 5
/*
#include <iostream>
using namespace std;

int main() {
	float mfb; // monthly fitness budget
	float gme; // gym membership expense
	float se; // supplements expense
	float see; // sports equipment expense
	float fce; // fitness classes expense
	float hfe; // healthy food expense
	float ohe; // other healthexpenses

	cout << "Enter your monthly fitness budget: ";
	cin >> mfb;
	cout << "Enter your gym membership expense: ";
	cin >> gme;
	cout << "Enter your supplements expense: ";
	cin >> se;
	cout << "Enter your sports equipment expense: ";
	cin >> see;
	cout << "Enter your fitness classes expense: ";
	cin >> fce;
	cout << "Enter your healthy food expense: ";
	cin >> hfe;
	cout << "Enter your other health expenses: ";
	cin >> ohe;

	cout << endl << "===== Fitness Budget Report =====" << endl;
	
	int te = gme + se + see + fce + hfe + ohe; // total expenses
	cout << "Total Budget: Rs. " << mfb << endl;
	cout << "Total Expenses: Rs. " << te << endl;
	cout << "Remaining Budget: Rs. " << mfb - te << endl;

	cout << endl << "Expense Breakdown (as % of budget):" << endl << endl;

	// dividing by total expense gives wrong ans
	cout << "Gym Membership: " << (gme / mfb * 100) << "%" << endl; 
	cout << "Supplements: " << ( se / mfb * 100) << "%" << endl;
	cout << "Sports Equipment: " << (see / mfb * 100) << "%" << endl;
	cout << "Fitness Classes: " << (fce / mfb * 100) << "%" << endl;
	cout << "Healthy Food: " << (hfe / mfb * 100) << "%" << endl;
	cout << "Other Health Expenses: " << (ohe / mfb * 100) << "%" << endl;

	system("pause");
	return 0;
}
*/

// Task 6
/*
#include <iostream>
using namespace std;

int main() {
	// this is showing random squiggly error lines :-(
	int p, r, t, si, ta;
	cout << "Enter Principal Amount = ";
	cin >> p;
	cout << "Enter Annual Interest Rate = ";
	cin >> r;
	cout << "Enter Time = " ;
	cin >> t;

	si = (p*r*t) / 100;
	t = p + si;
	cout << endl << "Output:" << endl;
	cout << "SI = " << si << endl;
	cout << "Total = " << t << endl;

	system("pause");
	return 0;
}
*/

// Task 7
/*
#include <iostream>
using namespace std;

int main() {
	float c, f;
	cout << "Enter temp. in Farenheit: ";
	cin >> f;
	c = (f - 32) * (5.0 / 9); // 5 / 9 becomes 0 cuz int so 5.0 / 9 is the sol
	cout << "Celsius: " << c << endl;
	system("pause");
	return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter two numbers: " << endl;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Swapped :p " << endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	system("pause");
	return 0;
}
