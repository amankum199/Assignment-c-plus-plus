/*Define a class StaticCount and create a static variable. Increment this variable in a
 function and call this 3 times and display the result*/
#include <iostream>
using namespace std;
class StaticCount
{
private:
    static int count;

public:
    void incr()
    {
        count++;
    }
    void show()
    {
        cout << count << endl;
    }
};
int StaticCount ::count;
int main()
{
    StaticCount c1;
    c1.incr();
    c1.incr();
    c1.incr();
    c1.show();
    return 0;
}