#include<iostream>
using namespace std;
int binToDecimal(int num)
{
    int ans=0, pow=1; 
    while(num>0)
    {
        int rem=num%10;
        ans=ans+(rem*pow);
        num=num/10;
        pow=pow*2;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the binary number: ";
    cin>>n;
    cout<<"The decimal number is: "<<binToDecimal(n);
}