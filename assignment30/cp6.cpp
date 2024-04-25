/*Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char num[10];
    cout << "Enter pin-code of your area." << endl;
    gets(num);
    cout<<"---------------------------"<<endl;
    int length = 0;
    length = strlen(num);
    try
    {
        if ((length) == 6)
            cout << num << " is valid Pin-code.........";
        else
            throw "Invalid Pin-code.....";
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