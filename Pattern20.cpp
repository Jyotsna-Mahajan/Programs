#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int space=i-1;
        for(int j=1; j<=n-i+1; j++)
        {
            while(space)
            {
                cout<<" ";
                space=space-1;
            }
            cout<<i;
        }
        cout<<endl;
    }
}