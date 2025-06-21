#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums)
{
    int n = nums.size() - 1;
    stack<int> st;
    vector<int> res;
    for (int i = n; i >= 0; i--)
    {
        if (st.empty())
        {
            res.push_back(-1);
        }
        else
        {
            while (!st.empty() && nums[i] >= st.top())
            {
                st.pop();
            }
            if (!st.empty())
            {
                res.push_back(st.top());
            }
            else
            {
                res.push_back(-1);
            }
        }
        st.push(nums[i]);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    vector<int> nums = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2, 4, 6};
    vector<int> ans = nextGreaterElement(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
