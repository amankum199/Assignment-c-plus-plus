/* Define a class Complex with appropriate instance variables and member functions.
 Define following operators in the class:
 a. +
 b. -
c. *
 d. ==*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    void accept()
    {
        cout << "Enter the number" << endl;
        cin >> real >> img;
    }
    friend Complex operator+(Complex c1, Complex c2);
    friend Complex operator-(Complex c1, Complex c2);
    friend Complex operator*(Complex c1, Complex c2);
    friend bool operator==(Complex c1, Complex c2);
    void Display()
    {
        cout << real << "+" << img << "i" << endl;
    }
};
Complex operator+(Complex c1, Complex c2)
{
    Complex c;
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return (c);
}
Complex operator-(Complex c1, Complex c2)
{
    Complex c;
    c.real = c1.real - c2.real;
    c.img = c1.img - c2.img;
    return (c);
}
Complex operator*(Complex c1, Complex c2)
{
    Complex c;
    c.real = c1.real * c2.real;
    c.img = c1.img * c2.img;
    return (c);
}
bool operator==(Complex c1, Complex c2)
{
    if ((c1.real == c2.real) && (c1.img == c2.img))
        return true;
    else
        return false;
}
int main()
{
    Complex c1, c2, sum, dif, mul;
    bool comp;
    c1.accept();
    c2.accept();
    sum = c1 + c2;
    dif = c1 - c2;
    mul = c1 * c2;
    comp = c1 == c2;
    cout << "Entered Values..." << endl;
    c1.Display();
    c2.Display();
    cout << endl;
    cout << " After adding..." << endl;
    sum.Display();
    cout << endl;
    cout << " After Subtracting..." << endl;
    dif.Display();
    cout << endl;
    cout << " After Multiplication..." << endl;
    mul.Display();
    cout << endl;
    cout << "After Comparision..    " << comp << endl;
    cout << endl;
    return 0;
}