#include<iostream>
using namespace std;
int diagnolSum(int mat[][3],int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0;  j<n; j++)
        {
            if(i==j)
            {
                sum= sum+mat[i][j];  //Primary Diagnol
            }
            else if(j==n-i-1){
                sum=sum+mat[i][j]; //Secondary Diagnol
            }
        }
    }
    return sum;
}
int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    cout<<diagnolSum(mat,n)<<endl;
}