#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i + 1]] > mp[s[i]])
        {
            ans -= mp[s[i]];
        }
        else
        {
            ans += mp[s[i]];
        }
    }
    return ans;
}

int main()
{
    cout << romanToInt("MCMXCIV");
}