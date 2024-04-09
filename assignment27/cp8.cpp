/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output -
*/
#include<iostream>
using namespace std;
class matrix{
    private:
    int a[3][3];
    public:
    void accept()
    {
        cout<<"Enter element of matrix: "<<endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>a[i][j];

            }
        }
    }
    void show()
    {
        cout<<"Matrix are: "<<endl;
         for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<a[i][j]<<" ";

            }
            cout<<endl;
        }
    }
    void operator-()
    {
         for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                a[i][j]=-a[i][j];
            }
        }
    }
};
int main()
{
 matrix m1;
 m1.accept();
 m1.show();
 -m1;
 cout<<"After negated ";
 m1.show();

}