#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person()
    {
        lname = "";
        fname[0] = '\0';
    }
    Person(const std::string &ln, const char *fn = "Test");

    void Show() const;      
    void FormalShow() const; 
};

Person::Person(const std::string &ln, const char *fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const
{
    cout << this->fname << " " << this->lname << endl;
} 
void Person::FormalShow() const
{
    cout << this->lname << " " << this->fname << endl;
} 

int main()
{

    Person person_1;
    person_1.Show();
    person_1.FormalShow();

    string name = "Vlad";
    char *surname = (char *)"Vkus";

    Person person_2(name);
    person_2.Show();
    person_2.FormalShow();

    Person person_3(name, surname);
    person_3.Show();
    person_3.FormalShow();
}
