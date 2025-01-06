#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map <int, int> mpp;
    vector <int> output;
    for (int i=0; i<nums.size(); i++){
        int val = target - nums[i];
        
        // if we traverse and the difference is not in the map
        if (mpp.find(val)==mpp.end()){
            mpp[nums[i]] = i;
        }

        // if we traverse and the difference is in the map
        else if (mpp.find(val)!=mpp.end()){
            int j = mpp[val];
            int a = min (i,j);
            int b = max(i,j);
            output.push_back(a);
            output.push_back(b);
            return output;
        }
    }

    return output;
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

    vector <int> output = twoSum(arr,target);
    for (int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }

    return 0;
}
