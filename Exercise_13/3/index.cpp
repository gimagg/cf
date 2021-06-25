#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void toUppercase(string &string1)
{
    for (unsigned i = 0; i < string1.size(); i++)
    {
        string1[i] = toupper(string1[i]);
    }
}

int main()
{
    string string1;

    cout << "Enter a string (q to quit): ";

    while (true)
    {
        cin >> string1;

        if (string1 == "q")
        {
            break;
        }

        toUppercase(string1);

        cout << string1 << endl;
        cout << "Next string (q to quit): ";
    }

    return 0;
}
