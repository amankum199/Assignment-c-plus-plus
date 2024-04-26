/*Write a program to copy the contents of one text file to another while changing the
case of every alphabet.*/
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    fin.open("D:/file/count.txt");
    fout.open("D:/file/copy.txt");
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch>=97 && ch<=122)
        ch=toupper(ch);
        else if(ch>=65 && ch<90)
        ch=tolower(ch);
        fout<<ch;
    }
    cout<<"Data copied successfully.."<<endl;
    fin.close();
    fout.close();

    return 0;
}