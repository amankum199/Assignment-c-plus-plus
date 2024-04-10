/*Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables*/
#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    void setdata(int real, int img)
    {
        this->real=real;
        this->img=img;
    }
    friend ostream& operator<<(ostream &os, complex &c1)
    {
        os << "Real = " << c1.real << " Img = " << c1.img << endl;
    }
};
int main()
{
    complex c2;
    complex c1;
    c1.setdata(3,5);
    c2.setdata(5,9);
    cout<<c1<<c2<<endl;

}