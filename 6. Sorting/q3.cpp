#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i=0; i<n; i++){
        int j = i;
        while ((j>0) && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int val;
    vector <int> arr;
    for (int i=0; i<n; i++){
        cin >> val;
        arr.push_back(val);
    }
    insertionSort(arr);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}