#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0; 
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    cout<<"Sum of the digits are: "<<sum<<endl;
}