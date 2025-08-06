#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int m = 6;

    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u;
        cout << "enter u " << endl;
        cin >> u;
        cout << endl;

        int v;
        cout << "enter v " << endl;
        cin >> v;
        cout << endl;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}