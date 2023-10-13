/*Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/
#include <iostream>
using namespace std;
int max(int a)
{
    return a;
}
float max(float b)
{
    return b;
}
int main()
{
    float b, y;
    int a, x;
    cout << "enter a number " << endl;
    cin >> a;
    x = max(a);
    cout << "enter a real numner " << endl;
    cin >> b;
    y = max(b);
    cout << "maximum is = " << (x > y ? x : y);
    return 0;
}