#include <iostream>

using namespace std;

int scores[10];
int avarage_score = 0;

void input_scores()
{
  cout << "Please enter 10 score:" << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << "Enter " << i << " element: ";
    cin >> scores[i];
    }
  cout << endl;
}

void output_scores()
{
  cout << "Outputing score data: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << scores[i] << " ";
  }
  cout << endl;
}

void output_avarage_score()
{
  int sum = 0;

  for (int i = 0; i < 10; i++)
  {
    sum += scores[i];
  }
  double average_score = sum / 10;
  cout << "Average score is " << average_score << endl;
}

int main()
{
  input_scores();
  output_scores();
  output_avarage_score();
  return 0;
}
