#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "The given array is " << endl;
    for (int i=0; i<n; i++){
        cout << arr[i];
    }

    int hash[13] = {0};
    for (int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    cout << "Enter the number of queries to be checked "; 
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << "number of times the number appears is " << hash[number];
    }
    

    return 0;
}