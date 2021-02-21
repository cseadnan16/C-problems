#include<iostream>>
using namespace std;
class rectangle
{
    int height;
    int width;
public:

    void set(int x,int y);
    int area();
    rectangle();
    ~rectangle();
};

int rectangle::area()
{
    int result = height*width;
    return result;
}
rectangle::rectangle()
{
    height=0;
    width=0;
    cout << "Constructor" << endl;
}

rectangle::~rectangle()
{
    cout << "Destructor" << endl;
}
int main()
{
    rectangle obj;
    //obj.set(5,6);
    // obj.area();

    cout << "Area = " << obj.area() << endl;
    return 0;
}
