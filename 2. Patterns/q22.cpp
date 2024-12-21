#include <bits/stdc++.h>
using namespace std;

void printMatrix(int a, int n, vector<vector<int> > &arr, int og){
    if (a == 1){
        arr[og-1][og-1] = 1;
        return;
    }
    for (int i=(og-n); i<=(og+n-2); i++){
        for (int j=(og-n); j<=(og+n-2); j++){
            if (i==(og-n) || j==(og-n) || i==(og+n-2) || j == (og+n-2)){
                arr[i][j] = n;
            }
        }
    }
    printMatrix(a-2, n-1, arr, og);
}

int main() {
    int n;
    cin >> n;
    int a = (2*n-1);
    vector<vector<int> > arr(a, vector<int>(a, 0));

    printMatrix(a, n, arr, n);

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}