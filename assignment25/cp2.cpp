/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int min;
    int sec;

public:
    int set(int h, int m, int s)
    {
        hour = h;
        min = m;
        sec = s;
    }
    int print()
    {
        cout << hour << " hr  " << min << " min  " << sec << " sec" << endl;
    }
};
int main()
{
    Time a;
    int x, y, z;
    cout << "Enter the Hour, min and sec" << endl;
    cin >> x >> y >> z;
    a.set(x, y, z);
    a.print();
    return 0;
}