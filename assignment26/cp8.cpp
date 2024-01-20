/*Define a class Bank and define member functions to read principal , rate of interest
 and year. Another member functions to calculate simple interest and display it.
 Initialise all details using constructor*/
#include <iostream>
using namespace std;
class Bank
{
private:
    int principal, rateOfInterest, year, si;

public:
    Bank(int p, int r, int y)
    {
        principal = p;
        rateOfInterest = r;
        year = y;
    }
    int calculate()
    {
        si = (principal * rateOfInterest * year) / 100;
        return si;
    }
    ~Bank()
    {
        
    }
};
int main()
{
    Bank b1(10000,3,2);
    cout<<"Simple Interest is "<<b1.calculate()<<endl;
    return 0;
}