#include <iostream>

using namespace std;

struct CandyBar
{
    string brand_name;
    double weight;
    int calories;
} snack[3];

int main()
{
    snack[0].brand_name = "Mocha-Munch";
    snack[0].weight = 2.3;
    snack[0].calories = 350;
    snack[1].brand_name = "Mocha-Munch";
    snack[1].weight = 2.3;
    snack[1].calories = 350;
    snack[2].brand_name = "Mocha-Munch";
    snack[2].weight = 2.3;
    snack[2].calories = 350;
    cout << "brand_name:" << snack[0].brand_name << endl;
    cout << "weight:" << snack[0].weight << endl;
    cout << "calories:" << snack[0].calories << endl;
    cout << "brand_name:" << snack[1].brand_name << endl;
    cout << "weight:" << snack[1].weight << endl;
    cout << "calories:" << snack[1].calories << endl;
    cout << "brand_name:" << snack[2].brand_name << endl;
    cout << "weight:" << snack[2].weight << endl;
    cout << "calories:" << snack[2].calories << endl;

    return 0;
}
