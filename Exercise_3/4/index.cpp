#include <iostream>

using namespace std;

string firstName;
string lastName;
string outputData;

void enterFirstName()
{
    cout << "Enter your first name: ";
    cin >> firstName;
}

void enterSecondName()
{
    cout << "Enter your last name: ";
    cin >> lastName;
}

void output()
{
    string sum_result(lastName + ", " + firstName);
    cout << "Here's the information in a single string: " << sum_result << endl;
}

int main()
{
    enterFirstName();
    enterSecondName();
    output();

    return 0;
}
