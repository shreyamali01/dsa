#include <bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target){
    int left = 0;
    int right = n-1;
    int sum = 0;
    sort(book.begin(),book.end());
    while(left <= right){
        sum = book[left] + book [right];
        if (sum == target){
            return "YES";
        }
        else if (sum>target){
            right--;
        }
        else{
            left++;
        } 
    }
    return "NO";
}

int main() {
    int target;
    cout << "enter target " << endl;
    cin >> target;
    cout << endl;

    int n;
    cout << "enter number of elements in the array " << endl;
    cin >> n;
    cout << endl << "array ";

    int val;
    vector <int> arr;
    for (int i=0; i<n; i++){
        cin >> val;
        arr.push_back(val);
    }

    string ans = read(n, arr, target);
    cout << "ans is " << ans;
}