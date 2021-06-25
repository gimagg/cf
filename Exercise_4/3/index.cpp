#include <iostream>

using namespace std;

struct Pizza
{
    string company_name;
    int diameter;
    double weight;
} pizza;

int main()
{
    cout << "Какой компании вы хотите пиццу?" << endl;
    cin >> pizza.company_name;
    cout << "Какой диаметр пиццы?" << endl;
    cin >> pizza.diameter;
    cout << "Какого веса?" << endl;
    cin >> pizza.weight;

    cout << "=== Данные: ===" << endl;
    cout << "Компания:" << endl;
    cout << pizza.company_name << endl;
    cout << "Диаметр:" << endl;
    cout << pizza.diameter << endl;
    cout << "Вес:" << endl;
    cout << pizza.weight << endl;

    return 0;
}
