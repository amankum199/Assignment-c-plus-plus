/* Define a class Box and write a program to enter length, breadth and height and
 initialise objects using constructor also define member functions to calculate volume
 of the box*/
#include <iostream>
using namespace std;
class Box
{
private:
    int length, breadth, height;
    int vol;

public:
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    int volume()
    {
        vol = length * breadth * height;
        return vol;
    }
    ~Box()
    {
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter the length breadth and height of the box."<<endl;
    cin>>a>>b>>c;
    Box b1(a,b,c);
    cout<<"The volume of the box is "<<b1.volume()<<endl;
    return 0;
}
