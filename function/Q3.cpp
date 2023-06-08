// Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.
#include <iostream>
using namespace std;
double age(int a)
{
    if (a >= 18)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;

    cout << "Enter the age :" << endl;
    cin >> a;
    if (age(a) == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }
}