/* Define a class Counter and Write a program to Show Counter using Constructor*/
#include <iostream>
using namespace std;
class Counter
{
private:
   static int count;

public:
    Counter()
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
    ~Counter()
    {
        cout << "Destructing  " << count << endl;
    }
};
int Counter::count;
int main()
{
    Counter c1, c2, c3;
    cout << "After calling Constructor  " << c1.getcount() << endl;
    return 0;
}
