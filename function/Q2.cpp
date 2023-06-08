// Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle
#include<iostream>
using namespace std;
double cir(int r){
    return 2*3.14*r;
}
double area(int r){
    return 3.14*r*r;
}
int main(){
    int r;
    cout<<"Enter the radius :"<<endl;
    cin>>r;
    cout<<"area : "<<cir(r)<<endl;
    cout<<"circumpherence : " <<area(r)<<endl;
}