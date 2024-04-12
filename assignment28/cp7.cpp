/*Create an Integer class and overload logical not operator for that class.*/
#include <iostream>
using namespace std;
class Integer
{
private:
    int i;

public:
    Integer(int i)
    {
       this->i=i;

    }
    int operator!()
    {
        return -(i);
    }
};
int main()
{
    Integer r(5);
    cout<<!r;

    return 0;
}
