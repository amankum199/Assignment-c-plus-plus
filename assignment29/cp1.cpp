/*Write a C++ program to convert Primitive type to Complex type.
 Example -
 int main()
{
 Complex c1;
 Int x=5;
 c1=x;
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
    Complex()
    {
    }
    Complex(int x)
    {
        real = x;
        img = x;
    }
    void show()
    {
       cout<<"Real = "<<real<<"Img = "<<img<<endl;
    }
};
int main()
{
    Complex c1 = 5;
    c1.show();

    return 0;
}
