#include "golf.h"
#include <cstring>
#include <iostream>

using namespace std;

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    cout << "Enter name: ";
    cin.getline(g.fullname, Len);

    cout << "Enter handicap: ";
    (cin >> g.handicap).get();

    return strlen(g.fullname) == 0 ? 0 : 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    cout << "Name: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}