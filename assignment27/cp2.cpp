/* Write a C++ program to overload unary operators that is increment and decrement*/
#include <iostream>
using namespace std;
class Unary
{
private:
    int age, rank;

public:
    int getAge()
    {
        return age;
    }
    int getRank()
    {
        return rank;
    }
    Unary(int a, int r)
    {
        cout << "parameterised constructor called" << endl;
        age = a;
        rank = r;
    }
    Unary(const Unary &p)
    {
        cout << "copy constructor called" << endl;
        age = p.age;
        rank = p.rank;
    }
    Unary()
    {
        cout << "Default constructor called" << endl;
    }
    Unary operator++()
    {
        Unary temp;
        temp.age = ++age;
        temp.rank = ++rank;
        return temp;
    }
    Unary operator++(int useless)
    {
        Unary temp;
        temp.age = age++;
        temp.rank = rank++;
        return temp;
    }
    Unary operator--()
    {
        Unary temp;
        temp.age = --age;
        temp.rank = --rank;
        return temp;
    }
    Unary operator--(int useless)
    {
        Unary temp;
        temp.age = age--;
        temp.rank = rank--;
        return temp;
    }
    void display()
    {
        cout << " Person age " << age << " person rank " << rank << endl;
    }
};

int main()
{
    Unary p1(20, 43);
    p1.display();
    (++p1).display();
    (p1++).display();
    p1.display();
    cout << endl;
    Unary p2(10, 21);
    p2.display();
    (--p2).display();
    (p2--).display();
    p2.display();

    return 0;
}