#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

string frequencySort(string s)
{
    priority_queue<pair<int, char>> pq;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto x : mp)
    {
        pq.push({x.second, x.first});
    }
    string ans = "";
    while (!pq.empty())
    {
        pair<int, char> val = pq.top();
        ans += string(val.first, val.second);
        pq.pop();
    }
    return ans;
}

int main()
{
    string s = "tree";
    cout << frequencySort(s);
    return 0;
}
