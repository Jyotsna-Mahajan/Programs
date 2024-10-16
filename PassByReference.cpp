#include<iostream>
using namespace std;
void ChangeArr(int arr[], int size)
{
    cout<<"in function"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
        arr[i]=2*arr[i];
    }
    cout<<endl;
}
int main()
{
    int arr[]={1,2,3};
    ChangeArr(arr,3);
    cout<<"in main"<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}