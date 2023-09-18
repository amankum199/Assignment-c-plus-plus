/*Write a C++ program to find the maximum of two numbers*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter two number\n";
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << "Maximum number is " << num1;
    }
    else
    {
        cout << "Maximum number is " << num2;
    }

    return 0;
}