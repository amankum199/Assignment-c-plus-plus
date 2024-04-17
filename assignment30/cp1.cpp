/*Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int c;
    cout << "Enter Dividend and Divisor" << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw "cannot divide by zero";
        if (b == 1)
            throw a;
        if (b == 2)
            throw exception();
        c = a % b;
    }
    catch (char const *msg)
    {
        cout << msg << endl;
    }
    catch (int x)
    {
        cout <<"Number divided by 1 remains same: "<<x<< endl;
    }
    catch (...)
    {
        cout << "Dividing......";
    }
    cout<<"Quotient = "<<c<<endl;
    return 0;
}