/*Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
 Invent1 x=(4,5);
 Invent2 y;
 float z;
 z=x; // Invent1 to float
 y=x;  // Invent1 to Invent2
 return 0;
}*/
#include <iostream>
using namespace std;
class invent1
{
private:
    int a, b;

public:
    invent1() {}
    invent1(int x, int y)
    {
        a = x;
        b = y;
    }
    operator float()
    {
        return (a + b);
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};
class invent2
{
    private:
    int i,j;
    public:
    invent2(){}
    invent2(invent1 a1)
    {
        i=a1.geta();
        j=a1.getb();

    }
    void display()
    {
        cout<<i<<" "<<j<<endl;
    }

};

int main()
{
    invent1 x(3, 4);
    invent2 y;
    float z;
    z = x; // Invent1 to float
    cout<<z<<endl;
    y = x; // Invent1 to Invent2
    y.display();
    return 0;
}