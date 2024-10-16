#include<iostream>
using namespace std;
void reverseArray1(int arr1[],int size1)
{
    int start=0, end=size1-1;
    while(start<end)
    {
        swap(arr1[start],arr1[end]);
        start++;
        end--;
    }
}
void reverseArray2(int arr2[], int size2)
{
    int start=0, end=size2-1;
    while(start<end)
    {
        swap(arr2[start],arr2[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr1[]={4,2,7,8,1,2,5};
    int arr2[]={3,4,2,6,5,1};
    int size1=7;
    int size2=6;
    reverseArray1(arr1,size1);
    reverseArray2(arr2,size2);
    cout<<"Odd Array"<<endl;
    for(int i=0; i<size1; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Even Array"<<endl;
    for(int i=0; i<size2; i++)
    {
        cout<<arr2[i]<<" ";
    }
}