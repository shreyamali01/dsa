#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j = 0; j<=i; j++){
            char x = 'A' + (n-j-1);
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}