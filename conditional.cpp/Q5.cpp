// Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
// and division.
#include<iostream>
using namespace std;
int main(){
    char op;
    float num1,num2;
    cout<<"enter the number"<<endl;
    cin>>num1>>num2;
    cout<<"enter the operator (+,-,*,/)"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"num1+num2= "<<num1+num2;
        break;
        case '-':
        cout<<"num1-num2"<<num1-num2;
        break;
        case '*':
        cout<<"num1*num2"<<num1*num2;
        break;
        case '/':
        cout<<"num1/num2"<<num1/num2;
        break;
    
    default:
    cout<<"the operator is incorrect";
        break;
    }
    return 0;
}