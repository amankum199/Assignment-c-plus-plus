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
    void print()
    {
        cout << real << " + " << img << "i"<<endl;
    }
};
int main()
{
    Complex c1, c2;
    c1.set(3,2);
    c2.set(5,3);
    c1.print();
    c2.print();
    return 0;
}