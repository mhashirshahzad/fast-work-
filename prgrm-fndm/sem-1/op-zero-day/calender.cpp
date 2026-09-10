#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    bool leap = (year % 400 == 0) ||
                (year % 4 == 0 && year % 100 != 0);

    int max_days;

    if (month < 1 || month > 12 || day < 1) {
        cout << "Invalid date";
        return 0;
    }

    if (month == 2)
        max_days = leap ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        max_days = 30;
    else
        max_days = 31;

    if (day > max_days)
        cout << "Invalid date";
    else
        cout << "Valid date";
}
