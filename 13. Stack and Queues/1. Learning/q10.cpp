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

    string infixToPrefix(string &s)
    {
        int n = s.size();
        stack<char> st;
        // reversing the string and making the brackets opposite
        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            if (s[i] == '(')
            {
                s[i] = ')';
            }
            else if (s[i] == ')')
            {
                s[i] = '(';
            }
            if (s[j] == ')')
            {
                s[j] = '(';
            }
            else if (s[j] == '(')
            {
                s[j] = ')';
            }

            swap(s[i], s[j]);
            i++;
            j--;
        }

        // infix to postfix logic
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            // if s[i] is a character add it as it is
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                ans += s[i];
            }

            // s[i] is operator and the stack is empty
            else if (st.empty())
            {
                st.push(s[i]);
            }

            else if (s[i] == '(')
            {
                st.push(s[i]);
            }

            else if (s[i] == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }

            else
            {
                while ((!st.empty()) && (priorityOperators(s[i]) < priorityOperators(st.top())))
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
        int m = ans.size();
        i = 0;
        j = m - 1;
        // reversing again
        while (i <= j)
        {
            swap(ans[i], ans[j]);
            i++;
            j--;
        }

        return ans;
    }
};

int main()
{
    string exp = "(A+B)*C-D+F";
    cout << "Infix expression: " << exp << endl;

    Solution obj;
    string prefix = obj.infixToPrefix(exp);
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
