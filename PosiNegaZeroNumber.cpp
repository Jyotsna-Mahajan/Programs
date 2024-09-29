#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Input a number: ";
    cin>>num1;
    if(num1>0)
    {
        cout<<"The entered number is +ve ";
    }
    else if(num1<0)
    {
        cout<<"The entered number is negative ";
    }
    else
    {
        cout<<"The number is zero ";
    }
}