/*Define a function to print Pascal Triangle up to N lines*/
#include <iostream>
using namespace std;
int fact(int n);
int comb(int n, int r);
int fact(int n)
{
    if (n <= 0)
        return 1;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int comb(int n, int r)
{
    int com = fact(n) / (fact(r) * fact(n - r));
    return com;
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int k = 0;
            if (j == 0)
                while (k++ <= (n-i))
                    cout << " ";
                
            cout << comb(i,j)<<" ";
        }
        cout << endl;
    }
    return 0;
}