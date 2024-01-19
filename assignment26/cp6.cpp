/* Define a class student and write a program to enter student details using constructor
 and define member function to display all the details.*/
 #include<iostream>
 using namespace std;
 class Student
 {
 private:
    int marks;
    char grade;
 public:
    Student(int m,char g)
    {
        marks=m;
        grade=g;
    }
    void show()
    {
        cout<<"The Student obtainesd "<<marks<<" and his grade is "<<grade<<endl;
    }
    ~Student()
    {

    }
 };
 int main()
 {
    Student s1(84,'B'), s2(87, 'A');
    s1.show();
    s2.show();
    return 0;
 }