#include <iostream>
//#include "firstclass.h"
using namespace std;



class FirstClass
{
    public:

        void display()
        {
            cout << "I am Adnan" << endl;
        }
};

int main()
{
    FirstClass obj;
    FirstClass *p = &obj;

    p -> display();

    return 0;
}


