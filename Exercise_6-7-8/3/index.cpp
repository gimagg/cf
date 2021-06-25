#include <iostream>

using namespace std;

int started_value = 100;
int years = 0;

struct Interest
{
    double interest_10 = 0.1;
    double interest_5 = 0.05;
} interest;

struct Investment
{
    double Daphens = started_value;
    double Cleos = started_value;
} investment;

void output_investment()
{
    cout << "Years:" << endl;
    cout << years << endl;
    cout << "Daphnes investment: " << endl;
    cout << investment.Daphens << endl;
    cout << "Cleos investment: " << endl;
    cout << investment.Cleos << endl;
}

int main()
{

    double interest10 = 0.1;
    double interest5 = 0.05;

    for (int years = 0; investment.Daphens <= investment.Cleos; years++)
    {
        investment.Daphens += interest.interest_10 * investment.Daphens;
        cout << investment.Daphens << endl;
        investment.Cleos += interest.interest_5 * investment.Cleos;
        cout << investment.Cleos << endl;
    }

    output_investment();
    return 0;
}
