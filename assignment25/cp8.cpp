/*Define a class Rectangle and define an instance member function to find the area of
 the rectangle.*/
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int l, b, ar;

public:
    void set(int j, int k)
    {
        l = j;
        b = k;
    }
    int get()
    {
        return ar;
    }
    void area()
    {
        ar = l * b;
    }
};
int main()
{
    Rectangle a1;
    int x,y;
    cout<<"Enter length and breadth of rectangle"<<endl;
    cin>>x>>y;
    a1.set(x,y);
    a1.area();
    cout<<"Area of rectangle is "<<a1.get()<<endl;
    return 0;
}