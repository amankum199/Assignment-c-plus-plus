/*Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class*/
#include <iostream>
using namespace std;
class ReverseNumber
{
private:
    int a;

public:
    void set(int m)
    {
        a = m;
    }
    void fac()
    {
        for (int i = 0; i <=10; i++)
        {
            if(a==0)
            break;
            int f;
            f = a % 10;
            a = a / 10;
            cout << f;
        }
    }
};
int main()
{
    ReverseNumber k;
    int c;
    cout << "Enter the number" << endl;
    cin >> c;
    k.set(c);
    k.fac();
    return 0;
}