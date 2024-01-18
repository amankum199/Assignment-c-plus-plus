/* Define a class Cube and calculate Volume of Cube and initialise it using constructor*/
#include<iostream>
using namespace std;
class Cube
{
    private:
    double side;

    public:
    void set(double si)
    {
        side=si;
    }
    double volume()
    {
        return side*side*side;
    }
    Cube(double side1)
    {
        cout<<"Constructor is called" <<endl;
        side=side1; 
    }
    Cube()
    {
        cout<<"Default constructor is called"<<endl;
    }
    ~Cube()
    {
        cout<<"Destructing  "<<side<<endl;
    }
};
int main()
{
    double a1;
    Cube c1(2.34),c2;
    cout<<"Volume of first cube is "<<c1.volume()<<endl;
    cout<<"Enter the side of second cube"<<endl;
    cin>>a1;
    c2.set(a1);
    cout<<"Volume of second cube is "<<c2.volume()<<endl;
    return 0;
}
