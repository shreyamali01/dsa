#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int buy_day = 0;
    int max_profit = 0;
    int profit = 0;
    for (int sell_day=1; sell_day<prices.size(); sell_day++){
        profit = prices[sell_day] - prices[buy_day];
        max_profit = max(profit, max_profit);
        if (prices[sell_day]<prices[buy_day]){
            buy_day = sell_day;
        }
    }
    return max_profit;   
}

int main(){
    int n;
    cin >> n;
    int val;
    vector<int> arr;
    for (int i=0; i<n; i++){
        cin >> val;
        arr.push_back(val);
    }
    int ans = maxProfit(arr);
    cout << "the answer is " << ans;
    return 0;
}
