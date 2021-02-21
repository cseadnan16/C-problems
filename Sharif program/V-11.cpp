 #include<iostream>>
using namespace std;
class rectangle
{
    int height;
    int width;
public:
    void data();
    //void set();
    int area();
};

int rectangle::area()
{
    int result = height*width;
    cout << "Area = " << result << endl;

    return result;
}

/*void rectangle::set()
{
    int x,y;
    x=height=5;
    y=width=6;

}*/
void rectangle::data()
{
    cout << "Please enter the value of Height:";
    cin >> height;
    //cout << endl;
    cout << "please enter the value of Width:";
    cin >> width ;
    cout << endl;
}
int main()
{
    rectangle obj;
    obj.data();
    obj.area();

    //cout << "Area = " << obj.area() << endl;
    return 0;
}
