// Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
// that they belong to different arrays and are not at the same index. Here 1<size<101
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int b[]={9,3,4,5,6};
    int i;
    int sum;
    int min1=a[0],min2=b[0];
    for(i=0;i<=4;i++){
        if(a[i]<=min1){
            min1=a[i];
        }
    }
    for ( i = 0; i <=4; i++)
    {
        if(b[i]<=min2){
            min2=b[i];
        }
       
    }
    sum=min1+min2;
    cout<<sum;
    return 0;
}