#include<iostream>
using namespace std;
int DecimalToBinary(int num)
{
    int ans=0, pow=1;
    while(num>0)
    {
        int rem=num%2;
        num=num/2;
        ans=ans+(rem*pow);
        pow=pow*10;
    }
    return ans;
}
int main()
{
   int n;
   cout<<"Enter the decimal number: ";
   cin>>n;
   cout<<"The binary number is: "<<DecimalToBinary(n);
}