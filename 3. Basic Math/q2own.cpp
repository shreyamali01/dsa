#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int num_digits = log10(abs(x)) + 1;

    // if num_digits < 10

    if (num_digits<10){
        int multiplier = 1;
        int rev_x = 0;
        for (int i=0; i<(num_digits-1); i++) {
            multiplier = multiplier*10; 
        }
        cout << "The multiplier is " << multiplier << endl;

        int abs_x = abs(x);
        while(abs_x!=0){
            int digit = abs_x%10;
            rev_x += digit*multiplier;
            abs_x = abs_x/10;
            multiplier = multiplier/10;
        }
        if (x>=0){
            cout << "The reverse number is " << rev_x << endl;
            return rev_x;
        }
        else{
            cout << "The reverse number is " << (-1)*rev_x << endl;
            return (-1)*rev_x;
        }
    }

    //when number of digits is equal to 10, because the ones greater than 10 will not be accepted as input
    
    else{

        //ten digit number is negative
        int abs_copy;
        if (x<0){
            abs_copy = abs(x);
            abs_copy = abs_copy/10; 
        }

        //ten digit number is positive
        else{

        }

        
    }
}



int main() {
    int n;
    cin >> n;
    cout << "ans = " << reverse(n) << endl;
    return 0;
}