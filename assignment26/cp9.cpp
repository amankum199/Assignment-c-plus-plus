/*Define a class Bill and define its member function get() to take detail of customer ,
 calculateBill() function to calculate electricity bill using below tariff :
 Upto 100 unit RS. 1.20 per unit
 From 100 to 200 unit RS. 2 per unit
 Above 200 units RS. 3 per unit.*/
#include <iostream>
#include <string>
using namespace std;
class Bill
{
private:
    int unit;
    float bill_amt;

public:
    int get(int un)
    {
        unit = un;
    }
    int calculateBill()
    {
        if (unit <= 100)
        {
            bill_amt = unit * 1.20;
            return bill_amt;
        }
        else if (unit > 100 && unit <= 200)
        {
            bill_amt = 100 * 1.20 + (unit - 100) * 2;
            return bill_amt;
        }
        else if (unit >= 200)
        {
            bill_amt = 100 * 1.20 + 100 * 2 + (unit - 200) * 3;
            return bill_amt;
        }
    }
};
int main()
{
    string n;
    int un;
    int c;
    cout << "Enter your name" << endl;
    cin >> n;
    cout << "Enter your consumer number" << endl;
    cin >> c;
    cout << "Enter your meter raeding. " << endl;
    cin >> un;

    Bill c1;
    c1.get(un);
    cout << "Details...." << endl;
    cout << "Consimer Name: " << n << endl;
    cout << "Consumer number: " << c << endl;
    cout << "Unit: " << un << endl;
    cout<<"Your Bill amount is: "<<c1.calculateBill()<<endl;
    return 0;
}