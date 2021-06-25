#include <iostream>

using namespace std;

int first_integer;
int second_integer;
int sum;

void input()
{
  cout << "Enter first integer: " << endl;
  cin >> first_integer;
  cout << "Enter second_integer:" << endl;
  cin >> second_integer;
}

void calculateSumNumberBetween()
{
  for (int i = first_integer + 1; i <= second_integer - 1; i++)
  {
    sum += first_integer + i;
  }
}

void output_result()
{
  cout << "Sum: " << sum << endl;
}

int main()
{
  input();
  calculateSumNumberBetween();
  output_result();
  return 0;
}
