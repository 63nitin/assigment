// Q4- Write a program to print positive number entered by the user, if user enters a negative
// number, it is skipped.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the an integer "<<endl;
    cin>>x;
    if(x<0){
        x=x*(-1);
    
 }
 cout<<"the + number is :"<<x;
 return 0;
 
}