#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the nth term: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum=sum+(i*i);
    }
    cout<<"The sum of above series is: "<<sum;
}