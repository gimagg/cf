#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

char firstName[100];
char lastName[100];
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
    char sum_result[100] = "";
    strcat(sum_result, firstName);
    strcat(sum_result, ", ");
    strcat(sum_result, lastName);

    cout << "Here's the information in a single string: " << sum_result << endl;
}

int main()
{
    enterFirstName();
    enterSecondName();
    output();

    return 0;
}
