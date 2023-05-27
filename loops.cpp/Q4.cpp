// Q4 - Write a program to reverse a given integer number.
#include<iostream>
using namespace std;
int main(){
    int n,rem,i;
    int rev=0;
    cout<<"enter a number : "<<endl;
    cin>>n;
 while (n!=0)
 {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
  
    
    
 }
 cout<<"the reverse of the number is :"<<rev;
 return 0;
 
}

