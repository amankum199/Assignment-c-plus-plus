/* Define a class Time to represent a time with instance variables h,m and s to store
 hour, minute and second. Also define following member functions
 a. void setTime(int,int,int)
 b. void showTime()
 c. void normalize()
 d. Time add(Time)*/
#include <iostream>
using namespace std;
class Time
{
private:
    int hour, min, sec;

public:
    void setTime(int h, int m, int s)
    {
        hour = h;
        min = m;
        sec = s;
    }
    void showTime()
    {
        cout << hour << ":" << min << ":" << sec << endl;
    }
    void normalize()
    {
        min = min + sec / 60;
        sec = sec % 60;
        hour = hour + min / 60;
        min = min % 60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.hour = hour + t.hour;
        temp.min = min + t.min;
        temp.sec = sec + t.sec;
        return temp;
    }
};
int main()
{
    Time t1, t2, t3;
    t1.setTime(4, 45, 67);
    t2.setTime(5, 25, 47);
    t3 = t1.add(t2);
    t3.normalize();
    t1.showTime();
    t2.showTime();
    cout << "After adding both time..." << endl;
    t3.showTime();
    return 0;
}
