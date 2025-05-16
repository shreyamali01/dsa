#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }
    int long_len = 0;
    // finding the longest consecutive element
    for (auto x : st)
    {
        int len = 1;
        if (st.find(x - 1) == st.end())
        {
            while (st.find(x + 1) != st.end())
            {
                len = len + 1;
                x = x + 1;
            }
        }

        long_len = max(len, long_len);
    }
    return long_len;
}

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int ans = longestConsecutive(nums);
    cout << "ans " << ans;
    return 0;
}