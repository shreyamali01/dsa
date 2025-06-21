#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void immediateSmaller(vector<int> &arr)
{
    stack<int> st;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while ((!st.empty()) && (arr[i] <= st.top()))
        {
            st.pop();
        }
        if (st.empty())
        {
            arr[i] = -1;
        }
        else
        {
            arr[i] = st.top();
        }
        st.push(curr);
    }
}

int main()
{
    vector<int> nums = {3724, 5151, 801, 1768, 6220};
    immediateSmaller(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}