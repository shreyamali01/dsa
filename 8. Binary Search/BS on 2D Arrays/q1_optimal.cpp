#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findNumOfOnes(vector<int> a)
{
    sort(a.begin(), a.end());
    int low = 0;
    int high = a.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return (a.size() - low);
}

int minRow(vector<vector<int>> &mat)
{
    int n = mat.size();
    int min_idx = INT_MAX;
    int min_count = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int numOfOnes = findNumOfOnes(mat[i]);
        if (numOfOnes < min_count)
        {
            min_count = numOfOnes;
            min_idx = i;
        }
    }
    return min_idx + 1;
}

int main()
{
    vector<vector<int>> mat = {{1, 1, 1, 1}, {1, 1, 0, 0}, {0, 0, 1, 1}, {1, 1, 1, 1}};
    cout << "ans is " << minRow(mat);
}