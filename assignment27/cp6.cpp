/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
#include <iostream>
#include <string.h>
using namespace std;
class Cstring
{
private:
    char str[20];

public:
    void setr()
    {
        cout << "Enter string: " << endl;
        cin >> str;
    }
    void show()
    {
        cout << str << endl;
    }
    Cstring operator+(Cstring s1)
    {
        Cstring s;
        strcpy(s.str, str);
        strcat(s.str, s1.str);
        return s;
    }
    int operator==(Cstring &s)
    {
        for (int i=0; str[i] != '\0'; i++)
        {
            for (int j=0; s.str[j] != '\0'; j++)
            {
                if (str[i] == s.str[j])
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
        }
    }
};
int main()
{
    Cstring c1, c2, c3;
    int result = 0;
    c1.setr();
    c2.setr();
    cout << "First string = ";
    c1.show();
    cout << "Second string = ";
    c2.show();
    c3 = c1 + c2;
    cout << "After concatanation = ";
    c3.show();
    result = c1 == c2;
    if (result == 0)
    {
        cout << "Same string..";
    }
    else
    {
        cout << "Different string..";
    }
    return 0;
}
