 #include<iostream>
using namespace std;
int global_variable;

int add(int x,int y)
{
    int sum=x+y;
        cout << "The sum value is: " << sum << endl;
        cout << endl;
        return sum ;
}
int main()
{
    int a,b;
    cout << global_variable << endl;
    cout << "Please enter the value of a:";
    cin >> a;
    cout << "Please enter the value of b:";
    cin >> b;
    cout << endl;
    cout << add(a,b) << endl << endl;

    {
        int k = 5;
        cout << k << endl;
    }
    float k=5.5;
    cout << k << endl;

    for(int i=1;i<=5;i++)
    {
        cout << i << " " ;
    }

    return 0;
}
