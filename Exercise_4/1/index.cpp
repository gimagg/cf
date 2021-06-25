#include <iostream>

using namespace std;

struct CandyBar {
  string brand_name;
  double weight;
  int calories;
} snack;


int main()
{
    snack.brand_name = "Mocha-Munch";
    snack.weight = 2.3;
    snack.calories = 350;

    cout << "brand_name:" << snack.brand_name << endl;
    cout << "weight:" << snack.weight << endl;
    cout << "calories:" << snack.calories << endl;

    return 0;
}
