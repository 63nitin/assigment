// Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
// calculate Profit or Loss.
#include<iostream>
using namespace std;
int main(){
    float sp,cp,profit,loss;
    cout<<"enter the cost price"<<endl;
    cin>>cp;
    cout<<"enter the selling price "<<endl;
    cin>>sp;
    profit=sp-cp;
    loss=cp-sp;
    if (profit>0){
        cout<<"profit is :"<<profit;
    }
    else{
        cout<<"the loss is :"<<loss;

    }
return 0;
}