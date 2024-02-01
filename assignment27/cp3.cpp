/* Write a C++ program to add two complex numbers using operator overloaded by a
 friend function.*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    void accept()
    {
        cout << "Enter the number. " << endl;
        cin >> real >> img;
    }
    friend Complex operator+(Complex c1, Complex c2);
    void show()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
Complex operator+(Complex c1, Complex c2)
{
    Complex c;
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return (c);
}
int main()
{
    Complex c1, c2, sum;
    c1.accept();
    c2.accept();
    sum = c1 + c2;
    cout << "Entered values..." << endl;
    c1.show();
    c2.show();
    cout << "After addition..." << endl;
    sum.show();
    return 0;
}
