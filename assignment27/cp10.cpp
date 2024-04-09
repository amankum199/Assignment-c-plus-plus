/*Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
Output */
#include <iostream>
using namespace std;
class matrix
{
private:
    int a[3][3];

public:
    void accept()
    {
        cout << "Enter matrix: " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void show()
    {
        cout<<"Matrix are: "<<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<< a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    matrix operator+(matrix m5)
    {
        matrix m9;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m9.a[i][j]=a[i][j]+m5.a[i][j];
            }
        }
        return m9;
    }
};
int main()
{
    matrix m1,m2,m3;
    m1.accept();
    m2.accept();
    m3=m1+m2;
    cout<<"After adding ";
    m3.show();
    return 0;
}