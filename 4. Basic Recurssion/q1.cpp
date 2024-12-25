#include <bits/stdc++.h>
using namespace std;


void printNos(int n) {
    if (n==1){
        cout << 1 << " ";
        return;
    }

    printNos(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    printNos(n);
    return 0;

}