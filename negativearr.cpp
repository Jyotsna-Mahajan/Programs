#include<iostream>
using namespace std;
void negativearr(int arr[], int size)
{
    int st=0, end=size-1;
    while(st<=end)
    {
        if(arr[st]<0)
        {
            st++;
        }
        else if(arr[end]>0)
        {
            end--;
        }
        else
        {
            swap(arr[st],arr[end]);
            st++;
            end--;
        }
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    negativearr(arr,size);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}