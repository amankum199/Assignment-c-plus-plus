/*Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include <iostream>
using namespace std;
class LargestNumber
{
private:
    int a,b,c;

public:
    int set(int m, int n, int o)
    {
        a = m;
        b = n;
        c = o;
    }
    int larg()
    {
        if(a>b && a>c)
        cout<<a<<" is greatest";
        if(b>a && b>c)
        cout<<b<<" is greatest";
        if(c>a && c>b)
        cout<<c<<" is greatest";
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
    return 0;
}