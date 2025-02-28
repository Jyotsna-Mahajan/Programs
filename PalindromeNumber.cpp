#include<iostream>
using namespace std;
int reverse(int n)
{
    int revNum=0;
    while(n!=0)
    {
        int dig=n%10;
        revNum=revNum*10+dig;
        n=n/10;
    }
    return revNum;
}
int main()
{
    int n; 
    cout<<"Enter the number: ";
    cin>>n;
    int revNumber= reverse(n);
    if(n==revNumber)
    {
        cout<<"The reverse number is: "<<revNumber<<". The number is Palindrome";
    }
    else
    {
        cout<<"The reverse number is: "<<revNumber<<". The number is not a Palindrome";
    }
}
