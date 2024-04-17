/*Write a C++ program to demonstrate try, throw and catch statements*/
#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw "Aman kumar";
    }
    catch (char const *e)
    {
        cout << "Exception caught " << e << endl;
    }
    return 0;
}