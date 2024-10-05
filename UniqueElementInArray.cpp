#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,1,2,3};
    int n=5;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=-1;
                arr[j]=-1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=-1)
        {
            cout<<"The unique element is: "<<arr[i];
        }
    }
}