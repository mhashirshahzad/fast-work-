#include <iostream>
#include <unistd.h>

using namespace std;
int main()
{

  cout << "\n==================== Mission Nine ====================\n";

{
    int E, round, roundEven, roundOdd, largest, smallest;
    roundEven = 0;
    roundOdd = 0;
    round = 0;
    largest = 0;
    smallest = 0;

    cout << "Enter Energy: ";
    cin >> E;

    while (E > 0)
    {
        if (E % 2 == 0)
        {
            E = E / 2;
            roundEven++;
        }
        else
        {
            E = E + 7;
            roundOdd++;
        }

        if (E % 5 == 0)
            E = E - 3;

        if (E > largest)
            largest = E;

        if (E < largest)
            smallest = E;
        usleep(10000);
        cout << round ;
        round++;
    }

    cout << "Rounds: " << round << endl;
    cout << "Even Rounds: " << roundEven << endl
         << "Odd Rounds: " << roundOdd << endl
         << "Highest Energy: " << largest << endl
         << "Lowest Energy: " << smallest << endl;
}

  return 0;
}
