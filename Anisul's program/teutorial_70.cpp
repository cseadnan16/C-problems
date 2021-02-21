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

    Student(int x, double y)   //Constructor is a special type of function
                               //       ক্লাসের  নাম দিয়েই Constructor ডিক্লেয়ার করতে হয়
    {
        id = x;
        gpa = y;
    }

    Student()   // default constructor
    {
        cout << "This is a default constructor." << endl;
    }

};

int main()
{
    Student ob; // default constructor


    Student Adnan(001,4.70);   // it is parameterized constructor
    Adnan.display();

    Student Susmita(002,5.00);
    Susmita.display();

    return 0;
}

