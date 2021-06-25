#include <iostream>

using namespace std;

struct Cars
{
        int year;
        string company;
};

int quantity_car;

int main()
{

        cout << "How much car u want to buy?" << endl;
        cin >> quantity_car;
        Cars *cars = new Cars[quantity_car];
        for (int i = 0; i < quantity_car; i++)
        {
                int number_car = i + 1;
                cout << "=== Car # " << number_car << " ===" << endl;
                cout << "Enter year:" << endl;
                cin >> cars[i].year;
                cout << "Enter company:" << endl;
                cin >> cars[i].company;
        }

        cout << "=== Cars data ===" << endl;
        for (int i = 0; i < quantity_car; i++)
        {
                int number_car = i + 1;
                cout << "=== Car # " << number_car << " ===" << endl;
                cout << "Year:" << endl;
                cout << cars[i].year << endl;
                cout << "Enter company:" << endl;
                cout << cars[i].company << endl;
        }

        return 0;
}
