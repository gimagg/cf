#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int number;
    while (number != 0)
    {
        cout << "Enter number" << endl;
        cin >> number;
        sum += number;
        cout << "Sum is " << sum << endl;
    }
    return 0;
}
