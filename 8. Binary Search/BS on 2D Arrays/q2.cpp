#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findNumOfOnes(vector<int> &a)
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

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
    int count = 0;
    int idx = 0;
    vector<int> ans;
    for (int i = 0; i < mat.size(); i++)
    {
        int numOfOnes = findNumOfOnes(mat[i]);
        if (numOfOnes > count)
        {
            count = numOfOnes;
            idx = i;
        }
    }
    ans = {idx, count};
    return ans;
}

int main()
{
    vector<vector<int>> mat = {{0, 1}, {1, 0}};
    vector<int> ans = rowAndMaximumOnes(mat);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}