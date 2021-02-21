#include<iostream>
using namespace std;

class Student{
public:
    int id;
    double gpa;
    void display(){
        cout << "Roll: " << id << " " <<"GPA: " << gpa << endl;
    }
};

int main()
{
    Student Adnan, Susmita;

    Adnan.id = 101;
    Adnan.gpa = 5.00;
    Adnan.display();

    Susmita.id = 102;
    Susmita.gpa = 5.00;
    Susmita.display();

    return 0;
}
