/* Define a class Date and write a program to Display Dateand initialise date object
 using Constructors.*/
#include <iostream>
using namespace std;
class Date
{
private:
    int date, month, year;
    public:
    Date(int dd,int mm, int yy)
    {
        date=dd;
        month=mm;
        year=yy;
        cout<<"Date has been created....."<<endl;
    }
    void display()
    {
        cout<<"The entered date is...."<<endl;
        cout<<date<<"-"<<month<<"-"<<year<<endl;
    }
};
int main()
{
    Date d1(23,9,2023);
    d1.display();
    return 0;
}