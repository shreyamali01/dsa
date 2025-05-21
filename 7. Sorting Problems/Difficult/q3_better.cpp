#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    int tar = 0;
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> temp;
        for (int j = i + 1; j < n; j++)
        {
            tar = -(nums[i] + nums[j]);
            if (temp.find(tar) != temp.end())
            {
                vector<int> subarr = {nums[i], nums[j], tar};
                sort(subarr.begin(), subarr.end());
                st.insert(subarr);
            }
            temp.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}