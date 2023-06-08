// Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers
// between them.
#include<iostream>
using namespace std;
void odd(int a, int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
          cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter the two numbers"<<endl;
    cin>>a>>b;
    
    odd(a,b);
    return 0;
}