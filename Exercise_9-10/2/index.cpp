#include <iostream>
#include <list>

using namespace std;

struct option
{
    string option;
    string label;
    string output;
} option1, option2, option3, option4;

void display_option(string option, string label)
{
    cout << option << ") " << label << endl;
}

void display_options()
{
    display_option(option1.option, option1.label);
    display_option(option2.option, option2.label);
    display_option(option3.option, option3.label);
    cout << endl;
}

void choose_options()
{
    string choosen_option;
    while (true)
    {
        cout << "Please, choose a color from menu below:" << endl;
        display_options();
        cin >> choosen_option;
        if (choosen_option == option1.option)
        {
            cout << option1.output << endl;
            return;
        }
        else if (choosen_option == option2.option)
        {
            cout << option2.output << endl;
            return;
        }
        else if (choosen_option == option3.option)
        {
            cout << option3.output << endl;
            return;
        }
        else
        {
            cout << "no, please, enter valid variant " << endl;
        }
    }
}

int main()
{
    option1.option = "a";
    option1.label = "red";
    option1.output = "wooow, you choose red color";
    option2.option = "b";
    option2.label = "green";
    option2.output = "hm, green is good color";
    option3.option = "c";
    option3.label = "blue";
    option3.output = "yep, you choose a blue color, nice";

    choose_options();

    return 0;
}
