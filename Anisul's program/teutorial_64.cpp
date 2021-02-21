#include<iostream>
using namespace std;

int x=10;

void display()
{
    //int x;
    cout << "Y = " << :: x+2 << endl;
}

int main()
{
    //int x;
    cout << "X = " << x << endl;
    display();

    return 0;
}
