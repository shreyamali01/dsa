// class Solution
// {
// public:
//     string decimalToBinary(int n)
//     {
//         string ans = "";
//         while (n > 0)
//         {
//             if (n % 2 == 0)
//             {
//                 ans += '0';
//             }
//             else
//             {
//                 ans += '1';
//             }
//             n = n / 2;
//         }
//         return ans;
//     }

//     int hammingWeight(int n)
//     {
//         string rev_ans = decimalToBinary(n);
//         int cnt = 0;
//         for (int i = 0; i < rev_ans.size(); i++)
//         {
//             if (rev_ans[i] == '1')
//             {
//                 cnt += 1;
//             }
//         }
//         return cnt;
//     }
// };