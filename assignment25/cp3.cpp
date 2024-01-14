/*Define a class Factorial and define an instance member function to find the Factorial
of a number using class*/
#include <iostream>
using namespace std;
class fact
{
private:
    int a;

public:
    int set(int m)
    {
        a=m;
    } 
    int fac()
    {
        int b = 1;
        for (int i = 1; i <= a; i++)
            b = b * i;
        cout << "Factorial is " << b;
    }
};
int main()
{
    fact k;
    int c;
    cout<<"Enter the number"<<endl;
    cin>>c;
    k.set(c);
    k.fac();
    return 0;
}