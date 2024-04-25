/*Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char num[100];
    cout << "Enter your mobile number." << endl;
    gets(num);
    cout << num;
    int length = 0;
    length = strlen(num);
    try
    {
        if ((length) == 10)
            cout << " Valid Number.........";
        else
            throw "Invalid Number.....";
    }
    catch (const char *c)
    {
        cout << "\nException caught....\n"
             << c << endl;
    }
    catch (...)
    {
        cout << "Default exception :" << endl;
    }
    return 0;
}