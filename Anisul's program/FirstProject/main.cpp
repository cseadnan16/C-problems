#include <iostream>
#include "firstclass.h"

using namespace std;

int main()
{
    FirstClass obj;
    FirstClass *p = &obj;

    p -> display();

    return 0;
}
