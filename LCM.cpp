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
int lcm(int a, int b)
{
    int gcdSum=gcd(a,b);
    return (a*b)/gcdSum;
}
int main()
{
    int a,b; 
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"LCM is: "<<lcm(a,b)<<endl;
    return 0;
}