#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    if(x<0){
        cout << "false";
        return 0;
    }
    else{
        vector<int> num;
        int digit;
        while(x!=0){ 
            digit = (x%10);  
            num.push_back(digit);
            x = x/10;
        }
        int f_pointer = 0;
        int s_pointer = num.size()-1;
        while(f_pointer < s_pointer){
            if (num[f_pointer] == num[s_pointer]){
                f_pointer++;
                s_pointer--;
                continue;
            }
            else{
                cout << "false";
                return 0;
            }
        }
        cout << "true";
        return 1;

    }
}
    
    