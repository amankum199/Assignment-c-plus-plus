/*Write a C++ program to merge the two files.*/
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin1, fin2;
    ofstream fout;
    string ch, file1, file2, merge_file;
    cout << "Enter the first file name with extension  .txt" << endl;
    getline(cin, file1);
    cout << "Enter the second file name with extension   .txt" << endl;
    getline(cin, file2);
    cout << "Enter the merged file name with extension   .txt" << endl;
    cout << "Which will store the  content of first file and second file. "<<endl;
    getline(cin, merge_file);
    fin1.open(file1);
    fin2.open(file2);
    if (!fin1 || !fin2)
    {
        cout << "\n Invalid File name." << endl;
        exit(EXIT_FAILURE);
    }
    fout.open(merge_file);
    if (!fout)
    {
        cout << "\n Invalid File name." << endl;
        exit(EXIT_FAILURE);
    }
    while(fin1.eof()==0)
    {
        getline(fin1,ch);
        fout<<ch;
    }
    while(fin2.eof()==0)
    {
        getline(fin2,ch);
        fout<<ch;
    }
    cout<<"Two file are merged"<<endl;
    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}