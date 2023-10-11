/*Define a class to represent a complex number. stote real and imaginary part.
also define methods to set values real and imaginary part of a ccomplex number.
define one more method to display a complex number */
#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    void set(int r, int i)
    {
        real = r;
        img = i;
    }
    void print(Complex c)
    {
        cout << real << " + " << img << "i" << endl;
        cout << c.real << " + " << c.img << "i" << endl;
    }
    void add(Complex c)
    {
        cout << real + c.real << " + " << img + c.img << "i";
    }
};
int main()
{
    Complex c1, c2;
    int x, y;
    cout << "enter the number for 1st complex number" << endl;
    cin >> x >> y;
    c1.set(x, y);
    cout << "enter the number for 2nd complex number" << endl;
    cin >> x >> y;
    c2.set(x, y);
    c1.print(c2);
    cout << "Sum of given complex number is" << endl;
    c1.add(c2);
    return 0;
}