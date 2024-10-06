/*Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/
#include <iostream>
using namespace std;
int main()
{
    float num1, num2, ans;
    char Operator;
    cout << "Perform arithmetic operator" << endl;
    cout << "---------------------------------------------" << endl;
    do{
    try
    {
        cout << "Enter first number" << endl;
        cin >> num1;
        if (num1 == 0)
            throw 0;
        cout << "Enter operator" << endl;
        cin >> Operator;
        if (Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/')
            throw Operator;
        cout << "Enter seond number" << endl;
        cin >> num2;
        cout << "------------------------------------------" << endl;
        switch (Operator)
        {
        case '+':
            ans = num1 + num2;
            break;
        case '-':
            ans = num1 - num2;
            break;
        case '*':
            ans = num1 * num2;
            break;
        case '/':
            if (num2 == 0)
                throw 0;
            ans = num1 / num2;
            break;
        }
        cout << "Answer : " << num1 << " " << Operator << " " << num2 << " = " << ans << endl;
        ;
    }
    catch (const char r)
    {
        cout << "Exception caught.... \n Bad operator : " << r << " is not valid" << endl;
    }
    catch (const int a)
    {
        cout << "\n Error : Bad opration...";
    }
    return 0;
}