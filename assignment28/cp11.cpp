/*Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function*/
#include<iostream>
using namespace std;
class marks
{
    private:
    int mark;
    public:
    marks(){}
    marks(int x)
    {
        mark=x;
    }
    void display()
    {
        cout<<"Marks obtained = "<<mark<<endl;
    }
    marks *operator ->()
    {
        return this;
    }
};
int main()
{
    marks m1(50);
    m1.display();
    m1->display();

}