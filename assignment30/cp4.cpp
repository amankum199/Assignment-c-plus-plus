/*Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol*/
#include <iostream>
using namespace std;
bool checkmail(char *);
int main()
{
    char email[100];
    cout << "Enter an email address :" << endl;
    gets(email);
    try
    {
        if (checkmail(email))
            cout << "Valid Email..." << endl;
        else
            throw 'c';
    }
    catch (const char c)
    {
        cout << "Exception caught.... Invalid email...." << endl;
    }
    catch (...)
    {
        cout << "Default exception :" << endl;
    }
    return 0;
}
bool checkmail(char *email)
{
    int at = -1;
    int dot = -1;
    int length = -1;
    for (int i = 0; email[i] != 0; i++)
    {
        if (email[i] == '@')
            at = i;
        else if (email[i] == '.')
            dot = i;
        length++;
    }
    if (at == -1 || dot == -1)
        return 0;
    if (at > dot)
        return 0;
    return !(dot>=(length));
}