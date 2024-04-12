/*Write a C++ program to convert Complex type to Primitive type.
 Example -
 int main()
{
 Complex c1;
 c1.setData(3,4);
 int x;
 x=c1;
 return 0;
}*/
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    int setdata(int r,int i)
    {
        real = r;
        img = i;
    }
    void show()
    {
       cout<<"Real = "<<real<<"Img = "<<img<<endl;
    }
    operator int()
    {
        cout<<"Int called"<<endl;
        return (real+img);
    }
    explicit operator long()
    {
        cout<<"Long called"<<endl;
        return (real+img);
    }
};
int main()
{
    Complex c;
    c.setdata(7,6);
    int x;
    x=c;
    cout<<x<<endl;

    return 0;
}
