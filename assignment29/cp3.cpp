/*Create a Product class and convert Product type to Item type using constructor
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
}*/
#include <iostream>
using namespace std;
class product
{
private:
    int x, y;

public:
    product(){}
    product(int a,int b)
    {
        x = a;
        y = b;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void display()
    {
        cout << "First = " << x << " Second = " << y << endl;
    }
};
class Item
{
private:
    int i;

public:
    Item() {}
    Item(product p)
    {
        cout<<"PC called"<<endl;
        i = p.getx() + p.gety();
    }
    void display()
    {
        cout << "Item = " << i << endl;
    }
};
int main()
{
    product p1(8,9);
    p1.display();
    Item i1;
    cout<<endl;
    i1 = p1;
    i1.display();
    return 0;
}