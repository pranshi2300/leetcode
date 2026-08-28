// Last updated: 8/28/2026, 10:33:41 PM
1class Solution {
2public:
3    int getSum(int a, int b) {
4        while (b != 0) {
5            int sum = a ^ b;
6            int carry = (a & b) << 1;
7            a = sum;
8            b = carry;
9        }
10        return a;
11    }
12};