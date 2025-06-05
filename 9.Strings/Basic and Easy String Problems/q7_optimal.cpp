#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s == t)
    {
        return true;
    }
    if (s.size() != t.size())
    {
        return false;
    }

    vector<int> mpp(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i] - 'a']++;
        mpp[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (mpp[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "anagram";
    string goal = "nagaram";
    cout << isAnagram(s, goal);
    return 0;
}
