/*Define a class Area and define instance member functions to find the area of the
 different shapes like square, rectangle , circle etc*/
#include <iostream>
using namespace std;
class Area
{
private:
    float side, length, breadth, radius;

public:
    void setSide(float s)
    {
        side = s;
    }
    void setLengthBreadth(float l, float b)
    {
        length = l;
        breadth = b;
    }
    void setRadius(float r)
    {
        radius = r;
    }
    float AreaofSquare()
    {
        return side * side;
    }
    float AreaofRectangle()
    {
        return length * breadth;
    }
    float AreaofCircle()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    Area shape;
    shape.setSide(3);
    shape.setLengthBreadth(3, 4);
    shape.setRadius(2);
    cout << "Area of Square is " << shape.AreaofSquare() << endl;
    cout << "Area of Rectangle is " << shape.AreaofRectangle() << endl;
    cout << "Area of Circle is " << shape.AreaofCircle() << endl;
    return 0;
}