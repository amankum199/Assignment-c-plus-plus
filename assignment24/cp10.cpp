/*Write functions using function overloading to add two numbers having different data
types*/
#include <iostream>
using namespace std;

int sum(int, int);
float sum(float, float);
float sum(int, float);

int sum(int a, int b){
   return a+b;
}
float sum(float a, float b){
   return a+b;
}
float sum(int a, float b){
   return a+b;
}
int main(){
   int num1, num2, x;
   float num3, num4, y;
   cout<<"Enter two integer numbers: ";
   cin>>num1>>num2;
   cout<<"Result: "<<sum(num1, num2)<< endl;

   cout<<"Enter two float numbers: ";
   cin>>num3>>num4;
   cout<<"Result: " <<sum(num3, num4)<< endl;

   cout<<"Enter one int and one float number: ";
   cin>>x>>y;
   cout<<"Result: " <<sum(x, y)<< endl;
   return 0;
}