#include<iostream>
#include<vector>
using namespace std;
vector<int> ProductExceptSelf(vector<int>&nums)
{
    int n=nums.size();
    vector<int>ans(n,1);
    for(int i=1; i<n; i++)
    {
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    for(int i=n-2; i>=0; i--)
    {
        suffix=suffix*nums[i+1];
        ans[i]=ans[i]*suffix;
    }
    return ans;
}
int main()
{
    vector<int>nums={1,2,3,4};
     int n=nums.size();
    vector<int>ans=ProductExceptSelf(nums);
    // Printing the result
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    
    
}