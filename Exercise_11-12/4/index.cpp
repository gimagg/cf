#include <iostream>
using namespace std;

double *array1;

void Fill_array(int size)
{
    cout << "=== Please enter elements of array ( type double ) ===" << endl;
    array1 = new double[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << " element" << endl;
        cin >> array1[i];
    }
}

void Show_array(int size)
{
    cout << "=== outputting array ===" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "element " << i << " : " << array1[i] << endl;
    }
}

void Reverse_array(int size)
{
    cout << "=== reversing array... ===" << endl;
    reverse(array1, array1 + size);
    cout << "=== array reversed... ===" << endl;
}

int main()
{
    Fill_array(5);
    Show_array(5);
    Reverse_array(5);
    Show_array(5);
    return 0;
}
