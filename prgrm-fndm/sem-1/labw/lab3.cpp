#include <iostream>
using namespace std;

int main() {
	/*
	{
		cout << endl << endl << "- Problem 1 -" << endl << endl;
		int a, b, c;

		cout << "Enter number 1 = ";
		cin >> a;
		cout << "Enter number 2 = ";
		cin >> b;
		cout << "Enter number 3 = ";
		cin >> c;
		
		cout << "User entered " << a << ", " << b << " and " << c << " as input." << endl;

		if (a > b && a > c)
			cout << "The largest of the numbers is " << a << endl;
		else if (b > a && b > c)
			cout << "The largest of the numbers is " << b << endl;
		else if (c > b && c > a)
			cout << "The largest of the numbers is " << c << endl;
		else
			cout << "All values are equal!" << endl;

	}
	*/

	/*

	{
		cout << endl << endl << "- Problem 2 -" << endl << endl;
		int num;
		cout << "Enter an integer: ";
		cin >> num;
		if (num > 0)
			cout << "Positive!";
		else if (num < 0)
			cout << "Negative!";
		else
			cout << "Zero!";

		cout << endl;
	}
	*/

	/*
	{
		cout << endl << endl << "- Problem 3 -" << endl << endl;
		int num;
		cout << "Enter an integer: ";
		cin >> num;

		if (num == 0)
			cout << "0 was entered!";
		else if (num % 5 == 0 && num % 3 == 0)
			cout << "Multiple of both 3 and 5";
		else if (num % 5 == 0)
			cout << "Multiple of 5 only";
		else if (num % 3 == 0)
			cout << "Multiple of 3 only";
		else
			cout << "Multiple of none :(";

		cout << endl;

	}
	*/

	/*
	{
		cout << endl << endl << "- Problem 4 -" << endl << endl;
		int units, bill;
		cout << "Enter units consumed: ";
		cin >> units;
		if (units < 0)
			cout << "ERROR!";
		else if (units < 100) {
			bill = units * 10;
			cout << "Bill = " << bill;
		}
		else if (units < 200) {
			bill = units * 15;
			cout << "Bill = " << bill;
		}
		else {
			bill = units * 20;
			cout << "Bill = " << bill;
		}

		cout << endl;

	}
	*/

	/*
	{
		cout << endl << endl << "- Problem 5 -" << endl << endl;
		char ch;
		cout << "Enter a character: ";
		cin >> ch;

		if (ch >= 'A' && ch <= 'Z')
			cout << "Character is uppercase!" << endl;
		else if (ch >= 'a' && ch <= 'z')
			cout << "Character is lowercase!" << endl;
		else
			cout << "Invalid input!" << endl;

		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			cout << "Character is also an uppercase vowel!";
		else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			cout << "Character is also a lowercase vowel!";
		else
			cout << "Character is not vowel :(";

		cout << endl;

	}
	*/

	/* 
	{
		cout << endl << endl << "- Problem 6 -" << endl << endl;
		float temp;
		cout << "Enter temperature: ";
		cin >> temp;

		if (temp < 0)
			cout << "FREEZING!";
		else if (temp < 15)
			cout << "Cold";
		else if (temp < 30)
			cout << "Moderate";
		else
			cout << "Hot";

		cout << endl;
	} */

	/*
	{
		cout << endl << endl << "- Problem 7 -" << endl << endl;
		int marks;
		cout << "Enter Marks b/w 0 and 100: ";
		cin >> marks;

		if (marks < 0)
			cout << "Invalid marks! (less than 0)";
		else if (marks <= 60)
			cout << "Grade F";
		else if (marks <= 70)
			cout << "Grade D";
		else if (marks <= 80)
			cout << "Grade C";
		else if (marks <= 90)
			cout << "Grade B";
		else if (marks <= 100)
			cout << "Grade A";
		else
			cout << "Invalid marks! (greater than 100)";

		cout << endl;

	}
	*/

	/*
	{
		cout << endl << endl << "- Problem 8 -" << endl << endl;
		int n1, n2, res = 0;
		char op;

		cout << "Enter number1: ";
		cin >> n1;

		cout << "Enter operator ( +, -, *, / ): ";
		cin >> op;

		cout << "Enter number2: ";
		cin >> n2;

		if (op == '+')
		{
			res = n1 + n2;
			cout << endl << "Result: " << res << endl;
		}
		else if (op == '-')
		{
			res = n1 - n2;
			cout << endl << "Result: " << res << endl;
		}
		else if (op == '*')
		{
			res = n1 * n2;
			cout << endl << "Result: " << res << endl;
		}
		else if (op == '/' && n2 == 0)
		{
			cout << "Can't divide by 0!";
		}
		else if (op == '/')
		{
			res = n1 / n2;
			cout << endl << "Result: " << res << endl;
		}
		else
		{
			cout << "Invalid operand! ";
		}
		cout << endl << "Result: " << res << endl;

	}
	*/

	/*
	{
		cout << endl << endl << "- Problem 9 -" << endl << endl;
		int n1, n2, n3;
		cout << "Enter 3 numbers: ";
		cin >> n1 >> n2 >> n3;

		if (n1 > n2 && n2 > n3)
			cout << "In descending order!";
		else
			cout << "Not in order!";

		cout << endl;
	}
	*/
	
	/*
	{
		cout << endl << endl << "- Problem 10 -" << endl << endl;

		int num, u, t, h, sum, og_num;
		
		cout << "Enter a 3 digit number: ";
		cin >> num;
		og_num = num;

		u = num % 10; // units
		num /= 10;
		t = num % 10; // tens
		num /= 10;
		h = num % 10; // hundreds
		num /= 10;
		cout << h << " hundreds, " << t << " tens, " << u << " units." << endl;

		sum = (h * h * h) + (t * t * t) + (u * u * u);

		if (sum == og_num)
			cout << og_num << " is an arm strong number.";
		else
			cout << og_num << " is not an arm strong number. ";

		cout << endl;
	}
	*/

	/*
	{
		cout << endl << endl << "- Problem 11 -" << endl << endl;
		bool x1, x2, x3, x4, x5, x6, x7, x8, x9;
		cout << "Enter 9 numbers (0 -> p1 move and 1 -> p2 move): ";
		cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8 >> x9;
		
		cout << " Table: \n";

		cout << x1 << " " << x2 << " " << x3 << endl;
		cout << x4 << " " << x5 << " " << x6 << endl;
		cout << x7 << " " << x8 << " " << x9 << endl;

		// player1 victory conditions
		if (x1 == 0 && x2 == 0 && x3 == 0)
			cout << "Player 1 won by row1";
		else if (x4 == 0 && x5 == 0 && x6 == 0)
			cout << "Player 1 won by row2";
		else if (x7 == 0 && x8 == 0 && x9 == 0)
			cout << "Player 1 won by row3";

		else if (x1 == 0 && x5 == 0 && x9 == 0)
			cout << "Player 1 won by diagonal1";
		else if (x3 == 0 && x5 == 0 && x7 == 0)
			cout << "Player 1 won by diagonal2";

		// player2 victory conditions
		else if (x1 == 1 && x2 == 1 && x3 == 1)
			cout << "Player 2 won by row1";
		else if (x4 == 1 && x5 == 1 && x6 == 1)
			cout << "Player 2 won by row2";
		else if (x7 == 1 && x8 == 1 && x9 == 1)
			cout << "Player 2 won by row3";

		else if (x1 == 1 && x5 == 1 && x9 == 1)
			cout << "Player 2 won by diagonal1";
		else if (x3 == 1 && x5 == 1 && x7 == 1)
			cout << "Player 2 won by diagonal2";
		else
			cout << "No one won";

		cout << endl;


	}
	*/

	std::system("pause");
	return 0;
}
