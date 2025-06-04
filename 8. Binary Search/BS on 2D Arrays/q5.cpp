#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    int low = 0;
    int high = m - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int max_ele = 0;
        int max_row = 0;
        for (int i = 0; i < n; i++)
        {
            if (mat[i][mid] > max_ele)
            {
                max_ele = mat[i][mid];
                max_row = i;
            }
        }
        int left = -1;
        if (mid - 1 >= 0)
        {
            left = mat[max_row][mid - 1];
        }
        int right = -1;
        if (mid + 1 < m)
        {
            right = mat[max_row][mid + 1];
        }
        if ((max_ele > right) && (max_ele > left))
        {
            return {max_row, mid};
        }
        else if (left > max_ele)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> matrix = {{1, 4}, {3, 2}};
    vector<int> ans = findPeakGrid(matrix);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}