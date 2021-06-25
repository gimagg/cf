#include <iostream>

using namespace std;

string name;
string dessert;

void enterName()
{
    cout << "Enter your name: " << endl;
    cin >> name;
}

void enterFavoriteDessert()
{
    cout << "Enter your favorite dessert: " << endl;
    cin >> dessert;
}

void outputPersonalData()
{
    cout << "I have some delicious " << dessert << " for you, " << name << endl;
}

int main()
{
    enterName();
    enterFavoriteDessert();
    outputPersonalData();

    return 0;
}
