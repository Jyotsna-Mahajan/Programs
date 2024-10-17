#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int nums[]={30,15,22,1,15,24};
    int size=6;
    int smallestIndex=0;
    int largestIndex=0;
    for(int i=0; i<size; i++)
    {
        if(nums[i]<nums[smallestIndex])
        {
            smallestIndex=i;
        }
        if(nums[i]>nums[largestIndex])
        {
            largestIndex=i;
        }
    }
    cout<<"Smallest = "<<smallestIndex<<endl;
    cout<<"largest = "<<largestIndex<<endl;
}