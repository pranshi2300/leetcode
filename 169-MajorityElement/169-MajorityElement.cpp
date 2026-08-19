// Last updated: 8/19/2026, 9:53:20 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int n=nums.size();
6        return nums[n/2];
7    }
8};