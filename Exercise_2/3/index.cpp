#include <iostream>

using namespace std;

int enterAndReturn()
{
    cout << "Enter the value: ";
    int value;
    cin >> value;
    return value;
}

// 235.215/(1 L/100km) = 235.215 US mpg
int convert(int val)
{
    return val * 235.215;
}

int main()
{
    int val = enterAndReturn();
    cout << convert(val) << endl;
    return 0;
}
