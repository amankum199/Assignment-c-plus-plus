/* Define a class Complex to represent a complex number with instance variables a and
 b to store real and imaginary parts. Also define following member functions
 a. void setData(int,int)
 b. void showData()
 c. Complex add(Complex)*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "Real = " << a << "  Imaginary = " << b << endl;
    }
    Complex add(Complex C)
    {
        Complex temp;
        temp.a = a + C.a;
        temp.b = b + C.b;

        return temp;
    }
};
int main()
{
    Complex a1, a2, a3;
    a1.setData(2, 5);
    a2.setData(3, 4);
    a1.showData();
    a2.showData();
    a3 = a1.add(a2);
    cout<<"After Adding"<<endl;
    a3.showData();
    return 0;
}