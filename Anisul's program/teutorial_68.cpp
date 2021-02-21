#include<iostream>

using namespace std;

class Student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout << "Roll: " << id << " " << "Result: " <<  gpa << endl;
    }

    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    Student Adnan, Susmita;

    Adnan.setValue(001,4.70);
    Adnan.display();

    Susmita.setValue(002,5.00);
    Susmita.display();

    return 0;
}
