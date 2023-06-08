// Q1 - Write a function to print squares of the first 5 natural numbers.
#include<iostream>
using namespace std;
int square(int num){
    return num*num;
}
int main(){
int i;
for (i=1;i<=5;i++){
    cout<<square(i)<<" ";
}
}