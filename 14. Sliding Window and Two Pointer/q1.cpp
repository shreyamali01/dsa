#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int max_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            unordered_map<char, int> mpp;
            for (int j = i; j < n; j++)
            {
                if (mpp.find(s[j]) != mpp.end())
                {
                    break;
                }
                else
                {
                    cnt = cnt + 1;
                }
                mpp[s[j]] = 1;
            }
            max_cnt = max(cnt, max_cnt);
        }
        return max_cnt;
    }
};