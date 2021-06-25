#include <iostream>

using namespace std;

void introductionMessage()
{
    cout << "Enter a latitude in degrees, minutes, and seconds\n";
}

int enterAndReturnDegrees()
{
    cout << "First, enter the degrees: ";
    int value;
    cin >> value;
    return value;
}
int enterAndReturnMinutes()
{
    cout << "Next, enter the minutes of arc: ";
    int value;
    cin >> value;
    return value;
}
int enterAndReturnSeconds()
{
    cout << "Finally, enter the seconds of arc: ";
    int value;
    cin >> value;
    return value;
}

double transferToDegrees(int degrees, int minutes, int seconds)
{
    return degrees + (minutes / 60) + (seconds / 3600);
}

void summarise(double sum_degrees, int degrees, int minutes, int seconds)
{
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << sum_degrees << " degrees\n";
}

int main()
{
    introductionMessage();
    int degrees = enterAndReturnDegrees();
    int minutes = enterAndReturnMinutes();
    int seconds = enterAndReturnSeconds();
    double sum_degrees = transferToDegrees(degrees, minutes, seconds);
    summarise(sum_degrees, degrees, minutes, seconds);
    return 0;
}
