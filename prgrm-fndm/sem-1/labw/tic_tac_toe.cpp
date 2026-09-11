#include <iostream>

using namespace std;

int main() {
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


  return 0;
}
