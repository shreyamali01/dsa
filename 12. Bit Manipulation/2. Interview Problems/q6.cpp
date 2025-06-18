// class Solution
// {
// public:
//     int singleNumber(vector<int> &nums)
//     {
//         long long ans = 0;
//         for (int i = 0; i < 32; i++)
//         {
//             int cnt = 0;
//             for (int j = 0; j < nums.size(); j++)
//             {
//                 if (nums[j] & (1 << i))
//                 {
//                     cnt += 1;
//                 }
//             }
//             if ((cnt % 3) == 1)
//             {
//                 ans = ans | (1LL << i);
//             }
//         }

//         if (ans >> 32 && 1)
//         {
//             ans = ans - (1LL << 32);
//         }
//         return int(ans);
//     }
// };