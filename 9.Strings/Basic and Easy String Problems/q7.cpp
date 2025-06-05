#include <bits/stdc++.h>
#include <iostream>
#include <map>
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
    map<char, int> mpp1;
    map<char, int> mpp2;
    for (int i = 0; i < s.size(); i++)
    {
        mpp1[s[i]] += 1;
        mpp2[t[i]] += 1;
    }
    if (mpp1 == mpp2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s = "anagram";
    string goal = "nagaram";
    cout << isAnagram(s, goal);
    return 0;
}
