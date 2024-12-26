#include <bits/stdc++.h>
using namespace std;

/*

long long int fibSum(long long int N){
    
    if (N==0){
        return 0;
    }

    if (N==1){
        return 1;
    }
    
    return fibSum(N-1) + fibSum(N-2) + 1;
}
*/

long long int fibSum(long long int N){
    long long int a = 0;
    long long int b = 1;
    long long int sum = 0;
    long long int main_sum = a + b;
    

    if (N==0){
        return 0;
    }

    if (N==1){
        return 1;
    }
    

    for (int i=2; i<=N; i++){
        sum = ((a + b)%1000000007);
        a = (b%1000000007);
        b = (sum%1000000007);
        main_sum += sum;
    }

    return (main_sum%1000000007);
};

int main(){
    long long int n;
    cin >> n;
    long long int ans = fibSum(n);
    cout << "The answer is " << ans;
    return 0;
}