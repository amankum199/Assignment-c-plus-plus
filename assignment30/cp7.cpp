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
    cout<<"Enter Username"<<endl;
    gets(username);
    try
    {
        if(strlen(username)>6)
        {
            cout<<"Username must be less than of 6 character"<<endl;
        throw"Invalid Username";
        }
        bool digit_character=false;
        bool valid;
        int len = strlen(username);
        for(int i=0;i<len;i++)
        {
            if(isalnum(username[i]))
            digit_character=true;
        }
        if(!digit_character)
        {
            valid = false;
            cout<<"Username must contain digit.."<<endl;
            throw "Invalid Username...";
        }
        else
        {
            valid=true;
            cout<<"Username Accepted"<<endl;
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