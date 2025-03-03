#include<iostream>
#include<climits>
using namespace std;

int getMaxColumnSum(int matrix[][3], int rows, int cols)
{
    int maxColSum = INT_MIN;
    
    for(int j = 0; j < cols; j++) // Iterate over columns
    {
        int colSum = 0;
        for(int i = 0; i < rows; i++) // Iterate over rows for a fixed column
        {
            colSum += matrix[i][j];
        }
        maxColSum = max(maxColSum, colSum);
    }
    return maxColSum;
}

int main()
{
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int rows = 3;
    int cols = 3;

    cout << "Maximum Column Sum: " << getMaxColumnSum(matrix, rows, cols) << endl;

    return 0;
}
