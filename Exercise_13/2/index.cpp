#include <iostream>

using namespace std;

struct CandyBar
{
    char *brand;
    double weight;
    int calories;
};

void setValues(CandyBar &candyBar, char *brand = "Apple", double weight = 222, int calories = 13)
{
    candyBar.brand = brand;
    candyBar.weight = weight;
    candyBar.calories = calories;
}

void printCandyBar(const CandyBar &candyBar)
{
    cout << "Brand: " << candyBar.brand << endl;
    cout << "Weight: " << candyBar.weight << endl;
    cout << "Calories: " << candyBar.calories << endl;
}

int main()
{
    CandyBar candyBar;

    cout << "=== Set and show default values ===" << endl;
    setValues(candyBar);
    printCandyBar(candyBar);

    cout << "=== Set and show non-default values ===" << endl;
    setValues(candyBar, "samsung", 777, 223);
    printCandyBar(candyBar);

    return 0;
}
