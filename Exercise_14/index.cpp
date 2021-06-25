#include <iostream>
#include "golf.h"

int main()
{
    using namespace std;

    golf golfers[3];

    int numCollected = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Golfer #" << i + 1 << endl;

        if (!setgolf(golfers[i]))
        {
            break;
        }

        numCollected++;
    }

    cout << "\n\n\n"
         << numCollected << " golfers were entered." << endl;

    for (int i = 0; i < numCollected; i++)
    {
        showgolf(golfers[i]);
    }

    cout << "\n\n\n";

    golf tiger;
    const char *name = "Tiger Woods";
    int hcap = 24;

    setgolf(tiger, name, hcap);

    showgolf(tiger);
    handicap(tiger, 25);
    showgolf(tiger);

    return 0;
}