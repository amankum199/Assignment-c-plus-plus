/* Define a class Box and write a program to enter length, breadth and height and
 initialise objects using constructor also define member functions to calculate volume
 of the box*/
#include <iostream>
using namespace std;
class Box
{
private:
    int l, b, h;

public:
    Box()
    {
    }
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    int vol()
    {
        int volume;
        volume = l * b * h;
        return volume;
    }
    ~Box()
    {
    }
};
int main()
{
    int a, b, c;
    cout << "Enter the Length breadth and volume" << endl;
    cin >> a >> b >> c;
    Box b1(a, b, c);
    cout << "Volume is " << b1.vol() << endl;
    return 0;
}
