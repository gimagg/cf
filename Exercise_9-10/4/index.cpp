#include <iostream>
#include <list>

using namespace std;

double value_to_calculate;

struct taxes
{
    double first;
    double next1;
    double next2;
    double last;
};
taxes values_of_taxes;

void input_value()
{
    cout << "Please input value to see calculation results" << endl;
    cin >> value_to_calculate;
}

void sort_by_steps()
{
    value_to_calculate = value_to_calculate - 5000;
    values_of_taxes.first = value_to_calculate;

    value_to_calculate = value_to_calculate - (10000 - 5000);
    values_of_taxes.next1 = value_to_calculate;

    value_to_calculate = value_to_calculate - (20000 - 10000);
    values_of_taxes.next2 = value_to_calculate;

    value_to_calculate = value_to_calculate - (35000 - 2000);
    values_of_taxes.last = value_to_calculate;
}

void calculate_and_output_relust()
{
    double calculated_value = 0;
    sort_by_steps();
    if (values_of_taxes.first > 0)
    {
        calculated_value += values_of_taxes.first;
    }
    if (values_of_taxes.next1 > 0)
    {
        calculated_value += values_of_taxes.next1;
    }
    if (values_of_taxes.next2 > 0)
    {
        calculated_value += values_of_taxes.next2;
    }
    if (values_of_taxes.last > 0)
    {
        calculated_value += values_of_taxes.last;
    }
    cout << "After taxes clear value is " << calculated_value << endl;
}

int main()
{
    input_value();
    calculate_and_output_relust();
    return 0;
}
