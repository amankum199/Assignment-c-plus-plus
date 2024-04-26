/*Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    string email;
    cout << "Enter Gmail.." << endl;
    free;
    getline(cin, email);
    string gmail = "@gmail.com";
    try
    {
        if (email.find(gmail) != -1)
        {
            cout << "Accepted..   "<<endl<<email << endl;
        }
        else
        {
            throw "No";
        }
    }
    catch (const char *c)
    {
        cout << "Not Found ...@gmail.com"<<endl<<"Rejected..."<<endl<<email<<endl;
    }
    return 0;
}