#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    int count = 0;
    for (int i=1; i<=sqrt(n); i++){
        if (count >= 2){
            return false;
        }
        if ((n%i)==0){
            count += 1;
        }
    }

    cout << "The count is " << count << endl;
    
    if (count >= 2){
        return false;
    }
    else{
        return true;
    }
    }

int main() {
    int n;
    cin >> n;
    bool ans = isPrime(n);
    cout << "The answer is " << ans;
    return 0;
}