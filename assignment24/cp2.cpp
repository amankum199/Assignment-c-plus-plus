/*Define a function to find the highest value digit in a given number*/
#include <iostream>
using namespace std;
int highestDigit(int x)
{
    int y=0,max = -1;
    while (x)
    {
        y = x % 10;
        if (max < y)
            max = y;
        x = x / 10;
    }
    return max;
}
int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    cout << "Greatest Digit is " << highestDigit(a) << endl;
    return 0;
}