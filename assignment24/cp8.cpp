/*Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle*/
#include <iostream>
using namespace std;
int area(int a)
{
    return 3.14 * a * a;
}
int area(int a, int b)
{
    return a * b;
}
int area(float a, float b)
{
    return 0.5 * a * b;
}
int main()
{
    int a, b, c;
    float x, y;
    cout << "Enter the radius of the circle" << endl;
    cin >> a;
    cout << "Enter the length and breadth of ractangle" << endl;
    cin >> b >> c;
    cout << "Enter the base and height of triangle" << endl;
    cin >> x >> y;
    cout << "area of circle is  " << area(a) << endl;
    cout << "area of rectangle is  " << area(b, c) << endl;
    cout << "area of triangle is  " << area(x, y) << endl;
    return 0;
}