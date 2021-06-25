#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
} box1;

void fillAndOutputBoxData()
{
    cout << "=== please fill box data ===" << endl;
    cout << "Enter maker: ";
    cin >> box1.maker;
    cout << "Enter width: ";
    cin >> box1.width;
    cout << "Enter height: ";
    cin >> box1.height;
    cout << "Enter length: ";
    cin >> box1.length;

    cout << "maker: " << box1.maker << endl;
    cout << "width: " << box1.width << endl;
    cout << "height: " << box1.height << endl;
    cout << "length: " << box1.length << endl;
    cout << "volume: " << box1.volume << endl;
}

void outputVolume()
{
    cout << "=== outputting volume ===" << endl;
    int volume = box1.width * box1.height * box1.length;
    cout << volume << endl;
}

int main()
{
    fillAndOutputBoxData();
    outputVolume();
    return 0;
}
