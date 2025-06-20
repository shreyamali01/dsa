#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int priorityOperators(char a)
    {
        if (a == '^')
        {
            return 3;
        }
        else if (a == '*' || a == '/')
        {
            return 2;
        }
        else if (a == '+' || a == '-')
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }

    string infixToPostfix(string &s)
    {
        stack<char> st;
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= '0' && s[i] <= '9'))
            {
                ans += s[i];
            }
            else if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while ((!st.empty()) && st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while ((!st.empty()) && (priorityOperators(s[i]) <= priorityOperators(st.top())))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};

int main()
{
    string exp = "(p+q)*(m-n)";
    cout << "Infix expression: " << exp << endl;

    Solution obj;
    string postfix = obj.infixToPostfix(exp);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
