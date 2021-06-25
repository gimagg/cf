#include <iostream>

using namespace std;

string firstName;
string lastName;
string grade;
int age;

void enterFirstName()
{
    cout << "What is your first name? ";
    cin >> firstName;
}

void enterLastName()
{
    cout << "What is your last name? ";
    cin >> lastName;
}

void enterGrade()
{
    cout << "What letter grade do you deserve? ";
    cin >> grade;
}

void enterAge()
{
    cout << "What is your age? ";
    cin >> age;
}

void outputPersonalData()
{
    cout << "Name: " << firstName << ", " << lastName << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    enterFirstName();
    enterLastName();
    enterGrade();
    enterAge();
    outputPersonalData();
    return 0;
}
