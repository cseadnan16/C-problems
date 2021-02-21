
#include<iostream>

using namespace std;

class person
{
public:
    string name;
    int age;

    void display1()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public person
{
public:
    int id;
    void display2()
    {
        cout << "ID: " << id << endl;
        display1();
    }
};

int main()
{
    student obj;
    obj.id = 001;
    obj.name = "Adnan";
    obj.age = 27;

    obj.display2();

}
