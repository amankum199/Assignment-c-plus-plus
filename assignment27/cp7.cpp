/*Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output*/
#include <iostream>
using namespace std;
class fraction
{
private:
    long numo;
    long deno;

public:
    fraction(long n = 0, long d = 0)
    {
        numo = n;
        deno = d;
    }
    fraction operator++()
    {
        ++numo;
        ++deno;
        return (*this);
    }
    fraction operator++(int useless)
    {
        numo++;
        deno++;
        return (*this);
    }
    friend void operator>>(istream &in, fraction &f)
    {
        cout << "Numerator";
        in >> f.numo;
        cout << "Denominator";
        in >> f.deno;
    }
    friend void operator<<(ostream &out, fraction &f)
    {
        out << f.numo << "/" << f.deno << endl;
    }
};
int main()
{
    fraction f1, f2;
    cout << f1;
    cout << f2;
    cout << "Enter the first fraction" << endl;
    ;
    cin >> f1;
    cout << "f1 " << f1;
    cout << "Enter Second fraction" << endl;
    ;
    cin >> f2;
    cout << "f2 " << f2;
    ++f1;
    cout << "++f1 " << f1;
    f1++;
    cout << "f1++ " << f1;
    ++f2;
    cout << "++f2 " << f2;
    f2++;
    cout << "f2++ " << f2;
    return 0;
}
