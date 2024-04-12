/*Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.
*/
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;

public:
    Distance() {}
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    Distance operator()(int a, int b, int c)
    {
        Distance d1;
        d1.feet = a + c + 5;
        d1.inches = a + b + 15;
        return d1;
    }
    void display()
    {
        cout << feet << " Feet " << inches << " Inches " << endl;
    }
};

int main()
{

    Distance d1(5, 10);
    Distance d2;

    d1.display();
    d2 = d1(10, 20, 3);

    d1.display();
    d2.display();

    return 0;
}
