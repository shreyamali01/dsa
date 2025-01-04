#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int>& arr) {
    int totalJumps = 0;
    int farthest = 0;
    int destination = arr.size()-1;
    int lastJump = 0;

    if (arr.size()==1){
        return 0;
    }
    for (int i=0; i<arr.size(); i++){
        farthest = max (farthest, (i + arr[i]));
        if (i==farthest && i!=destination){
            return -1;
        }
        if(i==lastJump){
            lastJump = farthest;
            totalJumps++;

            if (farthest>=destination){
                return totalJumps;
            }
        }
        
    }
    return -1;
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
    cout << endl;
    int ans = minJumps(arr);
    cout << "ans is " << ans;
    return 0;
}