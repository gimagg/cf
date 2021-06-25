#include <iostream>

using namespace std;

long long enterAndReturnSeconds()
{
    cout << "Enter the number of seconds: ";
    int value;
    cin >> value;
    return value;
}

void transferAndOutputSecondsToAnotherDimenstions(long long seconds)
{
    long long initialSeconds = seconds;
    long long day = seconds / (24 * 3600);

    seconds = seconds % (24 * 3600);
    long long hour = seconds / 3600;

    seconds %= 3600;
    long long minutes = seconds / 60;

    seconds %= 60;
    long long _seconds = seconds;

    cout << initialSeconds << " seconds = " << day << " "
         << "days, " << hour
         << " hours, " << minutes << " minutes, " << _seconds << " seconds " << endl;
}

int main()
{
    long long seconds = enterAndReturnSeconds();
    transferAndOutputSecondsToAnotherDimenstions(seconds);
    return 0;
}
