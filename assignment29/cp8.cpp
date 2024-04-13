/*8. Create a Rupee class and convert it into int. And Display it.
Example
int main()
{
 Rupee r = 10;
 int x = r;
cout<<x;
 return 0;
}*/
#include<iostream>
using namespace std;
class Rupee
{
    private:
    int x;
    public:
    Rupee(){}
    Rupee(int n)
    {
        x=n;
    }
    operator int()
    {
        return x;
    }
    void display()
    {
        cout<<x<<" Rupee"<<endl;
    }
};
int main()
{
 Rupee r = 10;
 int x = r;
cout<<x;
 return 0;
}