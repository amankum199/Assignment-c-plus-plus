/*Define a function to check whether a given number is a Prime number or not*/
#include <iostream>
using namespace std;
int prime(int n)
{
    int count = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            count = 1;
    }
    return count;
}
int main()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    if (prime(a) == 0)
        cout << "prime number";
    else
        cout << "Not prime number";
    return 0;
}