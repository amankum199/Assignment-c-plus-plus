/* Write a C++ program that counts the total number of characters, words and lines in
the file.*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("D:/file/count.txt");
    fout<<"my name is aman"<<endl;
    fout.close();
    ifstream fin;
    fin.open("D:/file/count.txt");
    fin.seekg(0,ios_base::beg);
    char ch;
    int i,c=0,sp=0;
    while(!fin.eof())
    {
        fin.get(ch);
        if((ch>63&&ch<91)||(ch>96&& ch<123))
        c++;
        if(ch==' ')
        sp++;
    }
    cout<<"No. of character in a file: "<<c<<endl;
    cout<<"No. of words  in a file: "<<(sp+1)<<endl;
    fin.close();

    return 0;
}