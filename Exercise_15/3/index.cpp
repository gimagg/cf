#include <iostream>
#include <string>

using namespace std;

class Move
{
private:
    double x;
    double y;

public:
    Move(double a = 0, double b = 0);
    void showmove() const;

    Move add(const Move &m) const;
    void reset(double a = 0, double b = 0);
};

Move::Move(double a, double b)
{
    this->x = a, this->y = b;
}

void Move::showmove() const
{
    using std::cout;
    using std::endl;

    cout << "x: " << this->x << " y: " << this->y << endl;
}

Move Move::add(const Move &m) const
{
    double newX = this->x + m.x;
    double newY = this->y + m.y;

    return Move(newX, newY);
}

void Move::reset(double a, double b)
{
    this->x = a;
    this->y = b;
}

void showmove(std::string, Move);

int main()
{

    Move move1;
    Move move2(3, 6);
    Move move3(12);

    showmove("move1 +++ ", move1);
    showmove("move2 +++ ", move2);
    showmove("move3 +++ ", move3);

    Move move4 = move2.add(move3);

    showmove("move4 +++ ", move4);

    move4.reset();

    showmove("move4 +++ ", move4);

    move4.reset(-1);

    showmove("move4 +++ ", move4);

    move4.reset(-1, 2);

    showmove("move4 +++ ", move4);

    return 0;
}

void showmove(string aString, Move move)
{
    cout << aString;
    move.showmove();
}
