#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++){

        for (int j=0; j<(n-i-1); j++){
            cout << " " << " ";
        }

        for (int j=0; j<=i; j++){
            char x = 'A' + j;
            cout << x << " ";
        }

        for (int j=1; j<=i; j++){
            char x = 'A' + (i-j);
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}