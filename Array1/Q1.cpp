// Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int i;
    for(i=0;i<=4;i++){
        if(arr[i]%2==0){
            cout<<"even number is :"<<arr[i]<<endl;
        }
        else{
            cout<<"odd number is: "<<arr[i]<<endl;
        }
    }
    return 0;
}