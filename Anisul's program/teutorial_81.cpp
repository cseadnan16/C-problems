#include<iostream>

using namespace std;

class student
{
public :
    string name;

    student(string name)
    {
      this ->  name = name;   // using "this" keyword and "selection(->)" operator.
    }

    void display()
    {
        cout << name << endl;
    }
};

int main()
{
    student s1("Adnan");
    s1.display();

    return 0;
}
