#include <iostream>

using namespace std;

int main()
{
    int lenght = 10;

    string dot = ".";
    string asterics = "*";

    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < lenght - i - 1; j++)
        {
            cout << dot;
        }
        for (int k = lenght; k < lenght + i; k++)
        {
            cout << asterics;
        }
        cout << "\n";
    }

    return 0;
}
