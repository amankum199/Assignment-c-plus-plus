/* Create a class Time which contains:- Hours- Minutes- Seconds
 Write a C++ program using operator overloading for the following:
 1.  = = : To check whether two Times are the same or not.
 2.  >>  : To accept the time.
 3.  <<  : To display the time.
*/
#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int min;
    int sec;

public:
    Time(int h, int m, int s)
    {
        cout << "parameterised constructor called" << endl;
        hour = h;
        min = m;
        sec = s;
    }
    Time(const Time &t)
    {
        cout << "copy constructor called" << endl;
        hour = t.hour;
        min = t.min;
        sec = t.sec;
    }
    Time()
    {
        cout << "default constructor called" << endl;
    }
    friend bool operator==(Time t1, Time t2);
    friend ostream &operator<<(ostream &os, Time T);
    friend istream &operator>>(istream &is, Time T);
};
bool operator==(Time t1, Time t2)
{
    cout << "operator == called" << endl;
    if (t1.hour == t2.hour)
    {
        if (t1.min == t2.min)
        {
            if (t1.sec == t2.sec)
                return true;
        }
        else
            return false;
    }
    else
        return false;
}
ostream &operator<<(ostream &os, Time T)
{
    return os;
}
istream &operator>>(istream &is, Time T)
{
    return is;
}
int main()
{
    int a, b, c, d, e, f;
    cout << "enter 1st time" << endl;
    cin >> a >> b >> c;
    cout << "enter 2nd time" << endl;
    cin >> d >> e >> f;

    Time ti1(a, b, c);
    Time ti2(d, e, f);
    bool comp;
    comp = ti1 == ti2;

    cout << comp << endl;

    return 0;
}