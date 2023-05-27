#include<iostream>
using namespace std;
int main()
{
    cout<<"the armstrong number from 100 to 500 is : "<<endl;
    for(int i=100;i<=500;i++){
        int sum=0;
        int t=i;
        while(t!=0){
            sum=sum+((t%10)*(t%10)*(t%10));
            t=t/10;
            
        }
        if(sum==i){
                cout<<i<<endl;
            }
    }
    return 0;
}