#include <bits/stdc++.h>
using namespace std;

void printGfg(int N) {
        if (N==1){
            cout << "GFG" << " ";
            return;
        }
        printGfg(N-1);
        cout << "GFG" << " ";
    }

int main() {
    int n;
    cin >> n;
    printGfg(n);
    return 0;
}