/*Write a C++ program to add all the numbers of an array of size 10*/
#include <iostream>
using namespace std;

int main()
{
    int i=0,ar[10],sum=0;
    cout<<"Enter the number\n";
    for(i=0;i<10;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<10;i++)
    {
        sum=sum+ar[i];
    }
    cout<<"sum is "<<sum;
    return 0;
}
