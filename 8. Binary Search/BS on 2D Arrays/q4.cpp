#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int row = 0;
    int col = m - 1;
    while (row < n && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return true;
        }

        else if (matrix[row][col] > target)
        {
            col = col - 1;
        }
        else
        {
            row = row + 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    cout << searchMatrix(matrix, target);
}
