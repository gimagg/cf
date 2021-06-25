#include <iostream>

using namespace std;

int translateValue(int val)
{
    return val * 1.8 + 32;
}

int main()
{
    cout << "val: " << translateValue(20) << endl;
    return 0;
}