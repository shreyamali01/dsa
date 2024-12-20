#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int z = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            z = z + 1;
            cout << z  << " ";
        }
        cout << endl;
    }
    return 0;
}