#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n==0){
        cout << 0;
        return 0;
    }

    if (n==1){
        cout << 1;
        return 0;
    }

    int a = 0;
    int b = 1;
    int sum;
    for (int i=2; i<=n; i++){
        sum = a + b;
        a = b;
        b = sum;

    }
    cout << sum << endl;
    return 0;
}