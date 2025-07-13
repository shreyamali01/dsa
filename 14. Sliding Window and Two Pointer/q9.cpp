#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include <unordered_map>
int kDistinctChars(int k, string &str)
{
    int left = 0;
    int right = 0;
    int n = str.size();
    int max_len = 0;
    unordered_map<char, int> mpp;
    while (right < n)
    {
        mpp[str[right]]++;
        while (mpp.size() > k)
        {
            mpp[str[left]]--;
            if (mpp[str[left]] == 0)
            {
                mpp.erase(str[left]);
            }
            left = left + 1;
        }
        max_len = max(max_len, right - left + 1);
        right = right + 1;
    }
    return max_len;
}
