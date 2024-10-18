#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseArray( vector<int>&vec)
{
    int start=0, end=vec.size()-1;
    while(start<end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}
void reverseArray1( vector<int>&vec1)
{
    int start=0, end=vec1.size()-1;
    while(start<end)
    {
        swap(vec1[start],vec1[end]);
        start++;
        end--;
    }
}
int main()
{
     vector<int>vec={4,2,7,8,1,2,5};
      vector<int>vec1={4,2,3,1};
    reverseArray(vec);
    reverseArray1(vec1);
    for(int i=0; i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<vec1.size();i++)
    {
        cout<<vec1[i]<<" ";
    }
    return 0; 
}