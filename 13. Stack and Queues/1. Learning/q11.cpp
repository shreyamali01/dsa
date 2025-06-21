#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// User function Template for C++

class Solution
{
public:
    string postToInfix(string exp)
    {
        stack<string> st;
        int n = exp.size();

        for (int i = 0; i < n; i++)
        {
            if ((exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= '0' && exp[i] <= '9'))
            {
                st.push(string(1, exp[i]));
            }
            else
            {
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                string ans = "(" + t2 + exp[i] + t1 + ")";
                st.push(ans);
            }
        }

        return st.top();
    }
};