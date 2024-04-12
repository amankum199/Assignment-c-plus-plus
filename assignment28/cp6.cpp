/*Create a complex class and overload assignment operator for that class.*/
#include <iostream>
using namespace std;
class Complex
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
    void display()
    {
        cout<<"real = "<<real<<" img = "<<img<<endl;
    }
    Complex & operator=(Complex c1)
    {
        this->real=c1.real;
        this->img=c1.img;
        return *this;
    }
};
int main()
{
    Complex c2;
    c2.setdata(4,6);
    Complex c3,c4;
    c4=c3=c2;
    c2.display();
    c3.display();
    c4.display();
    return 0;
}