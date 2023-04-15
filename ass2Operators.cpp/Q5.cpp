// 5 - write a program to calculate the sum of digits of a 3 digit number.
#include<iostream>
using namespace std;
int main(){
    int sum,n,first,second,third;
    n=123;
    first=n/100;
    n=n%100;
    second=n/10;
    third=n%10;
    cout<<"the sum of digits of a 3 digit number="<<first+second+third;
    return 0;
}
