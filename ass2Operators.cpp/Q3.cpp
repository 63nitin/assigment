// Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls
// received grades "A" if 17 boys made up 80% of the students that received grades "A".
#include<iostream>
using namespace std;
int main(){
    int total,boy,girls;
    total=(80*45)/100;
    boy=17;
    girls=total-boy;
    cout<<"total girls grade A="<<girls;
    return 0;


}