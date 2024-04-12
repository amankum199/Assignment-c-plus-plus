/*Create Product class and convert Product type to Item type using casting operator
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
 */
#include <iostream>
using namespace std;
class Item
{
private:
    int i;

public:
    Item() {}
    Item(int k)
    {
        i=k;
    }
    void display()
    {
        cout << "Item = " << i << endl;
    }
};
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
    // int getx()
    // {
    //     return x;
    // }
    // int gety()
    // {
    //     return y;
    // }
    void display()
    {
        cout << "First = " << x << " Second = " << y << endl;
    }
    operator Item()
    {
        Item i(x+y);
        return i;
    }
};

int main()
{
    product p1(8,9);
    p1.display();
    Item i1=p1;
    // i1 = p1;
    i1.display();
    return 0;
}