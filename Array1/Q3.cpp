// Q3 - Given an integer array and its size, reverse the array and print it . Here 1<size<101
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int i;
    for ( i = 4; i >= 0; i--)
    {
cout<<arr[i]<<" ";
    }
    return 0;
}