#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        int n = num.size();
        int or_k = k;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && k > 0 && st.top() > num[i])
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        if (st.size() != (n - or_k))
        {
            while (k > 0)
            {
                st.pop();
                k--;
            }
        }
        string ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        while (!ans.empty() && ans[0] == '0')
        {
            ans = ans.substr(1);
        }
        if (ans.empty())
        {
            ans = "0";
        }
        return ans;
    }
};