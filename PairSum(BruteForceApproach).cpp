#include<iostream>
using namespace std;
int pairSum(int arr[], int ans[],int target,int size)
{
    
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ans[0]=i;
                ans[1]=j;
                return 0;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[4]={2,7,11,15};
    int size=4;
    int target=26;
    int ans[2];
    pairSum(arr,ans,target, size);
    cout<<ans[0]<<","<<ans[1]<<endl;
}