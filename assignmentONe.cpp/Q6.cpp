// Q6 - Write a C++ program to swap two numbers with the help of a third variable.
#include<iostream>
using namespace std;
int main(){
   int x=5;
   int y=6;
   int temp;
   cout<<"BEFORE SWAP"<< x <<y<<endl;
   temp=x;
x=y;
y=temp;
cout<<"AFTER SWAP"<<x<<y<<endl;
return 0;

}

