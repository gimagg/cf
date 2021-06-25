#include <iostream>
#include <list>

using namespace std;

list<double> list_of_numbers;
double average_value = 0;

void logValue (double value) {
    cout << "================================" << endl;
    cout << "Average value is " << average_value << endl;
    int quantity_greater_avr_value = 0;
    for(double x : list_of_numbers) {
        if (x > average_value) quantity_greater_avr_value++;
    }
    cout << quantity_greater_avr_value << " value greater then average_value" << endl;
    cout << "================================" << endl;
    cout << endl;
}

double calculate_average_value () {
    double avr_val = 0;
    int i = 0;
    for (double x : list_of_numbers) {
        i++;
        avr_val += x;
    }
    average_value = avr_val / i;
}

void enterValuesInToArray() {
    for(int i=0; i <= 10; i++) {
        cout << "Enter number with " << i << " index:" << endl;
        double value_to_push;
        cin >> value_to_push;
        list_of_numbers.push_back(value_to_push);
        calculate_average_value();
        logValue(value_to_push);
    }
}   


int main()
{
  enterValuesInToArray();
  cout << average_value << endl;
  return 0;
}
