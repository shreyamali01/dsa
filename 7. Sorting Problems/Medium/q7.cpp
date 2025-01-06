#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> output(nums.size(),0);
        int pos = 0;
        int neg = 1;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]>0){
                output[pos] = nums[i];
                pos += 2;
            }
            else {
                output[neg] = nums[i];
                neg += 2;
            }
        }
        return output;
    }
};