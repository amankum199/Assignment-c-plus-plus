/*Overload subscript operator [] that will be useful when we want to check for an index
out of bound.*/
#include<iostream>
using namespace std;
class Array
{
    private:
    int array[100];
    const int size = 100;
    public:
    void setdata(int n,int index )
    {
        if(index>= 100)
        {
            cout<<"Array index out of bound"<<endl;
        }
        array[index]=n;
    }
    void display(int index)
    {
        cout<<array[index]<<endl;
    }
    int operator[](int index)
    {
        if(index>= 100)
        {
            cout<<"Array index out of bound"<<endl;
        }
        return array[index];
    }
};
int main()
{
    Array a1;
    int a,b;
    cout<<"Enter number and his index"<<endl;
    cin>>a>>b;
    a1.setdata(a,b);
    a1.display(b);
    cout<<a1[100];
}