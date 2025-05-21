#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    set<vector<int>> st;
    int n = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> subarr = {nums[i], nums[j], nums[k]};
                    sort(subarr.begin(), subarr.end());
                    st.insert(subarr);
                }
            }
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