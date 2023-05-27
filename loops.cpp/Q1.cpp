// Q1 - Write a program to calculate the factorial of a number.
#include<iostream>
using namespace std;
int main(){
    int n,i;
    int fact=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"the factorial is : "<<fact;
    return 0;

}