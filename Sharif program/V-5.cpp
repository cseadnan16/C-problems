#include<iostream>
using namespace std;

int main()
{
    int i(0); // int i = 0;
    cout<< "Value of i: " << endl << i << endl;

    for(int i=1;i<=20;i++)
    {
        //int b=0;
        int b = i;
        cout<< b << endl;
    }

    bool x;
    x=true; //true = 1 and false = 0
    cout<< endl << "Value of x: " << x << endl;

    return 0;
}
