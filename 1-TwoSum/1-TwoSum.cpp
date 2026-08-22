// Last updated: 8/22/2026, 10:05:41 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5        for(int i=0;i<nums.size();i++){
6            int needed=target-nums[i];
7            if(mp.find(needed)!=mp.end()){
8                return {mp[needed],i};
9            }
10            mp[nums[i]]=i;
11        }
12        return{};
13    }
14};