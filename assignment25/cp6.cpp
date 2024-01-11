/*Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.
*/
#include <iostream>
using namespace std;
class Square
{
private:
    int a;

public:
    void set(int m)
    {
        a = m;
    }
    void sq()
    {
        
        
    }
};
int main()
{
    Square k;
    int c;
    cout << "Enter the number" << endl;
    cin >> c;
    k.set(c);
    k.sq();
    return 0;
}