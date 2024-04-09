/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include<iostream>
using namespace std;
class mystring {
    private:
    char str[500];
    public:
    void accept()
    {
        cout<<"Enter the string: "<<endl;
        cin>>str;
    }
    void show()
    {
        cout<<str<<endl;
    }
    void operator!()
    {
        for(int i=0;str[i]!='\0';i++)
        {
        if(str[i]>=65 && str[i]<=96)
        {
            str[i]=str[i]+32;
        }
        else if (str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        }
    }
};
int main()
{
    mystring s1;
    s1.accept();
    !s1;
    cout<<"Reverse string: "<<endl;
    s1.show();
    return 0;
}