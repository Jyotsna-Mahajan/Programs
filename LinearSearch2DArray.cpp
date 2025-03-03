#include<iostream>
#include<vector>
using namespace std;
vector<int>LinearSearch(vector<vector<int>>matrix,int rows, int cols,int key)
{
    vector<int>ans={-1,-1};
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(matrix[i][j]==key)
            {
            
                return {i,j};
            }
            
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows=4;
    int cols=3;
    int key;
    cout << "Enter the key to search: ";
    cin >> key; 
    vector<int>ans=LinearSearch(matrix,rows,cols,key);
    cout<<"Key found at: "<<ans[0]<<","<<ans[1]<<endl;
    return 0; 
}