/*Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class*/
#include <iostream>
using namespace std;
class coordinate
{
private:
    double x, y, z;

public:
    coordinate()
    {
        x=y=z=0;
    }
    coordinate(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    coordinate operator,(coordinate c1)
    {
        coordinate tmp;
        tmp.x=c1.z;
        tmp.y=c1.y;
        tmp.z=c1.x;
        return tmp;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z <<endl;
    }
};
int main()
{
    coordinate c4,c5;
    coordinate c1(3,4,5), c2(1,2,3),c3(6,7,8);
    c1.display();
    c2.display();
    c3.display();
    c4=(c1,c3);
    c4.display();
    c5=(c3,c2);
    c5.display();
}