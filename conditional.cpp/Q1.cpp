// Q1 - Write a program which takes the values of length and breadth from user and check if it is
// a square or not.
#include<iostream>
using namespace std;
int main(){
    int length,breath;
    cout<<"enter the length"<<endl;
    cin>>length;
    cout<<"enter the breath"<<endl;
    cin>>breath;
    if ( length*breath==length*length){
       
        cout<<"it is a square";

    }
    else{
        cout<<"it is a rectangle";
    }
    return 0;
}