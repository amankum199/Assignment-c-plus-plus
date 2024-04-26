/*Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[100];
    cout << "Enter your name." << endl;
    gets(name);
    int len = strlen(name);
    try
    {
        if (len < 8)
        {
            for (int i = 0; i < len; i++)
            {
                if(isdigit(name[i]))
                {
                    throw "Invalid...";
                }
                else
                {
                    cout<<"Your nickname is "<<name<<endl;
                    break;
                }
            }
        }
        else
        {
            throw "Invalid...";
        }
    }
    catch (const char *c)
    {
        cout<<"Nickname is "<<c<<endl;
    }
    catch(...)
    {
        cout<<"Default Exception"<<endl;
    }
    return 0;
}