/*Define a function to check whether a given number is a term in a Fibonacci series or
not*/
#include <iostream>
using namespace std;
int fib(int n)
{
    int f1 = 1, f2 = 2, temp = 0;
    if (n <= 2)
        return 1;
    for (int i = 3; i <= n; i++)
    {
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    return f2;
}
int main()
{
    int n, flag = 0;
    cout << "Enter the number"<<endl;
    cin >> n;
    for (int i = 1;; i++)
    {
        int value=fib(i);
        if(n==value)
        {
            flag =1;
            break;
        }
        if(value>n)
        {
            break;
        }
    }
    if(flag==1)
    cout<<"Number is in fibonacci Series.";
    else
    cout<<"Number is not in fibonacci Series.";
    return 0;
}