/*There are 50 records in a file. Each record contains 6-character item-code, 20
characters for item-name and an integer price. Write a program to read these
records, arrange them in the descending order of price and write them in the same
file, overwriting the earlier records.*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class record
{
    public:
    int item_code;
    string item_name;
    int price;



};
int main()
{
    ifstream fin;
    fin.open("D:/file/abc.txt");
    for(int i=1;i<=50;i++)
    {   
        cout<<"Enter record of student: "<<i<<endl;
        
    }
    return 0;
}