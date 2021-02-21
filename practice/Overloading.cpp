#include<iostream>
using namespace std;


void test(int x, int y)
{
    cout << "The sum of " << x << " and " << y << " is: " << x+y << endl;
}

void test(char z)
{
    for(int i = 1;i<=20;i++)
    {
        cout << z;
    }
}


int main()
{
    int a = 10, b = 20;
    char ch = '*' ;

    test(a,b);
    test(ch);
    return 0;
}
