/* Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.
Example
int main()
{
 Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
 return 0;
}*/
#include <iostream>
using namespace std;
class Rupee
{
private:
    float r;

public:
    Rupee() {}
    Rupee(float r)
    {
        this->r = r;
    }
    float getr()
    {
        return r;
    }
    void display()
    {
        cout << "Rupee " << r << endl;
    }
};
class Dollar
{
private:
    float d;

public:
    Dollar() {}
    Dollar(float d)
    {
        this->d = d;
    }
    Dollar(Rupee r1)
    {
        d = r1.getr() / 100;
    }
    void display()
    {
        cout << "Dollar " << d << endl;
    }
    operator Rupee()
    {
        return d * 100;
    }
};
int main()
{
    Rupee r = 230;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}