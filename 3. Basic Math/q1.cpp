#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int n){
    int count = 0;
    int og_n = n;
    while (n!=0){
        int x = n%10;
        n = n/10;
        if ((x!=0)&&(og_n%x)==0){
            count += 1;
        }
        else {
            continue;
        }
    }
    cout << count << " ";
    return count;
}

int main() {
    int n;
    cin >> n;
    evenlyDivides(n);
    return 0;
}

