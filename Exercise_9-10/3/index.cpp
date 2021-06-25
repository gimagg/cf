#include <iostream>
#include <list>

using namespace std;

struct bop
{
    string fullname;
    string title;
    string bopname;
    int preference;
};

bop bops[5] = {
    {"Riley Strickland", "Hihihi, how are you", "realy", 0},
    {"Donavan Gray", "what are you doing? ", "donaldtrump", 2},
    {"Kane King", "I'm king!!!", "mirinda", 1},
    {"Brielle Owen", "loool, what's up dude", "own", 0},
    {"Riley Hampton", "I'm relay, hahah", "relay", 2},
};

int current_choose;

void output_variant_for_display()
{
    cout << "0. display by name" << endl;
    cout << "1. display by title" << endl;
    cout << "2. display by bopname" << endl;
    cout << "3. display by preference" << endl;
    cout << "5. quit" << endl;
}

void output_value(int index, int preference)
{

    if (preference == 0)
    {
        cout << bops[index].bopname;
    }
    else if (preference == 1)
    {
        cout << bops[index].title;
    }
    else if (preference == 2)
    {
        cout << bops[index].bopname;
    }
    else if (preference == 3)
    {
        cout << bops[index].bopname;
    }
    cout << endl;
}

void output_values(int preference)
{
    cout << "========" << endl;
    for (int i = 0; i < sizeof(bops) / sizeof(bops[0]); i++)
    {
        output_value(i, preference);
    }
    cout << "========" << endl;
}

bool input_variant()
{
    cout << "Enter your choice: " << endl;
    cin >> current_choose;
    if (current_choose == 5)
    {
        return true;
    }
    output_values(current_choose);
    return false;
}

int main()
{

    while (true)
    {
        output_variant_for_display();
        bool result = input_variant() ? false : true;
        if (result)
            break;
    }
}
