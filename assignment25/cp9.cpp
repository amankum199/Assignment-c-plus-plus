/* Define a class Circle and define an instance member function to find the area of the
 circle.*/
 #include <iostream>
using namespace std;
class Circle
{
private:
    int r;
    float ar;

public:
    void set(int a)
    {
        r=a;
    }
    float get()
    {
        return ar;
    }
    void area()
    {
        ar = 3.14*r*r;
    }
};
int main()
{
    Circle a1;
    int x;
    cout<<"Enter radius of circle"<<endl;
    cin>>x;
    a1.set(x);
    a1.area();
    cout<<"Area of circle is "<<a1.get()<<endl;
    return 0;
}