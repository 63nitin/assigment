// Q3 - Write a program to find the sum of n natural numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int i;
    cout<<"Enter the natural number : "<<endl;
    cin>>n;
    for(i=0;i<=n;i++){
        sum=sum+i;

    }
    cout<<"the sum the number is: "<<sum;
    return 0;
}