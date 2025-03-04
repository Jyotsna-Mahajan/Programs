#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubArray(vector<int>&nums)
{
    int currSum=0,maxSum=INT_MIN;
    for(int val: nums)
    {
        currSum=currSum+val;
         maxSum=max(currSum,maxSum);
         if(currSum<0)
         {
             currSum=0;
         }
    }
    return maxSum;
}
int main()
{
     vector<int>nums={3,-4,5,4,-1,7,-8};
    cout<<maxSubArray(nums);
}