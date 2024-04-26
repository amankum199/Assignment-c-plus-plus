/*Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.
*/
#include <iostream>
#include <string.h>
#include <conio.h>
#include <ctype.h>
using namespace std;
int main()
{
    char username[100];
    char password[50];
    cout << "Enter Username" << endl;
    gets(username);
    cout << "Enter Password" << endl;
    gets(password);
    try
    {
        if (strlen(password) < 6)
        {
            cout << "Password must be more than of 6 character" << endl;
            throw "Invalid password";
        }
        else
        {
            bool C_D = false;
            bool valid;
            int len = strlen(password);
            for (int i = 0; i < len; i++)
            {
                if (isupper(password[i]))
                {
                    for (int i = 0; i < len; i++)
                    {
                        if (isdigit(password[i]))
                            C_D = true;
                    }
                }
            }

            
            if (!C_D)
            {
                valid = false;
                cout << "Password must contain capital letter and digit ..." << endl;
                throw "Invalid Password";
                return 0;
            }

            else
            {
                valid = true;
                cout << "Correct password" << endl;
            }
        }
    }
    catch (const char *c)
    {
        cout << c << endl;
    }
    catch (...)
    {
        cout << "Default excerption";
    }
    return 0;
}