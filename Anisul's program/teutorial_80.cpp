#include<iostream>

using namespace std;

class student
{
private:
    string name;

public:
    void setName(string x)
    {
        name = x;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    student s1;
    s1.setName("Adnan al nowshad");
    cout << "Name: " << s1.getName() << endl;

    return 0;
}
