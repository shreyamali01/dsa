#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

bool isIsomorphic(string s, string t)
{
    int m = s.size();
    int n = t.size();
    if (m != n)
    {
        return false;
    }
    map<char, char> mpp1;
    map<char, char> mpp2;
    for (int i = 0; i < m; i++)
    {
        // check in one direction
        if (mpp1.find(s[i]) == mpp1.end())
        {
            mpp1[s[i]] = t[i];
        }
        else
        {
            if (mpp1[s[i]] != t[i])
            {
                return false;
            }
        }

        // check in reverse direction
        if (mpp2.find(t[i]) == mpp2.end())
        {
            mpp2[t[i]] = s[i];
        }
        else
        {
            if (mpp2[t[i]] != s[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string s = "app";
    string t = "dad";
    cout << isIsomorphic(s, t);
    return 0;
}
