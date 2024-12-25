#include <bits/stdc++.h>
using namespace std;

void printNos(int N) {
    if (N==1){
        cout << 1 << " ";
        return;
    }
    cout << N << " ";
    printNos(N-1);
    }

int main() {
    int n;
    cin >> n;
    printNos(n);
    return 0;
}