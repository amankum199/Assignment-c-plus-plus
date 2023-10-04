/*Write a function using the default argument that is able to add 2 or 3 numbers*/
#include <iostream>
using namespace std;
int add(int a, int b, int c = 0)
{
    return a + b + c;
}
int main()
{
    cout << "Addition of two number." << add(5, 2) << endl;
    cout << "Addition of three number." << add(5, 2, 23);
    return 0;
}