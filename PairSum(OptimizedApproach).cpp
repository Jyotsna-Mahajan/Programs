#include<iostream>
using namespace std;
int pairSum(int arr[], int ans[],int target,int size)
{
    int i=0,j=size-1 ;
    while(i<j){
        int pairSum=arr[i]+arr[j];
        if(pairSum>target)
        {
            j--;
        }
        else if(pairSum<target)
        {
            i++;
        }
        else
        {
            ans[0]=i;
            ans[1]=j;
            return 0;
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