#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string reverseWords(string s)
{
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalnum(s[i]))
        {
            word += s[i];
        }
        if (s[i] == ' ')
        {
            words.push_back(word);
            word = "";
        }
    }

    words.push_back(word);
    string ans = "";
    for (int i = words.size() - 1; i >= 0; i--)
    {
        if (!words[i].empty())
        {
            ans += words[i];
            ans += " ";
        }
    }
    ans.pop_back();
    return ans;
}

int main()
{
    string s = "the sky is blue";
    string ans = reverseWords(s);
    cout << ans << endl;
    return 0;
}