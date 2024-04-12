/*Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type*/
#include<iostream>
using namespace std;
class Integer
{
    private:
    int x;
    public:
    Integer()
    {

    }
    Integer(int n )
    {
        x=n;
    }
    operator int()
    {
        return x;
    }
    void display()
    {
        cout<<"Int is "<<x<<endl;
    }

};
int main()
{
    Integer r1(56);
    int y;
    y=r1;
    cout<<y;
    return 0;
}