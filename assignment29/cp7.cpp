/*Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
 Time t1(2,30);
 t1.display();
 Minute m1;
 m1.display();
 m1=t1 // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}
*/
#include <iostream>
using namespace std;
class Time
{
private:
    int x, y;

public:
    Time() {}
    Time(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void display()
    {
        cout << x << " : " << y << endl;
    }
};
class Minute
{
private:
    int i, j;
    public:
    Minute() {}
    Minute(Time t)
    {
        i = t.getx();
        j = t.gety();
    }

public:
    void display()
    {
        cout << i << " : " << j << endl;
    }
};
int main()
{
    Time t1(2, 30);
    t1.display();
    Minute m1;
    m1.display();
    m1 = t1; // Fetch minute from time
    t1.display();
    m1.display();
    return 0;
}