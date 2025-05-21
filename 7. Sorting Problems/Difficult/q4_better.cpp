#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    set<vector<int>> st;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            set<int> mp;
            for (int k = j + 1; k < nums.size(); k++)
            {

                int res = target - (nums[i] + nums[j] + nums[k]);
                if (mp.find(res) != mp.end())
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], res};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                };
                mp.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);

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