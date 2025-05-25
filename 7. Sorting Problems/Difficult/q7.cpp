#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    int i = 0;
    int start = intervals[0][0];
    int end = intervals[0][1];
    for (int i = 1; i < n; i++)
    {
        if (intervals[i][0] < end)
        {
            end = max(end, intervals[i][1]);
        }
        else
        {
            ans.push_back({start, end});
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    ans.push_back({start, end});
    return ans;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> ans = merge(intervals);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
    }
}