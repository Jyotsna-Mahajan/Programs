#include<iostream>
using namespace std;
int main()
{
    
    int x;
    cout<<"Enter the base: ";
    cin>>x;
    int n;
    cout<<"Enter the power: ";
    cin>>n;
    long  binform=n;
    if(n<0)
    {
        x=1/x;
        binform=-binform;
    }
    double ans=1;
    while(binform>0)
    {
        if(binform%2==1)
        {
            ans=ans*x;
        }
        x=x*x;
        binform=binform/2;
    }
    cout<<ans<<endl;
   return 0;
}
