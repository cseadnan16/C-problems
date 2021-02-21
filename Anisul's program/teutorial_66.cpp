#include<iostream>
using namespace std;

class Student_identity{
public:
    int id;
    double gpa;
};

int main()
{
    Student_identity Adnan;


    Adnan.id = 101;
    Adnan.gpa = 4.70;

    cout << "Roll No: " << Adnan.id << endl;
    cout << "GPA: " << Adnan.gpa << endl;

    return 0;
}
