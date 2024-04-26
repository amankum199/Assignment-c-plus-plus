/*Write a C++ program to open an output file 'a.txt' and append data to it*/
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    fin.open("D:/file/abc.txt");
    fout.open("D:/file/abc.txt",ios::app);
    fout<<"\n abhijeet is my friend"<<endl;
    if(fout)
    cout<<"File append successfully..."<<endl;
    else 
    cout<<"Rejected.."<<endl;
    fin.close();
    fout.close();
    return 0;
}