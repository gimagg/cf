#include <iostream>
#include <string>
#include <cstring>

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    enum
    {
        MAX = 10
    };

    Item items[MAX];
    int top;

public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);
};

Stack::Stack()
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item &item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;

    Stack myStack;

    int selection = 0;
    double total = 0;

    cout << "Enter your selection" << endl;
    cout << "1 - Add customer" << endl;
    cout << "2 - Remove customer" << endl;
    cout << "Any other character - quit" << endl;

    while (cin >> selection && (selection == 1 || selection == 2))
    {
        cin.get();

        if (selection == 1)
        {
            if (myStack.isfull())
            {
                cout << "Cannot add customer. Stack is full." << endl;
            }
            else
            {
                customer newCustomer;
                cout << "Enter customer name: ";
                cin.getline(newCustomer.fullname, 35);

                cout << "Enter payment: ";
                (cin >> newCustomer.payment).get();

                myStack.push(newCustomer);

                cout << "Customer " << newCustomer.fullname << " added with a payment of " << newCustomer.payment << endl;
            }
        }
        else
        {
            if (myStack.isempty())
            {
                cout << "Cannot remove customer. Stack is empty." << endl;
            }
            else
            {
                customer aCustomer;

                myStack.pop(aCustomer);

                cout << "Customer " << aCustomer.fullname << " removed." << endl;

                total += aCustomer.payment;

                cout << "Running Total: " << total << endl;
            }
        }

        cout << "Make another selection: ";
    }

    cout << "Done." << endl;

    return 0;
}
