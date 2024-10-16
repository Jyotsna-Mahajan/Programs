#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int nums[]={5,15,22,1,-15,24};
    int size=6;
    int smallestIndex=INT_MAX;
    int largestIndex=INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(nums[i]<smallestIndex)
        {
            smallestIndex=i;
        }
        if(nums[i]>largestIndex)
        {
            largestIndex=i;
        }
    }
    cout<<"Smallest = "<<smallestIndex<<endl;
    cout<<"largest = "<<largestIndex<<endl;
}