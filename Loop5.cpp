#include<iostream>
using namespace std;
int main()
{
    int num; 
    cout<<"Enter the number: ";
    cin>>num;
    int i, count=0;
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"The entered number is a prime number"<<endl;
    }
    else
    {
        cout<<"The entered number is not a prime number"<<endl;
    }
}