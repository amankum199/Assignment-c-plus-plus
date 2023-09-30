/*Define a function to calculate x raised to the power y.*/
#include<iostream>
using namespace std;
int pow(int x,int y)
{
    int m=1;
    while(y)
    {
        m=m*x;
        y--;
    }
    return m;
}
int main()
{
    int x,y;
    cout<<"Enter two number"<<endl;
    cin>>x>>y;
    cout<<x<<" Power "<<y<<" = "<<pow(x,y);
    return 0;
}