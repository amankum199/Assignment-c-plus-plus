/*Define a function to swap data of two int variables using call by reference*/
#include <iostream>
using namespace std;
int swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    int x, y;
    cout << "Enter the number" << endl;
    cin >> x >> y;
    swap(x, y);
    cout << "Number after Shifting " << x << " " << y;
    return 0;
}