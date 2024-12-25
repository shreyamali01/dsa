#include <bits/stdc++.h>
using namespace std;

int sumOfSeries(int n) {
    
    if (n==1){
        return 1;
    }

    return sumOfSeries(n-1)+(n*n*n);
    }

int main() {
    int n;
    cin >> n;
    int ans = sumOfSeries(n);
    cout << "The answer is " << ans << " ";
    return 0;
}