/*Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.
Example-
int main()
{
 int duration;
 cout<<”Enter time duration in minutes”;
 cin>>duration;
 Time t1 = duration;
 t1.display();
 return 0;
}*/
#include <iostream>
using namespace std;
class Time
{
private:
    int hour, min;

public:
    Time() {}
    Time(int m)
    {
        hour = m / 60;
        min = m % 60;
    }
    void display()
    {
        cout << "Hour = " << hour << " Minutes = " << min << endl;
    }
};
int main()
{
    int duration;
    cout << "Enter time duration in minutes:" << endl;
    cin >> duration;
    Time t1 = duration;
    t1.display();
    return 0;
}