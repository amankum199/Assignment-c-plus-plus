/*Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    complex()
    {}
    ~complex()
    {}
    friend  istream& operator>>(istream &in, complex &c2)
    {
        cout<<"Enter real and Imaginary value:"<<endl;
        in>>c2.real>>c2.img;
    }
    friend ostream& operator<<(ostream &os, complex &c1)
    {
        os << "Real = " << c1.real << " Img = " << c1.img << endl;
    }
};
int main()
{
    complex c3(3,5);
    complex c2(2,7);
    complex c1;
    cin>>c1;
    // cout<<c1;
    cout<<c1<<c2<<c3<<endl;

}