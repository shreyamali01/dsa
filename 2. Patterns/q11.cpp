#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        if (i%2==0){
            for (int j=0; j<=i; j++){
                if (j%2==0){
                    cout << 1 << " ";
                }
                else {
                    cout << 0 << " ";
                }
            }
            cout << endl;
        }
        else {
            for (int j=0; j<=i; j++){
                if (j%2==0){
                    cout << 0 << " ";
                }
                else {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
        
    }
    return 0;
}