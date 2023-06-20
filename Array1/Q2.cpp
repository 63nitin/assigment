// Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present
// in the array. Here 1< size <101
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,1,3,2};
    int i;
    int max=arr[0];
    int sum;
    for(i=0;i<=4;i++){
        if (arr[i]>=max)
        {
        max=arr[i];
        }
        
    }
    int min=arr[0];
    for ( i = 0; i < 4; i++)
    {
      if(arr[i]<=min){
        min=arr[i];
      }
    }
    sum=min+max;
    cout<<sum;
    return 0;
    
}