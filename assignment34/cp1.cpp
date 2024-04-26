/*Write a C++ program to create a file and print “File created successfully” and throw
an error if file is not created.*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("D:/file/abc.txt");
    if (fout)
    {
        cout << "Files created succesfully.." << endl;
        fout << "Aman kumar";
    }
    else
    {
        cout << "Files not created.." << endl;
    }
    fout.close();
    return 0;
}