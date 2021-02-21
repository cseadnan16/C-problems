#include<iostream>
using namespace std;


class B;
class A
{
private:
    int id = 101;
    string name = "Adnan";

public:
    friend B;
};

class B
{
public:
    void display(A identity)
    {
        cout << "ID: " << identity.id<< endl;
        cout << "Name: " << identity.name << endl;
    }
};

int main()
{
    A x;
    B y;

    y.display(x);

    return 0;
}
