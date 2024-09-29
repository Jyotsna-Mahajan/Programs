#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After swapping num1 and num2: "<<num1<<" "<<num2<<endl;
    
}