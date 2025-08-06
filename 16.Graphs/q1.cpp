#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int m = 6;

    // graph here
    int adj[n + 1][n + 1] = {0};
    for (int i = 0; i < m; i++)
    {
        int u;
        int v;

        cout << "enter u" << endl;
        cin >> u;
        cout << endl;
        cout << "enter v" << endl;
        cin >> v;
        cout << endl;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    cout << "printing the matrix" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}