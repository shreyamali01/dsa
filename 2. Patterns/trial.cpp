#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int> > &arr, int x, int y, int n){
    if (x>y){
        return;
    }
    for (int i=x; i<y; i++){
        for (int j=x; j<y; j++){
            if (i==x || j==x || i==(y-1) || j==(y-1)){
                arr[i][j] = n;
            }
        }
    }
    printMatrix(arr, x+1, y-1, n-1);
}

void foo(vector<vector<int> > &arr, int n, int a){
    for (int i=0; i<a; i++){
        for (int j=0; j<a; j++){
            arr[i][j] = max(abs(n-1-i), abs(n-1-j))+1;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a = (2*n-1);
    vector<vector<int> > arr(a, vector<int>(a, 0));

    //printMatrix(arr, 0, a, n);
    foo(arr, n, a);
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}