/*Consider following class Numbers
 class Numbers
{
 int x,y,z;
 public:
 // methods
 };
 Overload the operator unary minus (-) to negate the numbers.*/
#include <iostream>
using namespace std;
class Number
{
private:
    int num;

public:
    Number(int n1)
    {
        num = n1;
    }
    Number(const Number &n1)
    {
        num = n1.num;
    }
    Number()
    {
    }
    friend int operator-(Number N);
};
int operator-(Number N)
{
    Number n;
    n.num = -N.num;
    return n.num;
}
int main()
{
    Number n3(6);
    
    cout << -n3 << endl;
    return 0;
}