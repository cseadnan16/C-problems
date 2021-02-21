#include<iostream>

using namespace std;

class A
{
    //int a;
public:
    A()
    {
        cout << "Constructor.\n";
    }

    ~A()
    {
        cout << "Destructor.\n";
    }
};

int main()
{
    A x,y;

    {
        A z;
        cout << "Local variable\n";
    }

    cout << "---------\n";
    return 0;
}
