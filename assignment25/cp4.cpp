/*Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include <iostream>
using namespace std;
class LargestNumber
{
private:
    int a,b,c,big;

public:
    int set(int m, int n, int o)
    {
        a = m;
        b = n;
        c = o;
    }
    int getn()
    {
        return big;
    }
    int larg()
    {
        if(a>b && a>c)
        big=a;
        if(b>a && b>c)
        big=b;
        if(c>a && c>b)
        big=c;
    }
};
int main()
{
    LargestNumber f;
    int x,y,z;
    cout<<"Enter the number"<<endl;
    cin>>x>>y>>z;
    f.set(x,y,z);
    f.larg();
    cout<<"Largest number is "<<f.getn()<<endl;
    return 0;
}