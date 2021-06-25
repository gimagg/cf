#include <iostream>

using namespace std;

int scores[10];
int avarage_score = 0;

void print(string string, int quantity = 1)
{
    {
        for (int i = 0; i < quantity; i++)
        {
            cout << string << endl;
        }
    }
}

int main()
{
    print("HELLO", 1);
    print("HELLO", 3);
    print("HELLO", 6);

    return 0;
}
