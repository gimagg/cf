#include <iostream>

using namespace std;

int months[12];

int main()
{

    int lenghtArray = sizeof(months) / sizeof(*months);
    for (int i = 0; i < lenghtArray; i++)
    {
        int number_of_month = i + 1;
        cout << "Enter sold books for " << number_of_month << " month" << endl;
        cin >> months[i];
    }

    int sum = 0;
    for (int i = 0; i < lenghtArray; i++)
    {
        sum += months[i];
    }
    cout << "Sum is " << sum << endl;

    return 0;
}
