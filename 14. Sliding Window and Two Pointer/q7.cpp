#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int left = 0;
        int right = 0;
        int n = s.size();
        int mpp[3] = {0};
        int cnt = 0;
        while (right < n)
        {
            mpp[s[right] - 'a']++;
            while (mpp[0] > 0 && mpp[1] > 0 && mpp[2] > 0)
            {
                cnt = cnt + (n - right);
                mpp[s[left] - 'a']--;
                left = left + 1;
            }
            right = right + 1;
        }
        return cnt;
    }
};