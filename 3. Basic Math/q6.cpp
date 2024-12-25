#include <bits/stdc++.h>
using namespace std;

bool armstrongNumber(int n) {
        if (n<0){
            return false;
        }
        int num_digits;
        num_digits = log10(abs(n)) + 1;
        int og_n = n;
        int res = 0;
        int digit;
        while(n!=0){
            digit = (n%10);
            cout << digit << endl;
            res += pow(digit, num_digits);
            cout << res << endl;
            n = n/10;
        }
        if (res == og_n){
            cout << "true";
            return true;
        }
        else{
            cout << "false";
            return false;
        }

    }

int main() {
    int n;
    cin >> n;
    bool ans = armstrongNumber(n);
    cout << "The answer is " << ans;
    return 0;
}