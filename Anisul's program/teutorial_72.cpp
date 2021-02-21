#include <iostream>
//#include "firstclass.h"
using namespace std;



class FirstClass
{
    public:

        FirstClass()
        {
            cout << "Constructor is called" << endl;
        }

        ~FirstClass()
        {
            cout << "Destructor is called" << endl;
        }

        void display()
        {
            cout << "Display is called" << endl;
        }
};

int main()
{
    FirstClass obj;
    obj.display();

    return 0;
}

