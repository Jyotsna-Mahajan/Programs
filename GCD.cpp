#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a=a%b;
        }
        else
        {
            b=b%a;
        }
    }
    if(a==0)
    {
        return b ;
    }
    return a;
}
int main()
{
    int a,b; 
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"GCD is : "<<gcd(a,b)<<endl;
    return 0;
}