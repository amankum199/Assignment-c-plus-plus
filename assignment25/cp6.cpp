/*Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.
*/
#include <iostream>
using namespace std;
class Square
{
private:
    int a;
    int square;
public:
    static int count;
    void set(int m)
    {
        a = m;
    }
    int getm()
    {
        return a;
    }
    int get()
    {
        return square;
    }
    int print()
    {
        return count;
    }
    void sq()
    {
        square=a*a;
        count++;
    }
};
int Square::count=0;
int main()
{
    Square k;
    int c;
    cout << "Enter the number" << endl;
    cin >> c;
    k.set(c);
    k.sq();
    cout<<"Square of "<<k.getm()<<" is "<<k.get()<<endl;
    cout<<"Function called "<<k.print()<<" times."<<endl;
    return 0;
}