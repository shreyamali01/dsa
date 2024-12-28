#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i=0; i<n-1; i++){
        int min = arr[i];
        int min_var = i;

        for (int j=i; j<n; j++){
            if (arr[j]<min){
                min = arr[j];
                min_var = j;

            } 
        }

        swap(arr[i],arr[min_var]);
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
    selectionSort(arr);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}