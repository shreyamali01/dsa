#include <bits/stdc++.h>
using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i=1; i<=n; i++){
        int x = n/i;
        sum += x * i;
    }
    return sum;
}

int main(){
    int n; 
    cin >> n;
    int ans = sumOfDivisors(n);
    cout << "The ans is " << ans;
    return 0;
}