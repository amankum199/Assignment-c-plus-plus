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
    Time()
    {
        hour = min = sec = 0;
        cout << "default constructor called" << endl;
    }
    friend int operator>>(istream &input, Time &t)
    {
        cout << "Input called" << endl;
        cout << "Enter hours:" << endl;
        input >> t.hour;
        cout << "Enter minutes:" << endl;
        input >> t.min;
        cout << "Enter Seconds:" << endl;
        input >> t.sec;
        t.min = t.min + t.sec / 60;
        t.sec %= 60;
        t.hour = t.hour + t.min / 60;
        t.min %= 60;
        if (t.hour >= 25)
            return 1;
        else
            return 0;
    }
    friend void operator<<(ostream &output, Time &t)
    {
        cout << "Output called" << endl;
        output << "Hours :" << t.hour << endl;
        output << "Minutes :" << t.min << endl;
        output << "Second :" << t.sec << endl;
    }
    int operator==(Time t1)
    {
        int tot = hour * 3600 + min * 60 + sec;
        int tot1 = t1.hour * 3600 + t1.min * 60 + t1.sec;
        if (tot == tot1)
            return 1;
        else
            return 0;
    }
    ~Time()
    {
        cout << "Destructed" << endl;
    }
};
int main()
{
    Time t, t1;
    cout << "Enter First time" << endl
         << endl;
    if (cin >> t)
    {
        cout << "Invalid time" << endl;
        return 0;
    }
    cout << "First Time" << endl;
    cout << t;
    cout << "Enter Second time" << endl
         << endl;
    if (cin >> t1)
    {
        cout << "Invalid time" << endl;
        return 0;
    }
    cout << "Second Time" << endl;
    cout << t1;
    if (t == t1)
        cout << "Times are Same"<<endl;
    else
        cout << "Times are Different"<<endl;

    return 0;
}