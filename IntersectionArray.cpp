#include<iostream>
using namespace std;
int IntersectionArray(int arr1[], int arr2[], int size1, int size2)
{
    for (int i=0; i<size1; i++)
    {
        for(int j=0; j<size2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
            }
        }
    }
    return 0; 
}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,3,1};
    int size1=5; 
    int size2=4;
    IntersectionArray(arr1,arr2,size1, size2);
    
    
    
}