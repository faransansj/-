#include <iostream>
using namespace std;

class Parent1
{
public:
    void show()
    {
        cout << "Parent1" << endl;
    }
};

class Parent2
{
public:
    void show()
    {
        cout << "Parent2" << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    void show()
    {
        // Parent1 show() ȣ��
        Parent1::show();

        // Parent2 show() ȣ��
        Parent2::show();
    }
};

int main()
{
    Child child;
    child.show();

    return 0;
}
