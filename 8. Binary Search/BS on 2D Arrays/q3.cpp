#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPossibleMatrix(vector<int> a, int target)
{
    int low = 0;
    int high = a.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == target)
        {
            return true;
        }
        else if (target > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[n - 1].size();
    if (target < matrix[0][0] || target > matrix[n - 1][m - 1])
    {
        return false;
    }
    int low = 0;
    int high = matrix.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int len_mid = matrix[mid].size();
        if ((matrix[mid][0] <= target && target <= matrix[mid][len_mid - 1]))
        {
            return isPossibleMatrix(matrix[mid], target);
        }
        else if (matrix[mid][0] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
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