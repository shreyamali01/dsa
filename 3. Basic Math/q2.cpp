#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
    int ans = 0;
    int digit;
    int og_x = x;
    while (x!=0){
        digit = x%10;
        if (ans > INT_MAX/10 || ans < INT_MIN/10){
            return 0;
        }
        else{
            ans = ans*10 + digit;
            x = x/10;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int ans = reverse(n);
    cout << "The answer is " << ans << endl;
    return 0;
}