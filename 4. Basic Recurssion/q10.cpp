#include <bits/stdc++.h>
using namespace std;

vector<long long> factorialNumbers(long long n) {
    int i = 1;
    long long fac = 1;
    vector<long long> output;
    
    while((fac*i)<=n){
        fac = fac*i;
        output.push_back(fac);
        i++;
    }

    return output;   
}

int main() {
    long long n;
    cin >> n;
    vector <long long> output = factorialNumbers(n);
    for (int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
    return 0;
}