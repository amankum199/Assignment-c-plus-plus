/*Write a C++ program to calculate an average of 3 numbers*/
#include<iostream>
using namespace std;
int main()
{
    int a=5,b=8,c=9;
    int sum=0,avg=0;
    sum=a+b+c;
    avg=sum/3;
    cout<<"Average of 3 number is "<<avg;
    return 0;
}