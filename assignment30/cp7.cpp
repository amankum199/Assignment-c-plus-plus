/*Write a C++ program to accept a username if the username has less than 6 characters 
or does contain any digit or special symbol.*/
#include<iostream>
#include<string.h>
#include<conio.h>
#include<ctype.h>
using namespace std;
int main()
{
    char username[100];
    char password[50];
    cout<<"Enter uasername"<<endl;
    gets(username);
    cout<<"Enter Password"<<endl;
    gets(password);
    try
    {
        if(strlen(password)<6)
        {
            cout<<"Password must be more than of 6 character"<<endl;
        throw"Invalid password";
        }
        bool digit_yes=false;
        bool valid;
        int len = strlen(password);
        for(int i=0;i<len;i++)
        {
            if(isdigit(password[i]))
            digit_yes=true;
        }
        if(!digit_yes)
        {
            valid = false;
            cout<<"Password must contain digit.."<<endl;
            throw "Invalid Password";
        }
        else
        {
            valid=true;
            cout<<"Correct password"<<endl;
        }
    }
    catch(const char *c)
    {
        cout<<c<<endl;
    }
    catch(...)
    {
        cout<<"Default excerption";
    }
    return 0;
}