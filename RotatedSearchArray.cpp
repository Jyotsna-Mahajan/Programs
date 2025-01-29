#include<iostream>
#include<vector>
using namespace std;
int RotatedSearch(vector<int>&A , int target)
{
    int st=0, end=A.size()-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(A[mid]==target)
        {
            return mid;
        }
        if(A[st]<=A[mid]) //Left Sorted Array
        {
            if(A[st]<=target&&target<=A[mid])
            {
                end=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }
        else  //Right Sorted Array
        {
            if(A[mid]<=target&&target<=A[end])
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    vector <int> A= {3,4,5,6,7,0,1,2};
    int target=0;
    cout<<"Index in rotated sorted Array is: "<<RotatedSearch(A,target)<<endl;
    
    vector <int> A1= {6,7,0,1,2,3,4,5};
    int target1=0;
    cout<<"Index in rotated sorted Array is: "<<RotatedSearch(A1,target1);
    
}